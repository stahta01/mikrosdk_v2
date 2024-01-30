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
* @file  mcu_definitions.h
* @brief PIC24FJ256GA110 MCU specific pin and module definitions.
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

// ADC Register addresses and offsets
#define HAL_LL_IFS0_REG_ADDRESS (0x84)
#define HAL_LL_IFS1_REG_ADDRESS (0x86)
#define HAL_LL_IFS2_REG_ADDRESS (0x88)
#define HAL_LL_IFS3_REG_ADDRESS (0x8A)
#define HAL_LL_IFS4_REG_ADDRESS (0x8C)
#define HAL_LL_IFS5_REG_ADDRESS (0x8E)
#define HAL_LL_IEC0_REG_ADDRESS (0x94)
#define HAL_LL_IEC1_REG_ADDRESS (0x96)
#define HAL_LL_IEC2_REG_ADDRESS (0x98)
#define HAL_LL_IEC3_REG_ADDRESS (0x9A)
#define HAL_LL_IEC4_REG_ADDRESS (0x9C)
#define HAL_LL_IEC5_REG_ADDRESS (0x9E)
#define HAL_LL_IPC0_REG_ADDRESS (0xA4)
#define HAL_LL_IPC1_REG_ADDRESS (0xA6)
#define HAL_LL_IPC2_REG_ADDRESS (0xA8)
#define HAL_LL_IPC3_REG_ADDRESS (0xAA)
#define HAL_LL_IPC4_REG_ADDRESS (0xAC)
#define HAL_LL_IPC5_REG_ADDRESS (0xAE)
#define HAL_LL_IPC6_REG_ADDRESS (0xB0)
#define HAL_LL_IPC7_REG_ADDRESS (0xB2)
#define HAL_LL_IPC8_REG_ADDRESS (0xB4)
#define HAL_LL_IPC9_REG_ADDRESS (0xB6)
#define HAL_LL_IPC10_REG_ADDRESS (0xB8)
#define HAL_LL_IPC11_REG_ADDRESS (0xBA)
#define HAL_LL_IPC12_REG_ADDRESS (0xBC)
#define HAL_LL_IPC13_REG_ADDRESS (0xBE)
#define HAL_LL_IPC15_REG_ADDRESS (0xC2)
#define HAL_LL_IPC16_REG_ADDRESS (0xC4)
#define HAL_LL_IPC18_REG_ADDRESS (0xC8)
#define HAL_LL_IPC19_REG_ADDRESS (0xCA)
#define HAL_LL_IPC20_REG_ADDRESS (0xCC)
#define HAL_LL_IPC21_REG_ADDRESS (0xCE)
#define HAL_LL_IPC22_REG_ADDRESS (0xD0)
#define HAL_LL_IPC23_REG_ADDRESS (0xD2)
#define HAL_LL_ADC1BUF0_REG_ADDRESS (0x300)
#define HAL_LL_ADC1BUF1_REG_ADDRESS (0x302)
#define HAL_LL_ADC1BUF2_REG_ADDRESS (0x304)
#define HAL_LL_ADC1BUF3_REG_ADDRESS (0x306)
#define HAL_LL_ADC1BUF4_REG_ADDRESS (0x308)
#define HAL_LL_ADC1BUF5_REG_ADDRESS (0x30A)
#define HAL_LL_ADC1BUF6_REG_ADDRESS (0x30C)
#define HAL_LL_ADC1BUF7_REG_ADDRESS (0x30E)
#define HAL_LL_ADC1BUF8_REG_ADDRESS (0x310)
#define HAL_LL_ADC1BUF9_REG_ADDRESS (0x312)
#define HAL_LL_ADC1BUFA_REG_ADDRESS (0x314)
#define HAL_LL_ADC1BUFB_REG_ADDRESS (0x316)
#define HAL_LL_ADC1BUFC_REG_ADDRESS (0x318)
#define HAL_LL_ADC1BUFD_REG_ADDRESS (0x31A)
#define HAL_LL_ADC1BUFE_REG_ADDRESS (0x31C)
#define HAL_LL_ADC1BUFF_REG_ADDRESS (0x31E)
#define HAL_LL_AD1CON1_REG_ADDRESS (0x320)
#define HAL_LL_AD1CON2_REG_ADDRESS (0x322)
#define HAL_LL_AD1CON3_REG_ADDRESS (0x324)
#define HAL_LL_AD1CHS_REG_ADDRESS (0x328)
#define HAL_LL_AD1PCFGH_REG_ADDRESS (0x32A)
#define HAL_LL_AD1PCFGL_REG_ADDRESS (0x32C)
#define HAL_LL_AD1CSSL_REG_ADDRESS (0x330)
#define HAL_LL_AD1CSSH_REG_ADDRESS (0x332)
#define _ADC_ADPCFGLH_
// EOF ADC Register addresses and offsets
// EOF ADC

// I2C
#define I2C1_RG2_SCL1
#define I2C1_RG3_SDA1
#define I2C2_RA14_SCL2
#define I2C2_RA15_SDA2
#define I2C2_RA2_SCL2
#define I2C2_RA3_SDA2
#define I2C3_RE6_SCL3
#define I2C3_RE7_SDA3

#define I2C_MODULE_1 1
#define I2C_MODULE_2 2
#define I2C_MODULE_3 3
#define I2C_MODULE_COUNT 3

// I2C Register addresses and offsets
#define HAL_LL_I2C1RCV_REG_ADDRESS (0x200)
#define HAL_LL_I2C1TRN_REG_ADDRESS (0x202)
#define HAL_LL_I2C1BRG_REG_ADDRESS (0x204)
#define HAL_LL_I2C1CON_REG_ADDRESS (0x206)
#define HAL_LL_I2C1STAT_REG_ADDRESS (0x208)
#define HAL_LL_I2C2RCV_REG_ADDRESS (0x210)
#define HAL_LL_I2C2TRN_REG_ADDRESS (0x212)
#define HAL_LL_I2C2BRG_REG_ADDRESS (0x214)
#define HAL_LL_I2C2CON_REG_ADDRESS (0x216)
#define HAL_LL_I2C2STAT_REG_ADDRESS (0x218)
#define HAL_LL_I2C3RCV_REG_ADDRESS (0x270)
#define HAL_LL_I2C3TRN_REG_ADDRESS (0x272)
#define HAL_LL_I2C3BRG_REG_ADDRESS (0x274)
#define HAL_LL_I2C3CON_REG_ADDRESS (0x276)
#define HAL_LL_I2C3STAT_REG_ADDRESS (0x278)
#define HAL_LL_PADCFG1_REG_ADDRESS (0x2FC)
// EOF I2C Register addresses and offsets
// EOF I2C

