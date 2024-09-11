import os, sys
from datetime import datetime

def write_output_to_file(file, content):
    with open(file, 'w') as file_write:
        file_write.write(content)
    file_write.close()

def find_file(root_folder, filename):
    for dirpath, dirnames, filenames in os.walk(root_folder):
        if filename in filenames:
            return os.path.join(dirpath, filename), dirpath
    return None, None

found_file, file_dir = find_file(os.path.join(os.getcwd(), "changelog"), "new_boards.md")

if found_file:
    current_date = datetime.now().strftime("%Y-%m-%d")
    os.rename(found_file, os.path.join(file_dir, f'{current_date}.md'))
    with open(os.path.join(file_dir, f'{current_date}.md'), 'r') as board_changelog_file:
        board_changelog = board_changelog_file.read()
    board_changelog_file.close()
    board_changelog = board_changelog.replace('`DATE`', current_date).replace('#date', f'#{current_date}')
    with open(os.path.join(file_dir, f'{current_date}.md'), 'w') as board_changelog_file:
        board_changelog_file.write(board_changelog)
    board_changelog_file.close()

    write_output_to_file(os.path.join(os.getcwd(), 'sdk_tag.txt'), file_dir.split(os.path.sep)[-2][1:])
else:
    write_output_to_file(os.path.join(os.getcwd(), 'sdk_tag.txt'), '0')
