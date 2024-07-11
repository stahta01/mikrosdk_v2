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
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
* @file  mcu_definitions.h
* @brief PIC24FJ256GB406 MCU specific pin and module definitions.
*/

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

#include "mcu_reg_addresses.h"

// ADC
#define ADC1_RB0 (0)
#define ADC1_RB0_AN0 (0)
#define ADC1_RB1 (1)
#define ADC1_RB1_AN1 (1)
#define ADC1_RB10 (10)
#define ADC1_RB10_AN10 (10)
#define ADC1_RB11 (11)
#define ADC1_RB11_AN11 (11)
#define ADC1_RB12 (12)
#define ADC1_RB12_AN12 (12)
#define ADC1_RB13 (13)
#define ADC1_RB13_AN13 (13)
#define ADC1_RB14 (14)
#define ADC1_RB14_AN14 (14)
#define ADC1_RB15 (15)
#define ADC1_RB15_AN15 (15)
#define ADC1_RB2 (2)
#define ADC1_RB2_AN2 (2)
#define ADC1_RB3 (3)
#define ADC1_RB3_AN3 (3)
#define ADC1_RB4 (4)
#define ADC1_RB4_AN4 (4)
#define ADC1_RB5 (5)
#define ADC1_RB5_AN5 (5)
#define ADC1_RB6 (6)
#define ADC1_RB6_AN6 (6)
#define ADC1_RB7 (7)
#define ADC1_RB7_AN7 (7)
#define ADC1_RB8 (8)
#define ADC1_RB8_AN8 (8)
#define ADC1_RB9 (9)
#define ADC1_RB9_AN9 (9)

#define ADC_MODULE_1 1
#define ADC_MODULE_COUNT 1
#define HAL_LL_AN_COUNT 16

#define SUPPORTED_ADC_RES_10_BIT
#define SUPPORTED_ADC_RES_12_BIT

// ADC Register addresses and offsets
#define HAL_LL_IFS0_REG_ADDRESS (0x88)
#define HAL_LL_IFS1_REG_ADDRESS (0x8A)
#define HAL_LL_IFS2_REG_ADDRESS (0x8C)
#define HAL_LL_IFS3_REG_ADDRESS (0x8E)
#define HAL_LL_IFS4_REG_ADDRESS (0x90)
#define HAL_LL_IFS5_REG_ADDRESS (0x92)
#define HAL_LL_IFS6_REG_ADDRESS (0x94)
#define HAL_LL_IFS7_REG_ADDRESS (0x96)
#define HAL_LL_IEC0_REG_ADDRESS (0x98)
#define HAL_LL_IEC1_REG_ADDRESS (0x9A)
#define HAL_LL_IEC2_REG_ADDRESS (0x9C)
#define HAL_LL_IEC3_REG_ADDRESS (0x9E)
#define HAL_LL_IEC4_REG_ADDRESS (0xA0)
#define HAL_LL_IEC5_REG_ADDRESS (0xA2)
#define HAL_LL_IEC6_REG_ADDRESS (0xA4)
#define HAL_LL_IEC7_REG_ADDRESS (0xA6)
#define HAL_LL_IPC0_REG_ADDRESS (0xA8)
#define HAL_LL_IPC1_REG_ADDRESS (0xAA)
#define HAL_LL_IPC2_REG_ADDRESS (0xAC)
#define HAL_LL_IPC3_REG_ADDRESS (0xAE)
#define HAL_LL_IPC4_REG_ADDRESS (0xB0)
#define HAL_LL_IPC5_REG_ADDRESS (0xB2)
#define HAL_LL_IPC6_REG_ADDRESS (0xB4)
#define HAL_LL_IPC7_REG_ADDRESS (0xB6)
#define HAL_LL_IPC8_REG_ADDRESS (0xB8)
#define HAL_LL_IPC9_REG_ADDRESS (0xBA)
#define HAL_LL_IPC10_REG_ADDRESS (0xBC)
#define HAL_LL_IPC11_REG_ADDRESS (0xBE)
#define HAL_LL_IPC12_REG_ADDRESS (0xC0)
#define HAL_LL_IPC13_REG_ADDRESS (0xC2)
#define HAL_LL_IPC14_REG_ADDRESS (0xC4)
#define HAL_LL_IPC15_REG_ADDRESS (0xC6)
#define HAL_LL_IPC16_REG_ADDRESS (0xC8)
#define HAL_LL_IPC17_REG_ADDRESS (0xCA)
#define HAL_LL_IPC18_REG_ADDRESS (0xCC)
#define HAL_LL_IPC19_REG_ADDRESS (0xCE)
#define HAL_LL_IPC20_REG_ADDRESS (0xD0)
#define HAL_LL_IPC21_REG_ADDRESS (0xD2)
#define HAL_LL_IPC22_REG_ADDRESS (0xD4)
#define HAL_LL_IPC23_REG_ADDRESS (0xD6)
#define HAL_LL_IPC24_REG_ADDRESS (0xD8)
#define HAL_LL_IPC25_REG_ADDRESS (0xDA)
#define HAL_LL_IPC26_REG_ADDRESS (0xDC)
#define HAL_LL_IPC27_REG_ADDRESS (0xDE)
#define HAL_LL_IPC28_REG_ADDRESS (0xE0)
#define HAL_LL_IPC29_REG_ADDRESS (0xE2)
#define HAL_LL_PADCON_REG_ADDRESS (0x65A)
#define HAL_LL_ANSA_REG_ADDRESS (0x666)
#define HAL_LL_ANSB_REG_ADDRESS (0x67A)
#define HAL_LL_ANSC_REG_ADDRESS (0x68E)
#define HAL_LL_ANSD_REG_ADDRESS (0x6A2)
#define HAL_LL_ANSE_REG_ADDRESS (0x6B6)
#define HAL_LL_ANSF_REG_ADDRESS (0x6CA)
#define HAL_LL_ANSG_REG_ADDRESS (0x6DE)
#define HAL_LL_ANSH_REG_ADDRESS (0x6F2)
#define HAL_LL_ANSJ_REG_ADDRESS (0x706)
#define HAL_LL_ADC1BUF0_REG_ADDRESS (0x712)
#define HAL_LL_ADC1BUF1_REG_ADDRESS (0x714)
#define HAL_LL_ADC1BUF2_REG_ADDRESS (0x716)
#define HAL_LL_ADC1BUF3_REG_ADDRESS (0x718)
#define HAL_LL_ADC1BUF4_REG_ADDRESS (0x71A)
#define HAL_LL_ADC1BUF5_REG_ADDRESS (0x71C)
#define HAL_LL_ADC1BUF6_REG_ADDRESS (0x71E)
#define HAL_LL_ADC1BUF7_REG_ADDRESS (0x720)
#define HAL_LL_ADC1BUF8_REG_ADDRESS (0x722)
#define HAL_LL_ADC1BUF9_REG_ADDRESS (0x724)
#define HAL_LL_ADC1BUF10_REG_ADDRESS (0x726)
#define HAL_LL_ADC1BUF11_REG_ADDRESS (0x728)
#define HAL_LL_ADC1BUF12_REG_ADDRESS (0x72A)
#define HAL_LL_ADC1BUF13_REG_ADDRESS (0x72C)
#define HAL_LL_ADC1BUF14_REG_ADDRESS (0x72E)
#define HAL_LL_ADC1BUF15_REG_ADDRESS (0x730)
#define HAL_LL_ADC1BUF16_REG_ADDRESS (0x732)
#define HAL_LL_ADC1BUF17_REG_ADDRESS (0x734)
#define HAL_LL_ADC1BUF18_REG_ADDRESS (0x736)
#define HAL_LL_ADC1BUF19_REG_ADDRESS (0x738)
#define HAL_LL_ADC1BUF20_REG_ADDRESS (0x73A)
#define HAL_LL_ADC1BUF21_REG_ADDRESS (0x73C)
#define HAL_LL_ADC1BUF22_REG_ADDRESS (0x73E)
#define HAL_LL_ADC1BUF23_REG_ADDRESS (0x740)
#define HAL_LL_ADC1BUF24_REG_ADDRESS (0x742)
#define HAL_LL_ADC1BUF25_REG_ADDRESS (0x744)
#define HAL_LL_AD1CON1_REG_ADDRESS (0x746)
#define HAL_LL_AD1CON2_REG_ADDRESS (0x748)
#define HAL_LL_AD1CON3_REG_ADDRESS (0x74A)
#define HAL_LL_AD1CHS_REG_ADDRESS (0x74C)
#define HAL_LL_AD1CSSH_REG_ADDRESS (0x74E)
#define HAL_LL_AD1CSSL_REG_ADDRESS (0x750)
#define HAL_LL_AD1CON4_REG_ADDRESS (0x752)
#define HAL_LL_AD1CON5_REG_ADDRESS (0x754)
#define _ADC_ANS_
// EOF ADC Register addresses and offsets
// EOF ADC