// U(S)ART
#define UART1_RX_RA14_RPI36 (36)
#define UART1_RX_RA15_RPI35 (35)
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
#define UART1_RX_RC1_RPI38 (38)
#define UART1_RX_RC14_RPI37 (37)
#define UART1_RX_RC2_RPI39 (39)
#define UART1_RX_RC3_RPI40 (40)
#define UART1_RX_RC4_RPI41 (41)
#define UART1_RX_RD0_RP11 (11)
#define UART1_RX_RD1_RP24 (24)
#define UART1_RX_RD10_RP3 (3)
#define UART1_RX_RD11_RP12 (12)
#define UART1_RX_RD12_RPI42 (42)
#define UART1_RX_RD14_RPI43 (43)
#define UART1_RX_RD15_RP5 (5)
#define UART1_RX_RD2_RP23 (23)
#define UART1_RX_RD3_RP22 (22)
#define UART1_RX_RD4_RP25 (25)
#define UART1_RX_RD5_RP20 (20)
#define UART1_RX_RD8_RP2 (2)
#define UART1_RX_RD9_RP4 (4)
#define UART1_RX_RE8_RPI33 (33)
#define UART1_RX_RE9_RPI34 (34)
#define UART1_RX_RF12_RPI32 (32)
#define UART1_RX_RF13_RP31 (31)
#define UART1_RX_RF2_RP30 (30)
#define UART1_RX_RF3_RP16 (16)
#define UART1_RX_RF4_RP10 (10)
#define UART1_RX_RF5_RP17 (17)
#define UART1_RX_RF6_RPI45 (45)
#define UART1_RX_RF7_RPI44 (44)
#define UART1_RX_RF8_RP15 (15)
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
#define UART1_TX_RD15_RP5 (5)
#define UART1_TX_RD2_RP23 (23)
#define UART1_TX_RD3_RP22 (22)
#define UART1_TX_RD4_RP25 (25)
#define UART1_TX_RD5_RP20 (20)
#define UART1_TX_RD8_RP2 (2)
#define UART1_TX_RD9_RP4 (4)
#define UART1_TX_RF13_RP31 (31)
#define UART1_TX_RF2_RP30 (30)
#define UART1_TX_RF3_RP16 (16)
#define UART1_TX_RF4_RP10 (10)
#define UART1_TX_RF5_RP17 (17)
#define UART1_TX_RF8_RP15 (15)
#define UART1_TX_RG6_RP21 (21)
#define UART1_TX_RG7_RP26 (26)
#define UART1_TX_RG8_RP19 (19)
#define UART1_TX_RG9_RP27 (27)
#define UART2_RX_RA14_RPI36 (36)
#define UART2_RX_RA15_RPI35 (35)
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
#define UART2_RX_RC1_RPI38 (38)
#define UART2_RX_RC14_RPI37 (37)
#define UART2_RX_RC2_RPI39 (39)
#define UART2_RX_RC3_RPI40 (40)
#define UART2_RX_RC4_RPI41 (41)
#define UART2_RX_RD0_RP11 (11)
#define UART2_RX_RD1_RP24 (24)
#define UART2_RX_RD10_RP3 (3)
#define UART2_RX_RD11_RP12 (12)
#define UART2_RX_RD12_RPI42 (42)
#define UART2_RX_RD14_RPI43 (43)
#define UART2_RX_RD15_RP5 (5)
#define UART2_RX_RD2_RP23 (23)
#define UART2_RX_RD3_RP22 (22)
#define UART2_RX_RD4_RP25 (25)
#define UART2_RX_RD5_RP20 (20)
#define UART2_RX_RD8_RP2 (2)
#define UART2_RX_RD9_RP4 (4)
#define UART2_RX_RE8_RPI33 (33)
#define UART2_RX_RE9_RPI34 (34)
#define UART2_RX_RF12_RPI32 (32)
#define UART2_RX_RF13_RP31 (31)
#define UART2_RX_RF2_RP30 (30)
#define UART2_RX_RF3_RP16 (16)
#define UART2_RX_RF4_RP10 (10)
#define UART2_RX_RF5_RP17 (17)
#define UART2_RX_RF6_RPI45 (45)
#define UART2_RX_RF7_RPI44 (44)
#define UART2_RX_RF8_RP15 (15)
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
#define UART2_TX_RD15_RP5 (5)
#define UART2_TX_RD2_RP23 (23)
#define UART2_TX_RD3_RP22 (22)
#define UART2_TX_RD4_RP25 (25)
#define UART2_TX_RD5_RP20 (20)
#define UART2_TX_RD8_RP2 (2)
#define UART2_TX_RD9_RP4 (4)
#define UART2_TX_RF13_RP31 (31)
#define UART2_TX_RF2_RP30 (30)
#define UART2_TX_RF3_RP16 (16)
#define UART2_TX_RF4_RP10 (10)
#define UART2_TX_RF5_RP17 (17)
#define UART2_TX_RF8_RP15 (15)
#define UART2_TX_RG6_RP21 (21)
#define UART2_TX_RG7_RP26 (26)
#define UART2_TX_RG8_RP19 (19)
#define UART2_TX_RG9_RP27 (27)
#define UART3_RX_RA14_RPI36 (36)
#define UART3_RX_RA15_RPI35 (35)
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
#define UART3_RX_RC1_RPI38 (38)
#define UART3_RX_RC14_RPI37 (37)
#define UART3_RX_RC2_RPI39 (39)
#define UART3_RX_RC3_RPI40 (40)
#define UART3_RX_RC4_RPI41 (41)
#define UART3_RX_RD0_RP11 (11)
#define UART3_RX_RD1_RP24 (24)
#define UART3_RX_RD10_RP3 (3)
#define UART3_RX_RD11_RP12 (12)
#define UART3_RX_RD12_RPI42 (42)
#define UART3_RX_RD14_RPI43 (43)
#define UART3_RX_RD15_RP5 (5)
#define UART3_RX_RD2_RP23 (23)
#define UART3_RX_RD3_RP22 (22)
#define UART3_RX_RD4_RP25 (25)
#define UART3_RX_RD5_RP20 (20)
#define UART3_RX_RD8_RP2 (2)
#define UART3_RX_RD9_RP4 (4)
#define UART3_RX_RE8_RPI33 (33)
#define UART3_RX_RE9_RPI34 (34)
#define UART3_RX_RF12_RPI32 (32)
#define UART3_RX_RF13_RP31 (31)
#define UART3_RX_RF2_RP30 (30)
#define UART3_RX_RF3_RP16 (16)
#define UART3_RX_RF4_RP10 (10)
#define UART3_RX_RF5_RP17 (17)
#define UART3_RX_RF6_RPI45 (45)
#define UART3_RX_RF7_RPI44 (44)
#define UART3_RX_RF8_RP15 (15)
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
#define UART3_TX_RD15_RP5 (5)
#define UART3_TX_RD2_RP23 (23)
#define UART3_TX_RD3_RP22 (22)
#define UART3_TX_RD4_RP25 (25)
#define UART3_TX_RD5_RP20 (20)
#define UART3_TX_RD8_RP2 (2)
#define UART3_TX_RD9_RP4 (4)
#define UART3_TX_RF13_RP31 (31)
#define UART3_TX_RF2_RP30 (30)
#define UART3_TX_RF3_RP16 (16)
#define UART3_TX_RF4_RP10 (10)
#define UART3_TX_RF5_RP17 (17)
#define UART3_TX_RF8_RP15 (15)
#define UART3_TX_RG6_RP21 (21)
#define UART3_TX_RG7_RP26 (26)
#define UART3_TX_RG8_RP19 (19)
#define UART3_TX_RG9_RP27 (27)
#define UART4_RX_RA14_RPI36 (36)
#define UART4_RX_RA15_RPI35 (35)
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
#define UART4_RX_RC1_RPI38 (38)
#define UART4_RX_RC14_RPI37 (37)
#define UART4_RX_RC2_RPI39 (39)
#define UART4_RX_RC3_RPI40 (40)
#define UART4_RX_RC4_RPI41 (41)
#define UART4_RX_RD0_RP11 (11)
#define UART4_RX_RD1_RP24 (24)
#define UART4_RX_RD10_RP3 (3)
#define UART4_RX_RD11_RP12 (12)
#define UART4_RX_RD12_RPI42 (42)
#define UART4_RX_RD14_RPI43 (43)
#define UART4_RX_RD15_RP5 (5)
#define UART4_RX_RD2_RP23 (23)
#define UART4_RX_RD3_RP22 (22)
#define UART4_RX_RD4_RP25 (25)
#define UART4_RX_RD5_RP20 (20)
#define UART4_RX_RD8_RP2 (2)
#define UART4_RX_RD9_RP4 (4)
#define UART4_RX_RE8_RPI33 (33)
#define UART4_RX_RE9_RPI34 (34)
#define UART4_RX_RF12_RPI32 (32)
#define UART4_RX_RF13_RP31 (31)
#define UART4_RX_RF2_RP30 (30)
#define UART4_RX_RF3_RP16 (16)
#define UART4_RX_RF4_RP10 (10)
#define UART4_RX_RF5_RP17 (17)
#define UART4_RX_RF6_RPI45 (45)
#define UART4_RX_RF7_RPI44 (44)
#define UART4_RX_RF8_RP15 (15)
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
#define UART4_TX_RD15_RP5 (5)
#define UART4_TX_RD2_RP23 (23)
#define UART4_TX_RD3_RP22 (22)
#define UART4_TX_RD4_RP25 (25)
#define UART4_TX_RD5_RP20 (20)
#define UART4_TX_RD8_RP2 (2)
#define UART4_TX_RD9_RP4 (4)
#define UART4_TX_RF13_RP31 (31)
#define UART4_TX_RF2_RP30 (30)
#define UART4_TX_RF3_RP16 (16)
#define UART4_TX_RF4_RP10 (10)
#define UART4_TX_RF5_RP17 (17)
#define UART4_TX_RF8_RP15 (15)
#define UART4_TX_RG6_RP21 (21)
#define UART4_TX_RG7_RP26 (26)
#define UART4_TX_RG8_RP19 (19)
#define UART4_TX_RG9_RP27 (27)

