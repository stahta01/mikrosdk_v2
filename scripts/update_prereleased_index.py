import os, time, argparse
import json
from elasticsearch import Elasticsearch
from datetime import datetime, timezone
import classes.class_generate_events_json as calendar_events

import support as support

def fetch_current_indexed_packages(es : Elasticsearch, index_name):
    # Search query to use
    query_search = {
        "size": 5000,
        "query": {
            "match_all": {}
        }
    }

    # Search the base with provided query
    num_of_retries = 1
    while num_of_retries <= 10:
        try:
            response = es.search(index=index_name, body=query_search)
            if not response['timed_out']:
                break
        except:
            print("Executing search query - retry number %i" % num_of_retries)
        num_of_retries += 1

    all_packages = []
    for eachHit in response['hits']['hits']:
        if not 'name' in eachHit['_source']:
            continue
        if '_doc' == eachHit['_type']:
            if False == eachHit['_source']['hidden']:
                all_packages.append(eachHit['_source'])

    # Sort all_packages alphabetically by the 'name' field
    all_packages.sort(key=lambda x: x['name'])

    return all_packages

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Create the release post message for Web.")
    parser.add_argument("title", help="Event title for calendar.")
    parser.add_argument("doc_link", help="Spreadsheet table with release details - link.")
    parser.add_argument("index", help="SDK packages index.")
    parser.add_argument("es_host", help="ES instance host value", type=str)
    parser.add_argument("es_user", help="ES instance user value", type=str)
    parser.add_argument("es_password", help="ES instance password value", type=str)

    ## Parse the arguments
    args = parser.parse_args()

    # Elasticsearch instance used for getting indexing info
    num_of_retries = 1
    while True:
        es = Elasticsearch([args.es_host], http_auth=(args.es_user, args.es_password))
        if es.ping():
            break
        # Wait 1 second and try again if connection fails
        if 10 == num_of_retries:
            # Exit if it fails 10 times, something is wrong with the server
            raise ValueError("Connection to ES failed!")
        num_of_retries += 1

        time.sleep(1)

    current_date = datetime.now().strftime("%Y-%m-%d")
    new_published_at_date = datetime.now(timezone.utc).replace(microsecond=0).isoformat().replace('+00:00', 'Z')

    # Get all indexed packages
    all_packages = fetch_current_indexed_packages(es, args.index)

    ## Update release calendar values
    release_calendar = calendar_events.events_json(args.doc_link, args.title)
    release_calendar.fetch_data()
    ## Then generate the input file for teamup API
    release_calendar.generate_file(os.path.join(os.path.dirname(__file__), 'releases.json'))

    with open(os.path.join(os.path.dirname(__file__), 'releases.json'), 'r') as file:
        data = json.load(file)

    release_spreadsheet_data = ''
    update_present = 0

    for event in data["NECTO DAILY UPDATE"]["events"]:
        if event['end_dt'].startswith(current_date) and event['released']:
            release_spreadsheet_data += event['notes']

    print('# Hope you are having a great time there. Srecna Nova Godina i Bozic!')
    print('## Packages that should be indexed today:')
    print(release_spreadsheet_data.replace('<li>', '- ').replace('<ul>', '').replace('</ul>', '').replace('</li>', ''))
    print('## And the result is:')

    # Find packages that should be reindexed with today's date
    for package in all_packages:
        # Check if it is a newly released package that is listed in release spreadsheet
        if package['display_name'] in release_spreadsheet_data:
            package['published_at'] = new_published_at_date
            package['package_changed'] = True
            response = es.index(index=args.index, doc_type=None, id=package['name'], body=package)
            if not 'updated' == response['result']:
                raise ValueError(f"Failed to update date for {package['display_name']}!")
            else:
                print(f'- Indexed {package['display_name']} with the current date.')