// I2C
#define I2C1_RD10_SCL1
#define I2C1_RD9_SDA1
#define I2C2_RF4_SDA2
#define I2C2_RF5_SCL2
#define I2C3_RE6_SCL3
#define I2C3_RE7_SDA3

#define I2C_MODULE_1 1
#define I2C_MODULE_2 2
#define I2C_MODULE_3 3
#define I2C_MODULE_COUNT 3

// I2C Register addresses and offsets
#define HAL_LL_I2C1RCV_REG_ADDRESS (0x494)
#define HAL_LL_I2C1TRN_REG_ADDRESS (0x496)
#define HAL_LL_I2C1BRG_REG_ADDRESS (0x498)
#define HAL_LL_I2C1CONL_REG_ADDRESS (0x49A)
#define HAL_LL_I2C1CON_REG_ADDRESS HAL_LL_I2C1CONL_REG_ADDRESS
#define HAL_LL_I2C1CONH_REG_ADDRESS (0x49C)
#define HAL_LL_I2C1STAT_REG_ADDRESS (0x49E)
#define HAL_LL_I2C2RCV_REG_ADDRESS (0x4A4)
#define HAL_LL_I2C2TRN_REG_ADDRESS (0x4A6)
#define HAL_LL_I2C2BRG_REG_ADDRESS (0x4A8)
#define HAL_LL_I2C2CONL_REG_ADDRESS (0x4AA)
#define HAL_LL_I2C2CON_REG_ADDRESS HAL_LL_I2C2CONL_REG_ADDRESS
#define HAL_LL_I2C2CONH_REG_ADDRESS (0x4AC)
#define HAL_LL_I2C2STAT_REG_ADDRESS (0x4AE)
#define HAL_LL_I2C3RCV_REG_ADDRESS (0x4B4)
#define HAL_LL_I2C3TRN_REG_ADDRESS (0x4B6)
#define HAL_LL_I2C3BRG_REG_ADDRESS (0x4B8)
#define HAL_LL_I2C3CONL_REG_ADDRESS (0x4BA)
#define HAL_LL_I2C3CON_REG_ADDRESS HAL_LL_I2C3CONL_REG_ADDRESS
#define HAL_LL_I2C3CONH_REG_ADDRESS (0x4BC)
#define HAL_LL_I2C3STAT_REG_ADDRESS (0x4BE)
// EOF I2C Register addresses and offsets
// EOF I2C