#define UART_MODULE_1 1
#define UART_MODULE_2 2
#define UART_MODULE_3 3
#define UART_MODULE_4 4
#define UART_MODULE_COUNT 4

// U(S)ART Register addresses and offsets
#define HAL_LL_U1MODE_REG_ADDRESS (0x220)
#define HAL_LL_U1STA_REG_ADDRESS (0x222)
#define HAL_LL_U1TXREG_REG_ADDRESS (0x224)
#define HAL_LL_U1RXREG_REG_ADDRESS (0x226)
#define HAL_LL_U1BRG_REG_ADDRESS (0x228)
#define HAL_LL_U2MODE_REG_ADDRESS (0x230)
#define HAL_LL_U2STA_REG_ADDRESS (0x232)
#define HAL_LL_U2TXREG_REG_ADDRESS (0x234)
#define HAL_LL_U2RXREG_REG_ADDRESS (0x236)
#define HAL_LL_U2BRG_REG_ADDRESS (0x238)
#define HAL_LL_U3MODE_REG_ADDRESS (0x250)
#define HAL_LL_U3STA_REG_ADDRESS (0x252)
#define HAL_LL_U3TXREG_REG_ADDRESS (0x254)
#define HAL_LL_U3RXREG_REG_ADDRESS (0x256)
#define HAL_LL_U3BRG_REG_ADDRESS (0x258)
#define HAL_LL_U4MODE_REG_ADDRESS (0x2B0)
#define HAL_LL_U4STA_REG_ADDRESS (0x2B2)
#define HAL_LL_U4TXREG_REG_ADDRESS (0x2B4)
#define HAL_LL_U4RXREG_REG_ADDRESS (0x2B6)
#define HAL_LL_U4BRG_REG_ADDRESS (0x2B8)
// EOF U(S)ART Register addresses and offsets
// EOF U(S)ART

