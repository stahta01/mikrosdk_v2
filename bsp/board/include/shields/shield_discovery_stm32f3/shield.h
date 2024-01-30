/****************************************************************************
**
** Copyright (C) 2024 MikroElektronika d.o.o.
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
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
 * @file  shield.h
 * @brief STM32F3_DISCOVERY shield connections mapping.
 */

#ifndef _SHIELD_H_
#define _SHIELD_H_

#ifdef __cplusplus
extern "C"{
#endif

#include "mikrobus.h"

// Shield header connections
#define SHIELD_CONNECTOR_HD1_PIN13 HEADER_CONNECTOR_P1_D13
#define SHIELD_CONNECTOR_HD1_PIN10 HEADER_CONNECTOR_P1_D10
#define SHIELD_CONNECTOR_HD1_PIN36 HEADER_CONNECTOR_P1_D36
#define SHIELD_CONNECTOR_HD1_PIN35 HEADER_CONNECTOR_P1_D35
#define SHIELD_CONNECTOR_HD1_PIN38 HEADER_CONNECTOR_P1_D38
#define SHIELD_CONNECTOR_HD1_PIN37 HEADER_CONNECTOR_P1_D37
#define SHIELD_CONNECTOR_HD1_PIN9  HEADER_CONNECTOR_P1_D9
#define SHIELD_CONNECTOR_HD1_PIN8  HEADER_CONNECTOR_P1_D8
#define SHIELD_CONNECTOR_HD1_PIN39 HEADER_CONNECTOR_P1_D39
#define SHIELD_CONNECTOR_HD1_PIN40 HEADER_CONNECTOR_P1_D40
#define SHIELD_CONNECTOR_HD2_PIN17 HEADER_CONNECTOR_P2_D17
#define SHIELD_CONNECTOR_HD2_PIN18 HEADER_CONNECTOR_P2_D18

#define SHIELD_CONNECTOR_HD1_PIN21 HEADER_CONNECTOR_P1_D21
#define SHIELD_CONNECTOR_HD1_PIN43 HEADER_CONNECTOR_P1_D43
#define SHIELD_CONNECTOR_HD1_PIN45 HEADER_CONNECTOR_P1_D45
#define SHIELD_CONNECTOR_HD1_PIN44 HEADER_CONNECTOR_P1_D44
#define SHIELD_CONNECTOR_HD1_PIN33 HEADER_CONNECTOR_P1_D33

#define SHIELD_CONNECTOR_HD1_PIN6  HEADER_CONNECTOR_P1_D6
#define SHIELD_CONNECTOR_HD2_PIN3  HEADER_CONNECTOR_P2_D3
#define SHIELD_CONNECTOR_HD2_PIN4  HEADER_CONNECTOR_P2_D4
#define SHIELD_CONNECTOR_HD2_PIN35 HEADER_CONNECTOR_P2_D35
#define SHIELD_CONNECTOR_HD2_PIN36 HEADER_CONNECTOR_P2_D36
#define SHIELD_CONNECTOR_HD2_PIN33 HEADER_CONNECTOR_P2_D33
#define SHIELD_CONNECTOR_HD2_PIN23 HEADER_CONNECTOR_P2_D23
#define SHIELD_CONNECTOR_HD2_PIN24 HEADER_CONNECTOR_P2_D24
#define SHIELD_CONNECTOR_HD2_PIN43 HEADER_CONNECTOR_P2_D43
#define SHIELD_CONNECTOR_HD2_PIN44 HEADER_CONNECTOR_P2_D44

#define SHIELD_CONNECTOR_HD1_PIN24 HEADER_CONNECTOR_P1_D24
#define SHIELD_CONNECTOR_HD2_PIN39 HEADER_CONNECTOR_P2_D39
#define SHIELD_CONNECTOR_HD2_PIN38 HEADER_CONNECTOR_P2_D38
#define SHIELD_CONNECTOR_HD2_PIN47 HEADER_CONNECTOR_P2_D47
#define SHIELD_CONNECTOR_HD2_PIN46 HEADER_CONNECTOR_P2_D46

// MikroBUS definitions
#define SHIELD_MIKROBUS_1_AN   SHIELD_CONNECTOR_HD1_PIN13
#define SHIELD_MIKROBUS_1_RST  SHIELD_CONNECTOR_HD1_PIN10
#define SHIELD_MIKROBUS_1_CS   SHIELD_CONNECTOR_HD1_PIN36
#define SHIELD_MIKROBUS_1_SCK  SHIELD_CONNECTOR_HD1_PIN35
#define SHIELD_MIKROBUS_1_MISO SHIELD_CONNECTOR_HD1_PIN38
#define SHIELD_MIKROBUS_1_MOSI SHIELD_CONNECTOR_HD1_PIN37
#define SHIELD_MIKROBUS_1_PWM  SHIELD_CONNECTOR_HD1_PIN9
#define SHIELD_MIKROBUS_1_INT  SHIELD_CONNECTOR_HD1_PIN8
#define SHIELD_MIKROBUS_1_RX   SHIELD_CONNECTOR_HD1_PIN39
#define SHIELD_MIKROBUS_1_TX   SHIELD_CONNECTOR_HD1_PIN40
#define SHIELD_MIKROBUS_1_SCL  SHIELD_CONNECTOR_HD2_PIN17
#define SHIELD_MIKROBUS_1_SDA  SHIELD_CONNECTOR_HD2_PIN18

#define SHIELD_MIKROBUS_2_AN   SHIELD_CONNECTOR_HD1_PIN21
#define SHIELD_MIKROBUS_2_RST  SHIELD_CONNECTOR_HD1_PIN43
#define SHIELD_MIKROBUS_2_CS   SHIELD_CONNECTOR_HD1_PIN45
#define SHIELD_MIKROBUS_2_SCK  SHIELD_CONNECTOR_HD1_PIN35
#define SHIELD_MIKROBUS_2_MISO SHIELD_CONNECTOR_HD1_PIN38
#define SHIELD_MIKROBUS_2_MOSI SHIELD_CONNECTOR_HD1_PIN37
#define SHIELD_MIKROBUS_2_PWM  SHIELD_CONNECTOR_HD1_PIN44
#define SHIELD_MIKROBUS_2_INT  SHIELD_CONNECTOR_HD1_PIN33
#define SHIELD_MIKROBUS_2_RX   SHIELD_CONNECTOR_HD1_PIN39
#define SHIELD_MIKROBUS_2_TX   SHIELD_CONNECTOR_HD1_PIN40
#define SHIELD_MIKROBUS_2_SCL  SHIELD_CONNECTOR_HD2_PIN17
#define SHIELD_MIKROBUS_2_SDA  SHIELD_CONNECTOR_HD2_PIN18

#define SHIELD_MIKROBUS_3_AN   SHIELD_CONNECTOR_HD1_PIN6
#define SHIELD_MIKROBUS_3_RST  SHIELD_CONNECTOR_HD2_PIN3
#define SHIELD_MIKROBUS_3_CS   SHIELD_CONNECTOR_HD2_PIN4
#define SHIELD_MIKROBUS_3_SCK  SHIELD_CONNECTOR_HD2_PIN35
#define SHIELD_MIKROBUS_3_MISO SHIELD_CONNECTOR_HD2_PIN36
#define SHIELD_MIKROBUS_3_MOSI SHIELD_CONNECTOR_HD2_PIN33
#define SHIELD_MIKROBUS_3_PWM  SHIELD_CONNECTOR_HD2_PIN23
#define SHIELD_MIKROBUS_3_INT  SHIELD_CONNECTOR_HD2_PIN24
#define SHIELD_MIKROBUS_3_RX   SHIELD_CONNECTOR_HD2_PIN43
#define SHIELD_MIKROBUS_3_TX   SHIELD_CONNECTOR_HD2_PIN44
#define SHIELD_MIKROBUS_3_SCL  SHIELD_CONNECTOR_HD2_PIN17
#define SHIELD_MIKROBUS_3_SDA  SHIELD_CONNECTOR_HD2_PIN18

#define SHIELD_MIKROBUS_4_AN   SHIELD_CONNECTOR_HD1_PIN24
#define SHIELD_MIKROBUS_4_RST  SHIELD_CONNECTOR_HD2_PIN39
#define SHIELD_MIKROBUS_4_CS   SHIELD_CONNECTOR_HD2_PIN38
#define SHIELD_MIKROBUS_4_SCK  SHIELD_CONNECTOR_HD2_PIN35
#define SHIELD_MIKROBUS_4_MISO SHIELD_CONNECTOR_HD2_PIN36
#define SHIELD_MIKROBUS_4_MOSI SHIELD_CONNECTOR_HD2_PIN33
#define SHIELD_MIKROBUS_4_PWM  SHIELD_CONNECTOR_HD2_PIN47
#define SHIELD_MIKROBUS_4_INT  SHIELD_CONNECTOR_HD2_PIN46
#define SHIELD_MIKROBUS_4_RX   SHIELD_CONNECTOR_HD2_PIN43
#define SHIELD_MIKROBUS_4_TX   SHIELD_CONNECTOR_HD2_PIN44
#define SHIELD_MIKROBUS_4_SCL  SHIELD_CONNECTOR_HD2_PIN17
#define SHIELD_MIKROBUS_4_SDA  SHIELD_CONNECTOR_HD2_PIN18

#define MIKROBUS_1 1
#define MIKROBUS_1_AN   SHIELD_MIKROBUS_1_AN
#define MIKROBUS_1_RST  SHIELD_MIKROBUS_1_RST
#define MIKROBUS_1_CS   SHIELD_MIKROBUS_1_CS
#define MIKROBUS_1_SCK  SHIELD_MIKROBUS_1_SCK
#define MIKROBUS_1_MISO SHIELD_MIKROBUS_1_MISO
#define MIKROBUS_1_MOSI SHIELD_MIKROBUS_1_MOSI
#define MIKROBUS_1_PWM  SHIELD_MIKROBUS_1_PWM
#define MIKROBUS_1_RX   SHIELD_MIKROBUS_1_RX
#define MIKROBUS_1_INT  SHIELD_MIKROBUS_1_INT
#define MIKROBUS_1_TX   SHIELD_MIKROBUS_1_TX
#define MIKROBUS_1_SCL  SHIELD_MIKROBUS_1_SCL
#define MIKROBUS_1_SDA  SHIELD_MIKROBUS_1_SDA

#define MIKROBUS_2 2
#define MIKROBUS_2_AN   SHIELD_MIKROBUS_2_AN
#define MIKROBUS_2_RST  SHIELD_MIKROBUS_2_RST
#define MIKROBUS_2_CS   SHIELD_MIKROBUS_2_CS
#define MIKROBUS_2_SCK  SHIELD_MIKROBUS_2_SCK
#define MIKROBUS_2_MISO SHIELD_MIKROBUS_2_MISO
#define MIKROBUS_2_MOSI SHIELD_MIKROBUS_2_MOSI
#define MIKROBUS_2_PWM  SHIELD_MIKROBUS_2_PWM
#define MIKROBUS_2_RX   SHIELD_MIKROBUS_2_RX
#define MIKROBUS_2_INT  SHIELD_MIKROBUS_2_INT
#define MIKROBUS_2_TX   SHIELD_MIKROBUS_2_TX
#define MIKROBUS_2_SCL  SHIELD_MIKROBUS_2_SCL
#define MIKROBUS_2_SDA  SHIELD_MIKROBUS_2_SDA

#define MIKROBUS_3 3
#define MIKROBUS_3_AN   SHIELD_MIKROBUS_3_AN
#define MIKROBUS_3_RST  SHIELD_MIKROBUS_3_RST
#define MIKROBUS_3_CS   SHIELD_MIKROBUS_3_CS
#define MIKROBUS_3_SCK  SHIELD_MIKROBUS_3_SCK
#define MIKROBUS_3_MISO SHIELD_MIKROBUS_3_MISO
#define MIKROBUS_3_MOSI SHIELD_MIKROBUS_3_MOSI
#define MIKROBUS_3_PWM  SHIELD_MIKROBUS_3_PWM
#define MIKROBUS_3_RX   SHIELD_MIKROBUS_3_RX
#define MIKROBUS_3_INT  SHIELD_MIKROBUS_3_INT
#define MIKROBUS_3_TX   SHIELD_MIKROBUS_3_TX
#define MIKROBUS_3_SCL  SHIELD_MIKROBUS_3_SCL
#define MIKROBUS_3_SDA  SHIELD_MIKROBUS_3_SDA

#define MIKROBUS_4 4
#define MIKROBUS_4_AN   SHIELD_MIKROBUS_4_AN
#define MIKROBUS_4_RST  SHIELD_MIKROBUS_4_RST
#define MIKROBUS_4_CS   SHIELD_MIKROBUS_4_CS
#define MIKROBUS_4_SCK  SHIELD_MIKROBUS_4_SCK
#define MIKROBUS_4_MISO SHIELD_MIKROBUS_4_MISO
#define MIKROBUS_4_MOSI SHIELD_MIKROBUS_4_MOSI
#define MIKROBUS_4_PWM  SHIELD_MIKROBUS_4_PWM
#define MIKROBUS_4_RX   SHIELD_MIKROBUS_4_RX
#define MIKROBUS_4_INT  SHIELD_MIKROBUS_4_INT
#define MIKROBUS_4_TX   SHIELD_MIKROBUS_4_TX
#define MIKROBUS_4_SCL  SHIELD_MIKROBUS_4_SCL
#define MIKROBUS_4_SDA  SHIELD_MIKROBUS_4_SDA

#ifdef __cplusplus
}
#endif

#endif // _SHIELD_H_
// ------------------------------------------------------------------------- END