// U(S)ART
// #define UART5_U5BCLK_RD7
// #define UART5_U5CTS_RF0
// #define UART5_U5RTS_RD7
// #define UART6_U6BCLK_RD8
// #define UART6_U6CTS_RD0
// #define UART6_U6RTS_RD8
#define UART1_RX_RB0_RP0 (0)
#define UART1_RX_RB1_RP1 (1)
#define UART1_RX_RB14_RP14 (14)
#define UART1_RX_RB15_RP29 (29)
#define UART1_RX_RB2_RP13 (13)
#define UART1_RX_RB4_RP28 (28)
#define UART1_RX_RB5_RP18 (18)
#define UART1_RX_RB6_RP6 (6)
#define UART1_RX_RB7_RP7 (7)
#define UART1_RX_RB8_RP8 (8)
#define UART1_RX_RB9_RP9 (9)
#define UART1_RX_RC14_RPI37 (37)
#define UART1_RX_RD0_RP11 (11)
#define UART1_RX_RD1_RP24 (24)
#define UART1_RX_RD10_RP3 (3)
#define UART1_RX_RD11_RP12 (12)
#define UART1_RX_RD2_RP23 (23)
#define UART1_RX_RD3_RP22 (22)
#define UART1_RX_RD4_RP25 (25)
#define UART1_RX_RD5_RP20 (20)
#define UART1_RX_RD8_RP2 (2)
#define UART1_RX_RD9_RP4 (4)
#define UART1_RX_RF3_RP16 (16)
#define UART1_RX_RF4_RP10 (10)
#define UART1_RX_RF5_RP17 (17)
#define UART1_RX_RG6_RP21 (21)
#define UART1_RX_RG7_RP26 (26)
#define UART1_RX_RG8_RP19 (19)
#define UART1_RX_RG9_RP27 (27)
#define UART1_TX_RB0_RP0 (0)
#define UART1_TX_RB1_RP1 (1)
#define UART1_TX_RB14_RP14 (14)
#define UART1_TX_RB15_RP29 (29)
#define UART1_TX_RB2_RP13 (13)
#define UART1_TX_RB4_RP28 (28)
#define UART1_TX_RB5_RP18 (18)
#define UART1_TX_RB6_RP6 (6)
#define UART1_TX_RB7_RP7 (7)
#define UART1_TX_RB8_RP8 (8)
#define UART1_TX_RB9_RP9 (9)
#define UART1_TX_RD0_RP11 (11)
#define UART1_TX_RD1_RP24 (24)
#define UART1_TX_RD10_RP3 (3)
#define UART1_TX_RD11_RP12 (12)
#define UART1_TX_RD2_RP23 (23)
#define UART1_TX_RD3_RP22 (22)
#define UART1_TX_RD4_RP25 (25)
#define UART1_TX_RD5_RP20 (20)
#define UART1_TX_RD8_RP2 (2)
#define UART1_TX_RD9_RP4 (4)
#define UART1_TX_RF3_RP16 (16)
#define UART1_TX_RF4_RP10 (10)
#define UART1_TX_RF5_RP17 (17)
#define UART1_TX_RG6_RP21 (21)
#define UART1_TX_RG7_RP26 (26)
#define UART1_TX_RG8_RP19 (19)
#define UART1_TX_RG9_RP27 (27)
#define UART2_RX_RB0_RP0 (0)
#define UART2_RX_RB1_RP1 (1)
#define UART2_RX_RB14_RP14 (14)
#define UART2_RX_RB15_RP29 (29)
#define UART2_RX_RB2_RP13 (13)
#define UART2_RX_RB4_RP28 (28)
#define UART2_RX_RB5_RP18 (18)
#define UART2_RX_RB6_RP6 (6)
#define UART2_RX_RB7_RP7 (7)
#define UART2_RX_RB8_RP8 (8)
#define UART2_RX_RB9_RP9 (9)
#define UART2_RX_RC14_RPI37 (37)
#define UART2_RX_RD0_RP11 (11)
#define UART2_RX_RD1_RP24 (24)
#define UART2_RX_RD10_RP3 (3)
#define UART2_RX_RD11_RP12 (12)
#define UART2_RX_RD2_RP23 (23)
#define UART2_RX_RD3_RP22 (22)
#define UART2_RX_RD4_RP25 (25)
#define UART2_RX_RD5_RP20 (20)
#define UART2_RX_RD8_RP2 (2)
#define UART2_RX_RD9_RP4 (4)
#define UART2_RX_RF3_RP16 (16)
#define UART2_RX_RF4_RP10 (10)
#define UART2_RX_RF5_RP17 (17)
#define UART2_RX_RG6_RP21 (21)
#define UART2_RX_RG7_RP26 (26)
#define UART2_RX_RG8_RP19 (19)
#define UART2_RX_RG9_RP27 (27)
#define UART2_TX_RB0_RP0 (0)
#define UART2_TX_RB1_RP1 (1)
#define UART2_TX_RB14_RP14 (14)
#define UART2_TX_RB15_RP29 (29)
#define UART2_TX_RB2_RP13 (13)
#define UART2_TX_RB4_RP28 (28)
#define UART2_TX_RB5_RP18 (18)
#define UART2_TX_RB6_RP6 (6)
#define UART2_TX_RB7_RP7 (7)
#define UART2_TX_RB8_RP8 (8)
#define UART2_TX_RB9_RP9 (9)
#define UART2_TX_RD0_RP11 (11)
#define UART2_TX_RD1_RP24 (24)
#define UART2_TX_RD10_RP3 (3)
#define UART2_TX_RD11_RP12 (12)
#define UART2_TX_RD2_RP23 (23)
#define UART2_TX_RD3_RP22 (22)
#define UART2_TX_RD4_RP25 (25)
#define UART2_TX_RD5_RP20 (20)
#define UART2_TX_RD8_RP2 (2)
#define UART2_TX_RD9_RP4 (4)
#define UART2_TX_RF3_RP16 (16)
#define UART2_TX_RF4_RP10 (10)
#define UART2_TX_RF5_RP17 (17)
#define UART2_TX_RG6_RP21 (21)
#define UART2_TX_RG7_RP26 (26)
#define UART2_TX_RG8_RP19 (19)
#define UART2_TX_RG9_RP27 (27)
#define UART3_RX_RB0_RP0 (0)
#define UART3_RX_RB1_RP1 (1)
#define UART3_RX_RB14_RP14 (14)
#define UART3_RX_RB15_RP29 (29)
#define UART3_RX_RB2_RP13 (13)
#define UART3_RX_RB4_RP28 (28)
#define UART3_RX_RB5_RP18 (18)
#define UART3_RX_RB6_RP6 (6)
#define UART3_RX_RB7_RP7 (7)
#define UART3_RX_RB8_RP8 (8)
#define UART3_RX_RB9_RP9 (9)
#define UART3_RX_RC14_RPI37 (37)
#define UART3_RX_RD0_RP11 (11)
#define UART3_RX_RD1_RP24 (24)
#define UART3_RX_RD10_RP3 (3)
#define UART3_RX_RD11_RP12 (12)
#define UART3_RX_RD2_RP23 (23)
#define UART3_RX_RD3_RP22 (22)
#define UART3_RX_RD4_RP25 (25)
#define UART3_RX_RD5_RP20 (20)
#define UART3_RX_RD8_RP2 (2)
#define UART3_RX_RD9_RP4 (4)
#define UART3_RX_RF3_RP16 (16)
#define UART3_RX_RF4_RP10 (10)
#define UART3_RX_RF5_RP17 (17)
#define UART3_RX_RG6_RP21 (21)
#define UART3_RX_RG7_RP26 (26)
#define UART3_RX_RG8_RP19 (19)
#define UART3_RX_RG9_RP27 (27)
#define UART3_TX_RB0_RP0 (0)
#define UART3_TX_RB1_RP1 (1)
#define UART3_TX_RB14_RP14 (14)
#define UART3_TX_RB15_RP29 (29)
#define UART3_TX_RB2_RP13 (13)
#define UART3_TX_RB4_RP28 (28)
#define UART3_TX_RB5_RP18 (18)
#define UART3_TX_RB6_RP6 (6)
#define UART3_TX_RB7_RP7 (7)
#define UART3_TX_RB8_RP8 (8)
#define UART3_TX_RB9_RP9 (9)
#define UART3_TX_RD0_RP11 (11)
#define UART3_TX_RD1_RP24 (24)
#define UART3_TX_RD10_RP3 (3)
#define UART3_TX_RD11_RP12 (12)
#define UART3_TX_RD2_RP23 (23)
#define UART3_TX_RD3_RP22 (22)
#define UART3_TX_RD4_RP25 (25)
#define UART3_TX_RD5_RP20 (20)
#define UART3_TX_RD8_RP2 (2)
#define UART3_TX_RD9_RP4 (4)
#define UART3_TX_RF3_RP16 (16)
#define UART3_TX_RF4_RP10 (10)
#define UART3_TX_RF5_RP17 (17)
#define UART3_TX_RG6_RP21 (21)
#define UART3_TX_RG7_RP26 (26)
#define UART3_TX_RG8_RP19 (19)
#define UART3_TX_RG9_RP27 (27)
#define UART4_RX_RB0_RP0 (0)
#define UART4_RX_RB1_RP1 (1)
#define UART4_RX_RB14_RP14 (14)
#define UART4_RX_RB15_RP29 (29)
#define UART4_RX_RB2_RP13 (13)
#define UART4_RX_RB4_RP28 (28)
#define UART4_RX_RB5_RP18 (18)
#define UART4_RX_RB6_RP6 (6)
#define UART4_RX_RB7_RP7 (7)
#define UART4_RX_RB8_RP8 (8)
#define UART4_RX_RB9_RP9 (9)
#define UART4_RX_RC14_RPI37 (37)
#define UART4_RX_RD0_RP11 (11)
#define UART4_RX_RD1_RP24 (24)
#define UART4_RX_RD10_RP3 (3)
#define UART4_RX_RD11_RP12 (12)
#define UART4_RX_RD2_RP23 (23)
#define UART4_RX_RD3_RP22 (22)
#define UART4_RX_RD4_RP25 (25)
#define UART4_RX_RD5_RP20 (20)
#define UART4_RX_RD8_RP2 (2)
#define UART4_RX_RD9_RP4 (4)
#define UART4_RX_RF3_RP16 (16)
#define UART4_RX_RF4_RP10 (10)
#define UART4_RX_RF5_RP17 (17)
#define UART4_RX_RG6_RP21 (21)
#define UART4_RX_RG7_RP26 (26)
#define UART4_RX_RG8_RP19 (19)
#define UART4_RX_RG9_RP27 (27)
#define UART4_TX_RB0_RP0 (0)
#define UART4_TX_RB1_RP1 (1)
#define UART4_TX_RB14_RP14 (14)
#define UART4_TX_RB15_RP29 (29)
#define UART4_TX_RB2_RP13 (13)
#define UART4_TX_RB4_RP28 (28)
#define UART4_TX_RB5_RP18 (18)
#define UART4_TX_RB6_RP6 (6)
#define UART4_TX_RB7_RP7 (7)
#define UART4_TX_RB8_RP8 (8)
#define UART4_TX_RB9_RP9 (9)
#define UART4_TX_RD0_RP11 (11)
#define UART4_TX_RD1_RP24 (24)
#define UART4_TX_RD10_RP3 (3)
#define UART4_TX_RD11_RP12 (12)
#define UART4_TX_RD2_RP23 (23)
#define UART4_TX_RD3_RP22 (22)
#define UART4_TX_RD4_RP25 (25)
#define UART4_TX_RD5_RP20 (20)
#define UART4_TX_RD8_RP2 (2)
#define UART4_TX_RD9_RP4 (4)
#define UART4_TX_RF3_RP16 (16)
#define UART4_TX_RF4_RP10 (10)
#define UART4_TX_RF5_RP17 (17)
#define UART4_TX_RG6_RP21 (21)
#define UART4_TX_RG7_RP26 (26)
#define UART4_TX_RG8_RP19 (19)
#define UART4_TX_RG9_RP27 (27)
#define UART5_RX_RD6
#define UART5_TX_RD1
#define UART6_RX_RB12
#define UART6_TX_RB7