// SPI
#define SPI1_MISO_RA14_RPI36 (36)
#define SPI1_MISO_RA15_RPI35 (35)
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
#define SPI1_MISO_RC1_RPI38 (38)
#define SPI1_MISO_RC14_RPI37 (37)
#define SPI1_MISO_RC2_RPI39 (39)
#define SPI1_MISO_RC3_RPI40 (40)
#define SPI1_MISO_RC4_RPI41 (41)
#define SPI1_MISO_RD0_RP11 (11)
#define SPI1_MISO_RD1_RP24 (24)
#define SPI1_MISO_RD10_RP3 (3)
#define SPI1_MISO_RD11_RP12 (12)
#define SPI1_MISO_RD12_RPI42 (42)
#define SPI1_MISO_RD14_RPI43 (43)
#define SPI1_MISO_RD15_RP5 (5)
#define SPI1_MISO_RD2_RP23 (23)
#define SPI1_MISO_RD3_RP22 (22)
#define SPI1_MISO_RD4_RP25 (25)
#define SPI1_MISO_RD5_RP20 (20)
#define SPI1_MISO_RD8_RP2 (2)
#define SPI1_MISO_RD9_RP4 (4)
#define SPI1_MISO_RE8_RPI33 (33)
#define SPI1_MISO_RE9_RPI34 (34)
#define SPI1_MISO_RF12_RPI32 (32)
#define SPI1_MISO_RF13_RP31 (31)
#define SPI1_MISO_RF2_RP30 (30)
#define SPI1_MISO_RF3_RP16 (16)
#define SPI1_MISO_RF4_RP10 (10)
#define SPI1_MISO_RF5_RP17 (17)
#define SPI1_MISO_RF6_RPI45 (45)
#define SPI1_MISO_RF7_RPI44 (44)
#define SPI1_MISO_RF8_RP15 (15)
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
#define SPI1_MOSI_RD15_RP5 (5)
#define SPI1_MOSI_RD2_RP23 (23)
#define SPI1_MOSI_RD3_RP22 (22)
#define SPI1_MOSI_RD4_RP25 (25)
#define SPI1_MOSI_RD5_RP20 (20)
#define SPI1_MOSI_RD8_RP2 (2)
#define SPI1_MOSI_RD9_RP4 (4)
#define SPI1_MOSI_RF13_RP31 (31)
#define SPI1_MOSI_RF2_RP30 (30)
#define SPI1_MOSI_RF3_RP16 (16)
#define SPI1_MOSI_RF4_RP10 (10)
#define SPI1_MOSI_RF5_RP17 (17)
#define SPI1_MOSI_RF8_RP15 (15)
#define SPI1_MOSI_RG6_RP21 (21)
#define SPI1_MOSI_RG7_RP26 (26)
#define SPI1_MOSI_RG8_RP19 (19)
#define SPI1_MOSI_RG9_RP27 (27)
#define SPI1_SCK_RA14_RPI36 (36)
#define SPI1_SCK_RA15_RPI35 (35)
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
#define SPI1_SCK_RC1_RPI38 (38)
#define SPI1_SCK_RC14_RPI37 (37)
#define SPI1_SCK_RC2_RPI39 (39)
#define SPI1_SCK_RC3_RPI40 (40)
#define SPI1_SCK_RC4_RPI41 (41)
#define SPI1_SCK_RD0_RP11 (11)
#define SPI1_SCK_RD1_RP24 (24)
#define SPI1_SCK_RD10_RP3 (3)
#define SPI1_SCK_RD11_RP12 (12)
#define SPI1_SCK_RD12_RPI42 (42)
#define SPI1_SCK_RD14_RPI43 (43)
#define SPI1_SCK_RD15_RP5 (5)
#define SPI1_SCK_RD2_RP23 (23)
#define SPI1_SCK_RD3_RP22 (22)
#define SPI1_SCK_RD4_RP25 (25)
#define SPI1_SCK_RD5_RP20 (20)
#define SPI1_SCK_RD8_RP2 (2)
#define SPI1_SCK_RD9_RP4 (4)
#define SPI1_SCK_RE8_RPI33 (33)
#define SPI1_SCK_RE9_RPI34 (34)
#define SPI1_SCK_RF12_RPI32 (32)
#define SPI1_SCK_RF13_RP31 (31)
#define SPI1_SCK_RF2_RP30 (30)
#define SPI1_SCK_RF3_RP16 (16)
#define SPI1_SCK_RF4_RP10 (10)
#define SPI1_SCK_RF5_RP17 (17)
#define SPI1_SCK_RF6_RPI45 (45)
#define SPI1_SCK_RF7_RPI44 (44)
#define SPI1_SCK_RF8_RP15 (15)
#define SPI1_SCK_RG6_RP21 (21)
#define SPI1_SCK_RG7_RP26 (26)
#define SPI1_SCK_RG8_RP19 (19)
#define SPI1_SCK_RG9_RP27 (27)
#define SPI2_MISO_RA14_RPI36 (36)
#define SPI2_MISO_RA15_RPI35 (35)
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
#define SPI2_MISO_RC1_RPI38 (38)
#define SPI2_MISO_RC14_RPI37 (37)
#define SPI2_MISO_RC2_RPI39 (39)
#define SPI2_MISO_RC3_RPI40 (40)
#define SPI2_MISO_RC4_RPI41 (41)
#define SPI2_MISO_RD0_RP11 (11)
#define SPI2_MISO_RD1_RP24 (24)
#define SPI2_MISO_RD10_RP3 (3)
#define SPI2_MISO_RD11_RP12 (12)
#define SPI2_MISO_RD12_RPI42 (42)
#define SPI2_MISO_RD14_RPI43 (43)
#define SPI2_MISO_RD15_RP5 (5)
#define SPI2_MISO_RD2_RP23 (23)
#define SPI2_MISO_RD3_RP22 (22)
#define SPI2_MISO_RD4_RP25 (25)
#define SPI2_MISO_RD5_RP20 (20)
#define SPI2_MISO_RD8_RP2 (2)
#define SPI2_MISO_RD9_RP4 (4)
#define SPI2_MISO_RE8_RPI33 (33)
#define SPI2_MISO_RE9_RPI34 (34)
#define SPI2_MISO_RF12_RPI32 (32)
#define SPI2_MISO_RF13_RP31 (31)
#define SPI2_MISO_RF2_RP30 (30)
#define SPI2_MISO_RF3_RP16 (16)
#define SPI2_MISO_RF4_RP10 (10)
#define SPI2_MISO_RF5_RP17 (17)
#define SPI2_MISO_RF6_RPI45 (45)
#define SPI2_MISO_RF7_RPI44 (44)
#define SPI2_MISO_RF8_RP15 (15)
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
#define SPI2_MOSI_RD15_RP5 (5)
#define SPI2_MOSI_RD2_RP23 (23)
#define SPI2_MOSI_RD3_RP22 (22)
#define SPI2_MOSI_RD4_RP25 (25)
#define SPI2_MOSI_RD5_RP20 (20)
#define SPI2_MOSI_RD8_RP2 (2)
#define SPI2_MOSI_RD9_RP4 (4)
#define SPI2_MOSI_RF13_RP31 (31)
#define SPI2_MOSI_RF2_RP30 (30)
#define SPI2_MOSI_RF3_RP16 (16)
#define SPI2_MOSI_RF4_RP10 (10)
#define SPI2_MOSI_RF5_RP17 (17)
#define SPI2_MOSI_RF8_RP15 (15)
#define SPI2_MOSI_RG6_RP21 (21)
#define SPI2_MOSI_RG7_RP26 (26)
#define SPI2_MOSI_RG8_RP19 (19)
#define SPI2_MOSI_RG9_RP27 (27)
#define SPI2_SCK_RA14_RPI36 (36)
#define SPI2_SCK_RA15_RPI35 (35)
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
#define SPI2_SCK_RC1_RPI38 (38)
#define SPI2_SCK_RC14_RPI37 (37)
#define SPI2_SCK_RC2_RPI39 (39)
#define SPI2_SCK_RC3_RPI40 (40)
#define SPI2_SCK_RC4_RPI41 (41)
#define SPI2_SCK_RD0_RP11 (11)
#define SPI2_SCK_RD1_RP24 (24)
#define SPI2_SCK_RD10_RP3 (3)
#define SPI2_SCK_RD11_RP12 (12)
#define SPI2_SCK_RD12_RPI42 (42)
#define SPI2_SCK_RD14_RPI43 (43)
#define SPI2_SCK_RD15_RP5 (5)
#define SPI2_SCK_RD2_RP23 (23)
#define SPI2_SCK_RD3_RP22 (22)
#define SPI2_SCK_RD4_RP25 (25)
#define SPI2_SCK_RD5_RP20 (20)
#define SPI2_SCK_RD8_RP2 (2)
#define SPI2_SCK_RD9_RP4 (4)
#define SPI2_SCK_RE8_RPI33 (33)
#define SPI2_SCK_RE9_RPI34 (34)
#define SPI2_SCK_RF12_RPI32 (32)
#define SPI2_SCK_RF13_RP31 (31)
#define SPI2_SCK_RF2_RP30 (30)
#define SPI2_SCK_RF3_RP16 (16)
#define SPI2_SCK_RF4_RP10 (10)
#define SPI2_SCK_RF5_RP17 (17)
#define SPI2_SCK_RF6_RPI45 (45)
#define SPI2_SCK_RF7_RPI44 (44)
#define SPI2_SCK_RF8_RP15 (15)
#define SPI2_SCK_RG6_RP21 (21)
#define SPI2_SCK_RG7_RP26 (26)
#define SPI2_SCK_RG8_RP19 (19)
#define SPI2_SCK_RG9_RP27 (27)
#define SPI3_MISO_RA14_RPI36 (36)
#define SPI3_MISO_RA15_RPI35 (35)
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
#define SPI3_MISO_RC1_RPI38 (38)
#define SPI3_MISO_RC14_RPI37 (37)
#define SPI3_MISO_RC2_RPI39 (39)
#define SPI3_MISO_RC3_RPI40 (40)
#define SPI3_MISO_RC4_RPI41 (41)
#define SPI3_MISO_RD0_RP11 (11)
#define SPI3_MISO_RD1_RP24 (24)
#define SPI3_MISO_RD10_RP3 (3)
#define SPI3_MISO_RD11_RP12 (12)
#define SPI3_MISO_RD12_RPI42 (42)
#define SPI3_MISO_RD14_RPI43 (43)
#define SPI3_MISO_RD15_RP5 (5)
#define SPI3_MISO_RD2_RP23 (23)
#define SPI3_MISO_RD3_RP22 (22)
#define SPI3_MISO_RD4_RP25 (25)
#define SPI3_MISO_RD5_RP20 (20)
#define SPI3_MISO_RD8_RP2 (2)
#define SPI3_MISO_RD9_RP4 (4)
#define SPI3_MISO_RE8_RPI33 (33)
#define SPI3_MISO_RE9_RPI34 (34)
#define SPI3_MISO_RF12_RPI32 (32)
#define SPI3_MISO_RF13_RP31 (31)
#define SPI3_MISO_RF2_RP30 (30)
#define SPI3_MISO_RF3_RP16 (16)
#define SPI3_MISO_RF4_RP10 (10)
#define SPI3_MISO_RF5_RP17 (17)
#define SPI3_MISO_RF6_RPI45 (45)
#define SPI3_MISO_RF7_RPI44 (44)
#define SPI3_MISO_RF8_RP15 (15)
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
#define SPI3_MOSI_RD15_RP5 (5)
#define SPI3_MOSI_RD2_RP23 (23)
#define SPI3_MOSI_RD3_RP22 (22)
#define SPI3_MOSI_RD4_RP25 (25)
#define SPI3_MOSI_RD5_RP20 (20)
#define SPI3_MOSI_RD8_RP2 (2)
#define SPI3_MOSI_RD9_RP4 (4)
#define SPI3_MOSI_RF13_RP31 (31)
#define SPI3_MOSI_RF2_RP30 (30)
#define SPI3_MOSI_RF3_RP16 (16)
#define SPI3_MOSI_RF4_RP10 (10)
#define SPI3_MOSI_RF5_RP17 (17)
#define SPI3_MOSI_RF8_RP15 (15)
#define SPI3_MOSI_RG6_RP21 (21)
#define SPI3_MOSI_RG7_RP26 (26)
#define SPI3_MOSI_RG8_RP19 (19)
#define SPI3_MOSI_RG9_RP27 (27)
#define SPI3_SCK_RA14_RPI36 (36)
#define SPI3_SCK_RA15_RPI35 (35)
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
#define SPI3_SCK_RC1_RPI38 (38)
#define SPI3_SCK_RC14_RPI37 (37)
#define SPI3_SCK_RC2_RPI39 (39)
#define SPI3_SCK_RC3_RPI40 (40)
#define SPI3_SCK_RC4_RPI41 (41)
#define SPI3_SCK_RD0_RP11 (11)
#define SPI3_SCK_RD1_RP24 (24)
#define SPI3_SCK_RD10_RP3 (3)
#define SPI3_SCK_RD11_RP12 (12)
#define SPI3_SCK_RD12_RPI42 (42)
#define SPI3_SCK_RD14_RPI43 (43)
#define SPI3_SCK_RD15_RP5 (5)
#define SPI3_SCK_RD2_RP23 (23)
#define SPI3_SCK_RD3_RP22 (22)
#define SPI3_SCK_RD4_RP25 (25)
#define SPI3_SCK_RD5_RP20 (20)
#define SPI3_SCK_RD8_RP2 (2)
#define SPI3_SCK_RD9_RP4 (4)
#define SPI3_SCK_RE8_RPI33 (33)
#define SPI3_SCK_RE9_RPI34 (34)
#define SPI3_SCK_RF12_RPI32 (32)
#define SPI3_SCK_RF13_RP31 (31)
#define SPI3_SCK_RF2_RP30 (30)
#define SPI3_SCK_RF3_RP16 (16)
#define SPI3_SCK_RF4_RP10 (10)
#define SPI3_SCK_RF5_RP17 (17)
#define SPI3_SCK_RF6_RPI45 (45)
#define SPI3_SCK_RF7_RPI44 (44)
#define SPI3_SCK_RF8_RP15 (15)
#define SPI3_SCK_RG6_RP21 (21)
#define SPI3_SCK_RG7_RP26 (26)
#define SPI3_SCK_RG8_RP19 (19)
#define SPI3_SCK_RG9_RP27 (27)

