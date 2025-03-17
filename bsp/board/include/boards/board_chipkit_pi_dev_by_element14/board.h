/****************************************************************************
**
** Copyright (C) ${COPYRIGHT_YEAR} MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
** This file is part of the mikroSDK package
**
** Commercial License Usage
**
** Licensees holding valid commercial NECTO compilers AI licenses may use this
** file in accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The MikroElektronika Company.
** For licensing terms and conditions see
** https://www.mikroe.com/legal/software-license-agreement.
** For further information use the contact form at
** https://www.mikroe.com/contact.
**
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used for
** non-commercial projects under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
** OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
 * @file  board.h
 * @brief Main board pin mapping.
 */

#ifndef _BOARD_H_
#define _BOARD_H_

#ifdef __cplusplus
extern "C"
{
#endif

#define BOARD_NAME "CHIPKIT PI DEV BOARD BY ELEMENT14"

#include "hal_target.h"

// Mapping
#define HEADER_CONNECTOR_JA1_1  GPIO_PB10
#define HEADER_CONNECTOR_JA1_3  GPIO_PB11
#define HEADER_CONNECTOR_JA1_5  GPIO_PB7
#define HEADER_CONNECTOR_JA1_7  GPIO_PB4
#define HEADER_CONNECTOR_JA1_11 GPIO_PB14
#define HEADER_CONNECTOR_JA1_12 GPIO_PB8

#define HEADER_CONNECTOR_JA2_5  GPIO_PB5
#define HEADER_CONNECTOR_JA2_7  GPIO_PB13
#define HEADER_CONNECTOR_JA2_9  GPIO_PB1
#define HEADER_CONNECTOR_JA2_11 GPIO_PB0

#define HEADER_CONNECTOR_JA3_1  GPIO_PB3
#define HEADER_CONNECTOR_JA3_3  GPIO_PB2
#define HEADER_CONNECTOR_JA3_9  GPIO_PB15
#define HEADER_CONNECTOR_JA3_11 GPIO_PA0

#ifdef __cplusplus
}
#endif

#endif    // _BOARD_H_
// ------------------------------------------------------------------------- END