#define UART_MODULE_1 1
#define UART_MODULE_2 2
#define UART_MODULE_3 3
#define UART_MODULE_4 4
#define UART_MODULE_5 5
#define UART_MODULE_6 6
#define UART_MODULE_COUNT 6

// U(S)ART Register addresses and offsets
#define HAL_LL_U1MODE_REG_ADDRESS (0x398)
#define HAL_LL_U1STA_REG_ADDRESS (0x39A)
#define HAL_LL_U1TXREG_REG_ADDRESS (0x39C)
#define HAL_LL_U1RXREG_REG_ADDRESS (0x39E)
#define HAL_LL_U1BRG_REG_ADDRESS (0x3A0)
#define HAL_LL_U2MODE_REG_ADDRESS (0x3AE)
#define HAL_LL_U2STA_REG_ADDRESS (0x3B0)
#define HAL_LL_U2TXREG_REG_ADDRESS (0x3B2)
#define HAL_LL_U2RXREG_REG_ADDRESS (0x3B4)
#define HAL_LL_U2BRG_REG_ADDRESS (0x3B6)
#define HAL_LL_U3MODE_REG_ADDRESS (0x3C4)
#define HAL_LL_U3STA_REG_ADDRESS (0x3C6)
#define HAL_LL_U3TXREG_REG_ADDRESS (0x3C8)
#define HAL_LL_U3RXREG_REG_ADDRESS (0x3CA)
#define HAL_LL_U3BRG_REG_ADDRESS (0x3CC)
#define HAL_LL_U4MODE_REG_ADDRESS (0x3D0)
#define HAL_LL_U4STA_REG_ADDRESS (0x3D2)
#define HAL_LL_U4TXREG_REG_ADDRESS (0x3D4)
#define HAL_LL_U4RXREG_REG_ADDRESS (0x3D6)
#define HAL_LL_U4BRG_REG_ADDRESS (0x3D8)
#define HAL_LL_U5MODE_REG_ADDRESS (0x3DC)
#define HAL_LL_U5STA_REG_ADDRESS (0x3DE)
#define HAL_LL_U5TXREG_REG_ADDRESS (0x3E0)
#define HAL_LL_U5RXREG_REG_ADDRESS (0x3E2)
#define HAL_LL_U5BRG_REG_ADDRESS (0x3E4)
#define HAL_LL_U6MODE_REG_ADDRESS (0x3E8)
#define HAL_LL_U6STA_REG_ADDRESS (0x3EA)
#define HAL_LL_U6TXREG_REG_ADDRESS (0x3EC)
#define HAL_LL_U6RXREG_REG_ADDRESS (0x3EE)
#define HAL_LL_U6BRG_REG_ADDRESS (0x3F0)
// EOF U(S)ART Register addresses and offsets
// EOF U(S)ART