#define SPI_MODULE_1 1
#define SPI_MODULE_2 2
#define SPI_MODULE_3 3
#define SPI_MODULE_COUNT 3

// SPI Register addresses and offsets
#define HAL_LL_SPI1STAT_REG_ADDRESS (0x240)
#define HAL_LL_SPI1CON1_REG_ADDRESS (0x242)
#define HAL_LL_SPI1_CONTROL_REG_ADDRESS HAL_LL_SPI1CON1_REG_ADDRESS
#define HAL_LL_SPI1BUF_REG_ADDRESS (0x248)
#define HAL_LL_SPI2STAT_REG_ADDRESS (0x260)
#define HAL_LL_SPI2CON1_REG_ADDRESS (0x262)
#define HAL_LL_SPI2_CONTROL_REG_ADDRESS HAL_LL_SPI2CON1_REG_ADDRESS
#define HAL_LL_SPI2BUF_REG_ADDRESS (0x268)
#define HAL_LL_SPI3STAT_REG_ADDRESS (0x280)
#define HAL_LL_SPI3CON1_REG_ADDRESS (0x282)
#define HAL_LL_SPI3_CONTROL_REG_ADDRESS HAL_LL_SPI3CON1_REG_ADDRESS
#define HAL_LL_SPI3BUF_REG_ADDRESS (0x288)
// EOF SPI Register addresses and offsets
// EOF SPI

// TIM
#define PWM_CCP1_OC1_RB14_RP14 (14)
#define PWM_CCP1_OC1_RB5_RP18 (18)
#define PWM_CCP1_OC3_RB1_RP1 (1)
#define PWM_CCP1_OC3_RB7_RP7 (7)
#define PWM_CCP1_OC5_RB15_RP29 (29)
#define PWM_CCP1_OC5_RB4_RP28 (28)
#define PWM_CCP1_OC6_RB0_RP0 (0)
#define PWM_CCP1_OC6_RB8_RP8 (8)
#define PWM_CCP1_OC8_RB9_RP9 (9)
#define PWM_CCP1_OC9_RB2_RP13 (13)
#define PWM_CCP1_OC9_RB6_RP6 (6)
#define PWM_CCP2_OC1_RD2_RP23 (23)
#define PWM_CCP2_OC1_RD8_RP2 (2)
#define PWM_CCP2_OC2_RD3_RP22 (22)
#define PWM_CCP2_OC3_RD9_RP4 (4)
#define PWM_CCP2_OC4_RD10_RP3 (3)
#define PWM_CCP2_OC4_RD4_RP25 (25)
#define PWM_CCP2_OC6_RD11_RP12 (12)
#define PWM_CCP2_OC6_RD5_RP20 (20)
#define PWM_CCP2_OC8_RD0_RP11 (11)
#define PWM_CCP2_OC9_RD1_RP24 (24)
#define PWM_CCP2_OC9_RD15_RP5 (5)
#define PWM_CCP3_OC2_RF5_RP17 (17)
#define PWM_CCP3_OC4_RF3_RP16 (16)
#define PWM_CCP3_OC5_RF2_RP30 (30)
#define PWM_CCP3_OC6_RF8_RP15 (15)
#define PWM_CCP3_OC8_RF13_RP31 (31)
#define PWM_CCP3_OC9_RF4_RP10 (10)
#define PWM_CCP4_OC1_RG7_RP26 (26)
#define PWM_CCP4_OC4_RG8_RP19 (19)
#define PWM_CCP4_OC7_RG6_RP21 (21)
#define PWM_CCP4_OC7_RG9_RP27 (27)
#define PWM_CCP5_OC1_RB14_RP14 (14)
#define PWM_CCP5_OC1_RB5_RP18 (18)
#define PWM_CCP5_OC3_RB1_RP1 (1)
#define PWM_CCP5_OC3_RB7_RP7 (7)
#define PWM_CCP5_OC5_RB15_RP29 (29)
#define PWM_CCP5_OC5_RB4_RP28 (28)
#define PWM_CCP5_OC6_RB0_RP0 (0)
#define PWM_CCP5_OC6_RB8_RP8 (8)
#define PWM_CCP5_OC8_RB9_RP9 (9)
#define PWM_CCP5_OC9_RB2_RP13 (13)
#define PWM_CCP5_OC9_RB6_RP6 (6)