// SPI
#define SPI1_MISO_RB0_RP0 (0)
#define SPI1_MISO_RB1_RP1 (1)
#define SPI1_MISO_RB14_RP14 (14)
#define SPI1_MISO_RB15_RP29 (29)
#define SPI1_MISO_RB2_RP13 (13)
#define SPI1_MISO_RB4_RP28 (28)
#define SPI1_MISO_RB5_RP18 (18)
#define SPI1_MISO_RB6_RP6 (6)
#define SPI1_MISO_RB7_RP7 (7)
#define SPI1_MISO_RB8_RP8 (8)
#define SPI1_MISO_RB9_RP9 (9)
#define SPI1_MISO_RC14_RPI37 (37)
#define SPI1_MISO_RD0_RP11 (11)
#define SPI1_MISO_RD1_RP24 (24)
#define SPI1_MISO_RD10_RP3 (3)
#define SPI1_MISO_RD11_RP12 (12)
#define SPI1_MISO_RD2_RP23 (23)
#define SPI1_MISO_RD3_RP22 (22)
#define SPI1_MISO_RD4_RP25 (25)
#define SPI1_MISO_RD5_RP20 (20)
#define SPI1_MISO_RD8_RP2 (2)
#define SPI1_MISO_RD9_RP4 (4)
#define SPI1_MISO_RF3_RP16 (16)
#define SPI1_MISO_RF4_RP10 (10)
#define SPI1_MISO_RF5_RP17 (17)
#define SPI1_MISO_RG6_RP21 (21)
#define SPI1_MISO_RG7_RP26 (26)
#define SPI1_MISO_RG8_RP19 (19)
#define SPI1_MISO_RG9_RP27 (27)
#define SPI1_MOSI_RB0_RP0 (0)
#define SPI1_MOSI_RB1_RP1 (1)
#define SPI1_MOSI_RB14_RP14 (14)
#define SPI1_MOSI_RB15_RP29 (29)
#define SPI1_MOSI_RB2_RP13 (13)
#define SPI1_MOSI_RB4_RP28 (28)
#define SPI1_MOSI_RB5_RP18 (18)
#define SPI1_MOSI_RB6_RP6 (6)
#define SPI1_MOSI_RB7_RP7 (7)
#define SPI1_MOSI_RB8_RP8 (8)
#define SPI1_MOSI_RB9_RP9 (9)
#define SPI1_MOSI_RD0_RP11 (11)
#define SPI1_MOSI_RD1_RP24 (24)
#define SPI1_MOSI_RD10_RP3 (3)
#define SPI1_MOSI_RD11_RP12 (12)
#define SPI1_MOSI_RD2_RP23 (23)
#define SPI1_MOSI_RD3_RP22 (22)
#define SPI1_MOSI_RD4_RP25 (25)
#define SPI1_MOSI_RD5_RP20 (20)
#define SPI1_MOSI_RD8_RP2 (2)
#define SPI1_MOSI_RD9_RP4 (4)
#define SPI1_MOSI_RF3_RP16 (16)
#define SPI1_MOSI_RF4_RP10 (10)
#define SPI1_MOSI_RF5_RP17 (17)
#define SPI1_MOSI_RG6_RP21 (21)
#define SPI1_MOSI_RG7_RP26 (26)
#define SPI1_MOSI_RG8_RP19 (19)
#define SPI1_MOSI_RG9_RP27 (27)
#define SPI1_SCK_RB0_RP0 (0)
#define SPI1_SCK_RB1_RP1 (1)
#define SPI1_SCK_RB14_RP14 (14)
#define SPI1_SCK_RB15_RP29 (29)
#define SPI1_SCK_RB2_RP13 (13)
#define SPI1_SCK_RB4_RP28 (28)
#define SPI1_SCK_RB5_RP18 (18)
#define SPI1_SCK_RB6_RP6 (6)
#define SPI1_SCK_RB7_RP7 (7)
#define SPI1_SCK_RB8_RP8 (8)
#define SPI1_SCK_RB9_RP9 (9)
#define SPI1_SCK_RC14_RPI37 (37)
#define SPI1_SCK_RD0_RP11 (11)
#define SPI1_SCK_RD1_RP24 (24)
#define SPI1_SCK_RD10_RP3 (3)
#define SPI1_SCK_RD11_RP12 (12)
#define SPI1_SCK_RD2_RP23 (23)
#define SPI1_SCK_RD3_RP22 (22)
#define SPI1_SCK_RD4_RP25 (25)
#define SPI1_SCK_RD5_RP20 (20)
#define SPI1_SCK_RD8_RP2 (2)
#define SPI1_SCK_RD9_RP4 (4)
#define SPI1_SCK_RF3_RP16 (16)
#define SPI1_SCK_RF4_RP10 (10)
#define SPI1_SCK_RF5_RP17 (17)
#define SPI1_SCK_RG6_RP21 (21)
#define SPI1_SCK_RG7_RP26 (26)
#define SPI1_SCK_RG8_RP19 (19)
#define SPI1_SCK_RG9_RP27 (27)
#define SPI2_MISO_RB0_RP0 (0)
#define SPI2_MISO_RB1_RP1 (1)
#define SPI2_MISO_RB14_RP14 (14)
#define SPI2_MISO_RB15_RP29 (29)
#define SPI2_MISO_RB2_RP13 (13)
#define SPI2_MISO_RB4_RP28 (28)
#define SPI2_MISO_RB5_RP18 (18)
#define SPI2_MISO_RB6_RP6 (6)
#define SPI2_MISO_RB7_RP7 (7)
#define SPI2_MISO_RB8_RP8 (8)
#define SPI2_MISO_RB9_RP9 (9)
#define SPI2_MISO_RC14_RPI37 (37)
#define SPI2_MISO_RD0_RP11 (11)
#define SPI2_MISO_RD1_RP24 (24)
#define SPI2_MISO_RD10_RP3 (3)
#define SPI2_MISO_RD11_RP12 (12)
#define SPI2_MISO_RD2_RP23 (23)
#define SPI2_MISO_RD3_RP22 (22)
#define SPI2_MISO_RD4_RP25 (25)
#define SPI2_MISO_RD5_RP20 (20)
#define SPI2_MISO_RD8_RP2 (2)
#define SPI2_MISO_RD9_RP4 (4)
#define SPI2_MISO_RF3_RP16 (16)
#define SPI2_MISO_RF4_RP10 (10)
#define SPI2_MISO_RF5_RP17 (17)
#define SPI2_MISO_RG6_RP21 (21)
#define SPI2_MISO_RG7_RP26 (26)
#define SPI2_MISO_RG8_RP19 (19)
#define SPI2_MISO_RG9_RP27 (27)
#define SPI2_MOSI_RB0_RP0 (0)
#define SPI2_MOSI_RB1_RP1 (1)
#define SPI2_MOSI_RB14_RP14 (14)
#define SPI2_MOSI_RB15_RP29 (29)
#define SPI2_MOSI_RB2_RP13 (13)
#define SPI2_MOSI_RB4_RP28 (28)
#define SPI2_MOSI_RB5_RP18 (18)
#define SPI2_MOSI_RB6_RP6 (6)
#define SPI2_MOSI_RB7_RP7 (7)
#define SPI2_MOSI_RB8_RP8 (8)
#define SPI2_MOSI_RB9_RP9 (9)
#define SPI2_MOSI_RD0_RP11 (11)
#define SPI2_MOSI_RD1_RP24 (24)
#define SPI2_MOSI_RD10_RP3 (3)
#define SPI2_MOSI_RD11_RP12 (12)
#define SPI2_MOSI_RD2_RP23 (23)
#define SPI2_MOSI_RD3_RP22 (22)
#define SPI2_MOSI_RD4_RP25 (25)
#define SPI2_MOSI_RD5_RP20 (20)
#define SPI2_MOSI_RD8_RP2 (2)
#define SPI2_MOSI_RD9_RP4 (4)
#define SPI2_MOSI_RF3_RP16 (16)
#define SPI2_MOSI_RF4_RP10 (10)
#define SPI2_MOSI_RF5_RP17 (17)
#define SPI2_MOSI_RG6_RP21 (21)
#define SPI2_MOSI_RG7_RP26 (26)
#define SPI2_MOSI_RG8_RP19 (19)
#define SPI2_MOSI_RG9_RP27 (27)
#define SPI2_SCK_RB0_RP0 (0)
#define SPI2_SCK_RB1_RP1 (1)
#define SPI2_SCK_RB14_RP14 (14)
#define SPI2_SCK_RB15_RP29 (29)
#define SPI2_SCK_RB2_RP13 (13)
#define SPI2_SCK_RB4_RP28 (28)
#define SPI2_SCK_RB5_RP18 (18)
#define SPI2_SCK_RB6_RP6 (6)
#define SPI2_SCK_RB7_RP7 (7)
#define SPI2_SCK_RB8_RP8 (8)
#define SPI2_SCK_RB9_RP9 (9)
#define SPI2_SCK_RC14_RPI37 (37)
#define SPI2_SCK_RD0_RP11 (11)
#define SPI2_SCK_RD1_RP24 (24)
#define SPI2_SCK_RD10_RP3 (3)
#define SPI2_SCK_RD11_RP12 (12)
#define SPI2_SCK_RD2_RP23 (23)
#define SPI2_SCK_RD3_RP22 (22)
#define SPI2_SCK_RD4_RP25 (25)
#define SPI2_SCK_RD5_RP20 (20)
#define SPI2_SCK_RD8_RP2 (2)
#define SPI2_SCK_RD9_RP4 (4)
#define SPI2_SCK_RF3_RP16 (16)
#define SPI2_SCK_RF4_RP10 (10)
#define SPI2_SCK_RF5_RP17 (17)
#define SPI2_SCK_RG6_RP21 (21)
#define SPI2_SCK_RG7_RP26 (26)
#define SPI2_SCK_RG8_RP19 (19)
#define SPI2_SCK_RG9_RP27 (27)
#define SPI3_MISO_RB0_RP0 (0)
#define SPI3_MISO_RB1_RP1 (1)
#define SPI3_MISO_RB14_RP14 (14)
#define SPI3_MISO_RB15_RP29 (29)
#define SPI3_MISO_RB2_RP13 (13)
#define SPI3_MISO_RB4_RP28 (28)
#define SPI3_MISO_RB5_RP18 (18)
#define SPI3_MISO_RB6_RP6 (6)
#define SPI3_MISO_RB7_RP7 (7)
#define SPI3_MISO_RB8_RP8 (8)
#define SPI3_MISO_RB9_RP9 (9)
#define SPI3_MISO_RC14_RPI37 (37)
#define SPI3_MISO_RD0_RP11 (11)
#define SPI3_MISO_RD1_RP24 (24)
#define SPI3_MISO_RD10_RP3 (3)
#define SPI3_MISO_RD11_RP12 (12)
#define SPI3_MISO_RD2_RP23 (23)
#define SPI3_MISO_RD3_RP22 (22)
#define SPI3_MISO_RD4_RP25 (25)
#define SPI3_MISO_RD5_RP20 (20)
#define SPI3_MISO_RD8_RP2 (2)
#define SPI3_MISO_RD9_RP4 (4)
#define SPI3_MISO_RF3_RP16 (16)
#define SPI3_MISO_RF4_RP10 (10)
#define SPI3_MISO_RF5_RP17 (17)
#define SPI3_MISO_RG6_RP21 (21)
#define SPI3_MISO_RG7_RP26 (26)
#define SPI3_MISO_RG8_RP19 (19)
#define SPI3_MISO_RG9_RP27 (27)
#define SPI3_MOSI_RB0_RP0 (0)
#define SPI3_MOSI_RB1_RP1 (1)
#define SPI3_MOSI_RB14_RP14 (14)
#define SPI3_MOSI_RB15_RP29 (29)
#define SPI3_MOSI_RB2_RP13 (13)
#define SPI3_MOSI_RB4_RP28 (28)
#define SPI3_MOSI_RB5_RP18 (18)
#define SPI3_MOSI_RB6_RP6 (6)
#define SPI3_MOSI_RB7_RP7 (7)
#define SPI3_MOSI_RB8_RP8 (8)
#define SPI3_MOSI_RB9_RP9 (9)
#define SPI3_MOSI_RD0_RP11 (11)
#define SPI3_MOSI_RD1_RP24 (24)
#define SPI3_MOSI_RD10_RP3 (3)
#define SPI3_MOSI_RD11_RP12 (12)
#define SPI3_MOSI_RD2_RP23 (23)
#define SPI3_MOSI_RD3_RP22 (22)
#define SPI3_MOSI_RD4_RP25 (25)
#define SPI3_MOSI_RD5_RP20 (20)
#define SPI3_MOSI_RD8_RP2 (2)
#define SPI3_MOSI_RD9_RP4 (4)
#define SPI3_MOSI_RF3_RP16 (16)
#define SPI3_MOSI_RF4_RP10 (10)
#define SPI3_MOSI_RF5_RP17 (17)
#define SPI3_MOSI_RG6_RP21 (21)
#define SPI3_MOSI_RG7_RP26 (26)
#define SPI3_MOSI_RG8_RP19 (19)
#define SPI3_MOSI_RG9_RP27 (27)
#define SPI3_SCK_RB0_RP0 (0)
#define SPI3_SCK_RB1_RP1 (1)
#define SPI3_SCK_RB14_RP14 (14)
#define SPI3_SCK_RB15_RP29 (29)
#define SPI3_SCK_RB2_RP13 (13)
#define SPI3_SCK_RB4_RP28 (28)
#define SPI3_SCK_RB5_RP18 (18)
#define SPI3_SCK_RB6_RP6 (6)
#define SPI3_SCK_RB7_RP7 (7)
#define SPI3_SCK_RB8_RP8 (8)
#define SPI3_SCK_RB9_RP9 (9)
#define SPI3_SCK_RC14_RPI37 (37)
#define SPI3_SCK_RD0_RP11 (11)
#define SPI3_SCK_RD1_RP24 (24)
#define SPI3_SCK_RD10_RP3 (3)
#define SPI3_SCK_RD11_RP12 (12)
#define SPI3_SCK_RD2_RP23 (23)
#define SPI3_SCK_RD3_RP22 (22)
#define SPI3_SCK_RD4_RP25 (25)
#define SPI3_SCK_RD5_RP20 (20)
#define SPI3_SCK_RD8_RP2 (2)
#define SPI3_SCK_RD9_RP4 (4)
#define SPI3_SCK_RF3_RP16 (16)
#define SPI3_SCK_RF4_RP10 (10)
#define SPI3_SCK_RF5_RP17 (17)
#define SPI3_SCK_RG6_RP21 (21)
#define SPI3_SCK_RG7_RP26 (26)
#define SPI3_SCK_RG8_RP19 (19)
#define SPI3_SCK_RG9_RP27 (27)
#define SPI4_FSYNC4_RB11
#define SPI4_MISO_RB13
#define SPI4_MOSI_RB10
#define SPI4_SCK_RF1
#define SPI4_SS_RB11

#define SPI_MODULE_1 1
#define SPI_MODULE_2 2
#define SPI_MODULE_3 3
#define SPI_MODULE_4 4
#define SPI_MODULE_COUNT 4

// SPI Register addresses and offsets
#define HAL_LL_SPI1CON1L_REG_ADDRESS (0x3F4)
#define HAL_LL_SPI1_CONTROL_REG_ADDRESS HAL_LL_SPI1CON1L_REG_ADDRESS
#define HAL_LL_SPI1CON1H_REG_ADDRESS (0x3F6)
#define HAL_LL_SPI1STATL_REG_ADDRESS (0x3FC)
#define HAL_LL_SPI1STATH_REG_ADDRESS (0x3FE)
#define HAL_LL_SPI1BUFL_REG_ADDRESS (0x400)
#define HAL_LL_SPI1BUFH_REG_ADDRESS (0x402)
#define HAL_LL_SPI1BRGL_REG_ADDRESS (0x404)
#define HAL_LL_SPI1BRGH_REG_ADDRESS (0x406)
#define HAL_LL_SPI2CON1L_REG_ADDRESS (0x410)
#define HAL_LL_SPI2_CONTROL_REG_ADDRESS HAL_LL_SPI2CON1L_REG_ADDRESS
#define HAL_LL_SPI2CON1H_REG_ADDRESS (0x412)
#define HAL_LL_SPI2STATL_REG_ADDRESS (0x418)
#define HAL_LL_SPI2STATH_REG_ADDRESS (0x41A)
#define HAL_LL_SPI2BUFL_REG_ADDRESS (0x41C)
#define HAL_LL_SPI2BUFH_REG_ADDRESS (0x41E)
#define HAL_LL_SPI2BRGL_REG_ADDRESS (0x420)
#define HAL_LL_SPI2BRGH_REG_ADDRESS (0x422)
#define HAL_LL_SPI3CON1L_REG_ADDRESS (0x42C)
#define HAL_LL_SPI3_CONTROL_REG_ADDRESS HAL_LL_SPI3CON1L_REG_ADDRESS
#define HAL_LL_SPI3CON1H_REG_ADDRESS (0x42E)
#define HAL_LL_SPI3STATL_REG_ADDRESS (0x434)
#define HAL_LL_SPI3STATH_REG_ADDRESS (0x436)
#define HAL_LL_SPI3BUFL_REG_ADDRESS (0x438)
#define HAL_LL_SPI3BUFH_REG_ADDRESS (0x43A)
#define HAL_LL_SPI3BRGL_REG_ADDRESS (0x43C)
#define HAL_LL_SPI3BRGH_REG_ADDRESS (0x43E)
#define HAL_LL_SPI4CON1L_REG_ADDRESS (0x448)
#define HAL_LL_SPI4_CONTROL_REG_ADDRESS HAL_LL_SPI4CON1L_REG_ADDRESS
#define HAL_LL_SPI4CON1H_REG_ADDRESS (0x44A)
#define HAL_LL_SPI4STATL_REG_ADDRESS (0x450)
#define HAL_LL_SPI4STATH_REG_ADDRESS (0x452)
#define HAL_LL_SPI4BUFL_REG_ADDRESS (0x454)
#define HAL_LL_SPI4BUFH_REG_ADDRESS (0x456)
#define HAL_LL_SPI4BRGL_REG_ADDRESS (0x458)
#define HAL_LL_SPI4BRGH_REG_ADDRESS (0x45A)
// EOF SPI Register addresses and offsets
// EOF SPI

// TIM
#define PWM_CCP1_OC1_RB1_RP1 (1)
#define PWM_CCP1_OC1_RB14_RP14 (14)
#define PWM_CCP1_OC1_RB5_RP18 (18)
#define PWM_CCP1_OC1_RB8_RP8 (8)
#define PWM_CCP1_OC2_RB0_RP0 (0)
#define PWM_CCP1_OC2_RB4_RP28 (28)
#define PWM_CCP1_OC2_RB7_RP7 (7)
#define PWM_CCP1_OC3_RB2_RP13 (13)
#define PWM_CCP1_OC4_RB6_RP6 (6)
#define PWM_CCP1_OC6_RB15_RP29 (29)
#define PWM_CCP1_OC6_RB9_RP9 (9)
#define PWM_CCP2_OC1_RD5_RP20 (20)
#define PWM_CCP2_OC2_RD2_RP23 (23)
#define PWM_CCP2_OC3_RD4_RP25 (25)
#define PWM_CCP2_OC4_RD0_RP11 (11)
#define PWM_CCP2_OC4_RD1_RP24 (24)
#define PWM_CCP2_OC4_RD10_RP3 (3)
#define PWM_CCP2_OC4_RD11_RP12 (12)
#define PWM_CCP2_OC5_RD3_RP22 (22)
#define PWM_CCP2_OC5_RD8_RP2 (2)
#define PWM_CCP2_OC6_RD9_RP4 (4)
#define PWM_CCP3_OC1_RF3_RP16 (16)
#define PWM_CCP3_OC3_RF5_RP17 (17)
#define PWM_CCP3_OC5_RF4_RP10 (10)
#define PWM_CCP4_OC3_RG8_RP19 (19)
#define PWM_CCP4_OC3_RG9_RP27 (27)
#define PWM_CCP4_OC4_RD6
#define PWM_CCP4_OC4_RG6_RP21 (21)
#define PWM_CCP4_OC4_RG7_RP26 (26)
#define PWM_CCP5_OC1_RB0_RP0 (0)
#define PWM_CCP5_OC1_RB4_RP28 (28)
#define PWM_CCP5_OC1_RB7_RP7 (7)
#define PWM_CCP5_OC2_RB2_RP13 (13)
#define PWM_CCP5_OC3_RB6_RP6 (6)
#define PWM_CCP5_OC5_RB15_RP29 (29)
#define PWM_CCP5_OC5_RB9_RP9 (9)
#define PWM_CCP5_OC5_RD7
#define PWM_CCP5_OC6_RB1_RP1 (1)
#define PWM_CCP5_OC6_RB14_RP14 (14)
#define PWM_CCP5_OC6_RB5_RP18 (18)
#define PWM_CCP5_OC6_RB8_RP8 (8)
#define PWM_CCP6_OC6_RF0