#define CCP_MODULE_1 1
#define CCP_MODULE_2 2
#define CCP_MODULE_3 3
#define CCP_MODULE_4 4
#define CCP_MODULE_5 5

#define CCP_MODULE_COUNT 5
#define TIM_MODULE_COUNT CCP_MODULE_COUNT

// TIM Register addresses and offsets
#define HAL_LL_TMR1_REG_ADDRESS (0x100)
#define HAL_LL_PR1_REG_ADDRESS (0x102)
#define HAL_LL_T1CON_REG_ADDRESS (0x104)
#define HAL_LL_TMR2_REG_ADDRESS (0x106)
#define HAL_LL_TMR3_REG_ADDRESS (0x10A)
#define HAL_LL_PR2_REG_ADDRESS (0x10C)
#define HAL_LL_PR3_REG_ADDRESS (0x10E)
#define HAL_LL_T2CON_REG_ADDRESS (0x110)
#define HAL_LL_T3CON_REG_ADDRESS (0x112)
#define HAL_LL_TMR4_REG_ADDRESS (0x114)
#define HAL_LL_TMR5_REG_ADDRESS (0x118)
#define HAL_LL_PR4_REG_ADDRESS (0x11A)
#define HAL_LL_PR5_REG_ADDRESS (0x11C)
#define HAL_LL_T4CON_REG_ADDRESS (0x11E)
#define HAL_LL_T5CON_REG_ADDRESS (0x120)
#define HAL_LL_OC1CON1_REG_ADDRESS (0x190)
#define HAL_LL_OC1CON2_REG_ADDRESS (0x192)
#define HAL_LL_OC1RS_REG_ADDRESS (0x194)
#define HAL_LL_OC1R_REG_ADDRESS (0x196)
#define HAL_LL_OC2CON1_REG_ADDRESS (0x19A)
#define HAL_LL_OC2CON2_REG_ADDRESS (0x19C)
#define HAL_LL_OC2RS_REG_ADDRESS (0x19E)
#define HAL_LL_OC2R_REG_ADDRESS (0x1A0)
#define HAL_LL_OC2TMR_REG_ADDRESS (0x1A2)
#define HAL_LL_OC3CON1_REG_ADDRESS (0x1A4)
#define HAL_LL_OC3CON2_REG_ADDRESS (0x1A6)
#define HAL_LL_OC3RS_REG_ADDRESS (0x1A8)
#define HAL_LL_OC3R_REG_ADDRESS (0x1AA)
#define HAL_LL_OC3TMR_REG_ADDRESS (0x1AC)
#define HAL_LL_OC4CON1_REG_ADDRESS (0x1AE)
#define HAL_LL_OC4CON2_REG_ADDRESS (0x1B0)
#define HAL_LL_OC4RS_REG_ADDRESS (0x1B2)
#define HAL_LL_OC4R_REG_ADDRESS (0x1B4)
#define HAL_LL_OC4TMR_REG_ADDRESS (0x1B6)
#define HAL_LL_OC5CON1_REG_ADDRESS (0x1B8)
#define HAL_LL_OC5CON2_REG_ADDRESS (0x1BA)
#define HAL_LL_OC5RS_REG_ADDRESS (0x1BC)
#define HAL_LL_OC5R_REG_ADDRESS (0x1BE)
#define HAL_LL_OC5TMR_REG_ADDRESS (0x1C0)
#define HAL_LL_OC6CON1_REG_ADDRESS (0x1C2)
#define HAL_LL_OC6CON2_REG_ADDRESS (0x1C4)
#define HAL_LL_OC6RS_REG_ADDRESS (0x1C6)
#define HAL_LL_OC6R_REG_ADDRESS (0x1C8)
#define HAL_LL_OC6TMR_REG_ADDRESS (0x1CA)
#define HAL_LL_OC7CON1_REG_ADDRESS (0x1CC)
#define HAL_LL_OC7CON2_REG_ADDRESS (0x1CE)
#define HAL_LL_OC7RS_REG_ADDRESS (0x1D0)
#define HAL_LL_OC7R_REG_ADDRESS (0x1D2)
#define HAL_LL_OC7TMR_REG_ADDRESS (0x1D4)
#define HAL_LL_OC8CON1_REG_ADDRESS (0x1D6)
#define HAL_LL_OC8CON2_REG_ADDRESS (0x1D8)
#define HAL_LL_OC8RS_REG_ADDRESS (0x1DA)
#define HAL_LL_OC8R_REG_ADDRESS (0x1DC)
#define HAL_LL_OC8TMR_REG_ADDRESS (0x1DE)
#define HAL_LL_OC9CON1_REG_ADDRESS (0x1E0)
#define HAL_LL_OC9CON2_REG_ADDRESS (0x1E2)
#define HAL_LL_OC9RS_REG_ADDRESS (0x1E4)
#define HAL_LL_OC9R_REG_ADDRESS (0x1E6)
#define HAL_LL_OC9TMR_REG_ADDRESS (0x1E8)
// EOF TIM Register addresses and offsets
// EOF TIM