#define CCP_MODULE_1 1
#define CCP_MODULE_2 2
#define CCP_MODULE_3 3
#define CCP_MODULE_4 4
#define CCP_MODULE_5 5
#define CCP_MODULE_6 6

#define CCP_MODULE_COUNT 6
#define TIM_MODULE_COUNT CCP_MODULE_COUNT

// TIM Register addresses and offsets
#define HAL_LL_TMR1_REG_ADDRESS (0x190)
#define HAL_LL_PR1_REG_ADDRESS (0x192)
#define HAL_LL_T1CON_REG_ADDRESS (0x194)
#define HAL_LL_TMR2_REG_ADDRESS (0x196)
#define HAL_LL_TMR3_REG_ADDRESS (0x19A)
#define HAL_LL_PR2_REG_ADDRESS (0x19C)
#define HAL_LL_PR3_REG_ADDRESS (0x19E)
#define HAL_LL_T2CON_REG_ADDRESS (0x1A0)
#define HAL_LL_T3CON_REG_ADDRESS (0x1A2)
#define HAL_LL_TMR4_REG_ADDRESS (0x1A4)
#define HAL_LL_TMR5_REG_ADDRESS (0x1A8)
#define HAL_LL_PR4_REG_ADDRESS (0x1AA)
#define HAL_LL_PR5_REG_ADDRESS (0x1AC)
#define HAL_LL_T4CON_REG_ADDRESS (0x1AE)
#define HAL_LL_T5CON_REG_ADDRESS (0x1B0)
#define HAL_LL_OC1CON1_REG_ADDRESS (0x230)
#define HAL_LL_OC1CON2_REG_ADDRESS (0x232)
#define HAL_LL_OC1RS_REG_ADDRESS (0x234)
#define HAL_LL_OC1R_REG_ADDRESS (0x236)
#define HAL_LL_OC2CON1_REG_ADDRESS (0x23A)
#define HAL_LL_OC2CON2_REG_ADDRESS (0x23C)
#define HAL_LL_OC2RS_REG_ADDRESS (0x23E)
#define HAL_LL_OC2R_REG_ADDRESS (0x240)
#define HAL_LL_OC2TMR_REG_ADDRESS (0x242)
#define HAL_LL_OC3CON1_REG_ADDRESS (0x244)
#define HAL_LL_OC3CON2_REG_ADDRESS (0x246)
#define HAL_LL_OC3RS_REG_ADDRESS (0x248)
#define HAL_LL_OC3R_REG_ADDRESS (0x24A)
#define HAL_LL_OC3TMR_REG_ADDRESS (0x24C)
#define HAL_LL_OC4CON1_REG_ADDRESS (0x24E)
#define HAL_LL_OC4CON2_REG_ADDRESS (0x250)
#define HAL_LL_OC4RS_REG_ADDRESS (0x252)
#define HAL_LL_OC4R_REG_ADDRESS (0x254)
#define HAL_LL_OC4TMR_REG_ADDRESS (0x256)
#define HAL_LL_OC5CON1_REG_ADDRESS (0x258)
#define HAL_LL_OC5CON2_REG_ADDRESS (0x25A)
#define HAL_LL_OC5RS_REG_ADDRESS (0x25C)
#define HAL_LL_OC5R_REG_ADDRESS (0x25E)
#define HAL_LL_OC5TMR_REG_ADDRESS (0x260)
#define HAL_LL_OC6CON1_REG_ADDRESS (0x262)
#define HAL_LL_OC6CON2_REG_ADDRESS (0x264)
#define HAL_LL_OC6RS_REG_ADDRESS (0x266)
#define HAL_LL_OC6R_REG_ADDRESS (0x268)
#define HAL_LL_OC6TMR_REG_ADDRESS (0x26A)
#define HAL_LL_CCP1CON1L_REG_ADDRESS (0x26C)
#define HAL_LL_CCP1CON1H_REG_ADDRESS (0x26E)
#define HAL_LL_CCP1CON2L_REG_ADDRESS (0x270)
#define HAL_LL_CCP1CON2H_REG_ADDRESS (0x272)
#define HAL_LL_CCP1CON3L_REG_ADDRESS (0x274)
#define HAL_LL_CCP1CON3H_REG_ADDRESS (0x276)
#define HAL_LL_CCP1PRL_REG_ADDRESS (0x280)
#define HAL_LL_CCP2CON1L_REG_ADDRESS (0x290)
#define HAL_LL_CCP2CON1H_REG_ADDRESS (0x292)
#define HAL_LL_CCP2CON2L_REG_ADDRESS (0x294)
#define HAL_LL_CCP2CON2H_REG_ADDRESS (0x296)
#define HAL_LL_CCP2CON3L_REG_ADDRESS (0x298)
#define HAL_LL_CCP2CON3H_REG_ADDRESS (0x29A)
#define HAL_LL_CCP2PRL_REG_ADDRESS (0x2A4)
#define HAL_LL_CCP3CON1L_REG_ADDRESS (0x2B4)
#define HAL_LL_CCP3CON1H_REG_ADDRESS (0x2B6)
#define HAL_LL_CCP3CON2L_REG_ADDRESS (0x2B8)
#define HAL_LL_CCP3CON2H_REG_ADDRESS (0x2BA)
#define HAL_LL_CCP3CON3L_REG_ADDRESS (0x2BC)
#define HAL_LL_CCP3CON3H_REG_ADDRESS (0x2BE)
#define HAL_LL_CCP3PRL_REG_ADDRESS (0x2C8)
#define HAL_LL_CCP4CON1L_REG_ADDRESS (0x300)
#define HAL_LL_CCP4CON1H_REG_ADDRESS (0x302)
#define HAL_LL_CCP4CON2L_REG_ADDRESS (0x304)
#define HAL_LL_CCP4CON2H_REG_ADDRESS (0x306)
#define HAL_LL_CCP4CON3L_REG_ADDRESS (0x308)
#define HAL_LL_CCP4CON3H_REG_ADDRESS (0x30A)
#define HAL_LL_CCP4PRL_REG_ADDRESS (0x314)
#define HAL_LL_CCP5CON1L_REG_ADDRESS (0x324)
#define HAL_LL_CCP5CON1H_REG_ADDRESS (0x326)
#define HAL_LL_CCP5CON2L_REG_ADDRESS (0x328)
#define HAL_LL_CCP5CON2H_REG_ADDRESS (0x32A)
#define HAL_LL_CCP5CON3L_REG_ADDRESS (0x32C)
#define HAL_LL_CCP5CON3H_REG_ADDRESS (0x32E)
#define HAL_LL_CCP5PRL_REG_ADDRESS (0x338)
#define HAL_LL_CCP6CON1L_REG_ADDRESS (0x348)
#define HAL_LL_CCP6CON1H_REG_ADDRESS (0x34A)
#define HAL_LL_CCP6CON2L_REG_ADDRESS (0x34C)
#define HAL_LL_CCP6CON2H_REG_ADDRESS (0x34E)
#define HAL_LL_CCP6CON3L_REG_ADDRESS (0x350)
#define HAL_LL_CCP6CON3H_REG_ADDRESS (0x352)
#define HAL_LL_CCP6PRL_REG_ADDRESS (0x35C)
#define HAL_LL_CCP7CON1L_REG_ADDRESS (0x36C)
#define HAL_LL_CCP7CON1H_REG_ADDRESS (0x36E)
#define HAL_LL_CCP7CON2L_REG_ADDRESS (0x370)
#define HAL_LL_CCP7CON2H_REG_ADDRESS (0x372)
#define HAL_LL_CCP7CON3L_REG_ADDRESS (0x374)
#define HAL_LL_CCP7CON3H_REG_ADDRESS (0x376)
#define HAL_LL_CCP7PRL_REG_ADDRESS (0x380)
// EOF TIM Register addresses and offsets
// EOF TIM

// GPIO
#define __RB0_CN
#define __RB1_CN
#define __RB10_CN
#define __RB11_CN
#define __RB12_CN
#define __RB13_CN
#define __RB14_CN
#define __RB15_CN
#define __RB2_CN
#define __RB3_CN
#define __RB4_CN
#define __RB5_CN
#define __RB6_CN
#define __RB7_CN
#define __RB8_CN
#define __RB9_CN
#define __RC12_CN
#define __RC13_CN
#define __RC14_CN
#define __RC15_CN
#define __RD0_CN
#define __RD1_CN
#define __RD10_CN
#define __RD11_CN
#define __RD2_CN
#define __RD3_CN
#define __RD4_CN
#define __RD5_CN
#define __RD6_CN
#define __RD7_CN
#define __RD8_CN
#define __RD9_CN
#define __RE0_CN
#define __RE1_CN
#define __RE2_CN
#define __RE3_CN
#define __RE4_CN
#define __RE5_CN
#define __RE6_CN
#define __RE7_CN
#define __RF0_CN
#define __RF1_CN
#define __RF3_CN
#define __RF4_CN
#define __RF5_CN
#define __RF7_CN
#define __RG2_CN
#define __RG3_CN
#define __RG6_CN
#define __RG7_CN
#define __RG8_CN
#define __RG9_CN

#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_D_CN
#define __PORT_E_CN
#define __PORT_F_CN
#define __PORT_G_CN

#define PORT_SIZE  (16)
#define PORT_COUNT (6)

#define TRISA_REG_ADDRESS (0x65E)
#define PORTA_REG_ADDRESS (0x660)
#define LATA_REG_ADDRESS (0x662)
#define TRISB_REG_ADDRESS (0x672)
#define PORTB_REG_ADDRESS (0x674)
#define LATB_REG_ADDRESS (0x676)
#define TRISC_REG_ADDRESS (0x686)
#define PORTC_REG_ADDRESS (0x688)
#define LATC_REG_ADDRESS (0x68A)
#define TRISD_REG_ADDRESS (0x69A)
#define PORTD_REG_ADDRESS (0x69C)
#define LATD_REG_ADDRESS (0x69E)
#define TRISE_REG_ADDRESS (0x6AE)
#define PORTE_REG_ADDRESS (0x6B0)
#define LATE_REG_ADDRESS (0x6B2)
#define TRISF_REG_ADDRESS (0x6C2)
#define PORTF_REG_ADDRESS (0x6C4)
#define LATF_REG_ADDRESS (0x6C6)
#define TRISG_REG_ADDRESS (0x6D6)
#define PORTG_REG_ADDRESS (0x6D8)
#define LATG_REG_ADDRESS (0x6DA)
#define TRISH_REG_ADDRESS (0x6EA)
#define PORTH_REG_ADDRESS (0x6EC)
#define LATH_REG_ADDRESS (0x6EE)
#define TRISJ_REG_ADDRESS (0x6FE)
#define PORTJ_REG_ADDRESS (0x700)
#define LATJ_REG_ADDRESS (0x702)
// EOF GPIO

// PPS
#define HAL_LL_OSCCON_REG_ADDRESS 0x100
#define HAL_LL_UART_PPS_ENABLED true
#define HAL_LL_SPI_PPS_ENABLED true
#define HAL_LL_PWM_PPS_ENABLED true
// PPS Register addresses and offsets
#define HAL_LL_RPINR0_REG_ADDRESS (0x790)
#define HAL_LL_RPINR1_REG_ADDRESS (0x792)
#define HAL_LL_RPINR2_REG_ADDRESS (0x794)
#define HAL_LL_RPINR3_REG_ADDRESS (0x796)
#define HAL_LL_RPINR4_REG_ADDRESS (0x798)
#define HAL_LL_RPINR7_REG_ADDRESS (0x79E)
#define HAL_LL_RPINR8_REG_ADDRESS (0x7A0)
#define HAL_LL_RPINR11_REG_ADDRESS (0x7A6)
#define HAL_LL_RPINR12_REG_ADDRESS (0x7A8)
#define HAL_LL_RPINR17_REG_ADDRESS (0x7B2)
#define HAL_LL_RPINR18_REG_ADDRESS (0x7B4)
#define HAL_LL_RPINR19_REG_ADDRESS (0x7B6)
#define HAL_LL_RPINR20_REG_ADDRESS (0x7B8)
#define HAL_LL_RPINR21_REG_ADDRESS (0x7BA)
#define HAL_LL_RPINR22_REG_ADDRESS (0x7BC)
#define HAL_LL_RPINR23_REG_ADDRESS (0x7BE)
#define HAL_LL_RPINR25_REG_ADDRESS (0x7C2)
#define HAL_LL_RPINR27_REG_ADDRESS (0x7C6)
#define HAL_LL_RPINR28_REG_ADDRESS (0x7C8)
#define HAL_LL_RPINR29_REG_ADDRESS (0x7CA)
#define HAL_LL_RPOR0_REG_ADDRESS (0x7D4)
#define HAL_LL_RPOR1_REG_ADDRESS (0x7D6)
#define HAL_LL_RPOR2_REG_ADDRESS (0x7D8)
#define HAL_LL_RPOR3_REG_ADDRESS (0x7DA)
#define HAL_LL_RPOR4_REG_ADDRESS (0x7DC)
#define HAL_LL_RPOR5_REG_ADDRESS (0x7DE)
#define HAL_LL_RPOR6_REG_ADDRESS (0x7E0)
#define HAL_LL_RPOR7_REG_ADDRESS (0x7E2)
#define HAL_LL_RPOR8_REG_ADDRESS (0x7E4)
#define HAL_LL_RPOR9_REG_ADDRESS (0x7E6)
#define HAL_LL_RPOR10_REG_ADDRESS (0x7E8)
#define HAL_LL_RPOR11_REG_ADDRESS (0x7EA)
#define HAL_LL_RPOR12_REG_ADDRESS (0x7EC)
#define HAL_LL_RPOR13_REG_ADDRESS (0x7EE)
#define HAL_LL_RPOR14_REG_ADDRESS (0x7F0)
#define HAL_LL_RPOR15_REG_ADDRESS (0x7F2)
// EOF PPS Register addresses and offsets
// EOF PPS

// IVT
#define USART1_RX_IVT_ADDRESS (0x002A)
#define USART1_TX_IVT_ADDRESS (0x002C)
#define USART2_RX_IVT_ADDRESS (0x0050)
#define USART2_TX_IVT_ADDRESS (0x0052)
#define USART3_RX_IVT_ADDRESS (0x00B8)
#define USART3_TX_IVT_ADDRESS (0x00BA)
#define USART4_RX_IVT_ADDRESS (0x00C4)
#define USART4_TX_IVT_ADDRESS (0x00C6)
#define USART5_RX_IVT_ADDRESS (0x00F2)
#define USART5_TX_IVT_ADDRESS (0x00F4)
#define USART6_RX_IVT_ADDRESS (0x00F8)
#define USART6_TX_IVT_ADDRESS (0x00FA)
// EOF IVT

#define _HAS_GIE_BIT_

#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END