// GPIO
#define __RA0_CN
#define __RA1_CN
#define __RA10_CN
#define __RA14_CN
#define __RA15_CN
#define __RA2_CN
#define __RA3_CN
#define __RA4_CN
#define __RA5_CN
#define __RA6_CN
#define __RA7_CN
#define __RA9_CN
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
#define __RC1_CN
#define __RC12_CN
#define __RC13_CN
#define __RC14_CN
#define __RC15_CN
#define __RC2_CN
#define __RC3_CN
#define __RC4_CN
#define __RD0_CN
#define __RD1_CN
#define __RD10_CN
#define __RD11_CN
#define __RD12_CN
#define __RD13_CN
#define __RD14_CN
#define __RD15_CN
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
#define __RE8_CN
#define __RE9_CN
#define __RF0_CN
#define __RF1_CN
#define __RF12_CN
#define __RF13_CN
#define __RF2_CN
#define __RF3_CN
#define __RF4_CN
#define __RF5_CN
#define __RF6_CN
#define __RF7_CN
#define __RF8_CN
#define __RG0_CN
#define __RG1_CN
#define __RG12_CN
#define __RG13_CN
#define __RG14_CN
#define __RG15_CN
#define __RG2_CN
#define __RG3_CN
#define __RG6_CN
#define __RG7_CN
#define __RG8_CN
#define __RG9_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_D_CN
#define __PORT_E_CN
#define __PORT_F_CN
#define __PORT_G_CN

#define PORT_SIZE  (16)
#define PORT_COUNT (7)

#define TRISA_REG_ADDRESS (0x2C0)
#define PORTA_REG_ADDRESS (0x2C2)
#define LATA_REG_ADDRESS (0x2C4)
#define TRISB_REG_ADDRESS (0x2C8)
#define PORTB_REG_ADDRESS (0x2CA)
#define LATB_REG_ADDRESS (0x2CC)
#define TRISC_REG_ADDRESS (0x2D0)
#define PORTC_REG_ADDRESS (0x2D2)
#define LATC_REG_ADDRESS (0x2D4)
#define TRISD_REG_ADDRESS (0x2D8)
#define PORTD_REG_ADDRESS (0x2DA)
#define LATD_REG_ADDRESS (0x2DC)
#define TRISE_REG_ADDRESS (0x2E0)
#define PORTE_REG_ADDRESS (0x2E2)
#define LATE_REG_ADDRESS (0x2E4)
#define TRISF_REG_ADDRESS (0x2E8)
#define PORTF_REG_ADDRESS (0x2EA)
#define LATF_REG_ADDRESS (0x2EC)
#define TRISG_REG_ADDRESS (0x2F0)
#define PORTG_REG_ADDRESS (0x2F2)
#define LATG_REG_ADDRESS (0x2F4)
// EOF GPIO

// PPS
#define HAL_LL_OSCCON_REG_ADDRESS 0x742
#define HAL_LL_UART_PPS_ENABLED true
#define HAL_LL_SPI_PPS_ENABLED true
#define HAL_LL_PWM_PPS_ENABLED true
// PPS Register addresses and offsets
#define HAL_LL_RPINR0_REG_ADDRESS (0x680)
#define HAL_LL_RPINR1_REG_ADDRESS (0x682)
#define HAL_LL_RPINR2_REG_ADDRESS (0x684)
#define HAL_LL_RPINR3_REG_ADDRESS (0x686)
#define HAL_LL_RPINR4_REG_ADDRESS (0x688)
#define HAL_LL_RPINR7_REG_ADDRESS (0x68E)
#define HAL_LL_RPINR8_REG_ADDRESS (0x690)
#define HAL_LL_RPINR9_REG_ADDRESS (0x692)
#define HAL_LL_RPINR10_REG_ADDRESS (0x694)
#define HAL_LL_RPINR11_REG_ADDRESS (0x696)
#define HAL_LL_RPINR15_REG_ADDRESS (0x69E)
#define HAL_LL_RPINR17_REG_ADDRESS (0x6A2)
#define HAL_LL_RPINR18_REG_ADDRESS (0x6A4)
#define HAL_LL_RPINR19_REG_ADDRESS (0x6A6)
#define HAL_LL_RPINR20_REG_ADDRESS (0x6A8)
#define HAL_LL_RPINR21_REG_ADDRESS (0x6AA)
#define HAL_LL_RPINR22_REG_ADDRESS (0x6AC)
#define HAL_LL_RPINR23_REG_ADDRESS (0x6AE)
#define HAL_LL_RPINR27_REG_ADDRESS (0x6B6)
#define HAL_LL_RPINR28_REG_ADDRESS (0x6B8)
#define HAL_LL_RPINR29_REG_ADDRESS (0x6BA)
#define HAL_LL_RPOR0_REG_ADDRESS (0x6C0)
#define HAL_LL_RPOR1_REG_ADDRESS (0x6C2)
#define HAL_LL_RPOR2_REG_ADDRESS (0x6C4)
#define HAL_LL_RPOR3_REG_ADDRESS (0x6C6)
#define HAL_LL_RPOR4_REG_ADDRESS (0x6C8)
#define HAL_LL_RPOR5_REG_ADDRESS (0x6CA)
#define HAL_LL_RPOR6_REG_ADDRESS (0x6CC)
#define HAL_LL_RPOR7_REG_ADDRESS (0x6CE)
#define HAL_LL_RPOR8_REG_ADDRESS (0x6D0)
#define HAL_LL_RPOR9_REG_ADDRESS (0x6D2)
#define HAL_LL_RPOR10_REG_ADDRESS (0x6D4)
#define HAL_LL_RPOR11_REG_ADDRESS (0x6D6)
#define HAL_LL_RPOR12_REG_ADDRESS (0x6D8)
#define HAL_LL_RPOR13_REG_ADDRESS (0x6DA)
#define HAL_LL_RPOR14_REG_ADDRESS (0x6DC)
#define HAL_LL_RPOR15_REG_ADDRESS (0x6DE)
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
// EOF IVT

#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END
