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
 * @brief MCU specific pin and module definitions for PIC32MX130F128H.
 */

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

#include "mcu_reg_addresses.h"
#include "can_definitions.h"

//DMA
#define DMA_NUM_OF_MODULES 1
#define DMA_NUM_OF_STREAMS 4
#define DMA_NUM_OF_STREAMS_FAMILY 4
#define DMA_NUM_OF_CHANNELS 255
#define DMA_NUM_OF_CHANNELS_FAMILY 255
//EOF DMA

//ADC
#define HAL_LL_RB0_AN0 0
#define HAL_LL_RB1_AN1 1
#define HAL_LL_RB10_AN10 10
#define HAL_LL_RB11_AN11 11
#define HAL_LL_RB12_AN12 12
#define HAL_LL_RB13_AN13 13
#define HAL_LL_RB14_AN14 14
#define HAL_LL_RB15_AN15 15
#define HAL_LL_RB2_AN2 2
#define HAL_LL_RB3_AN3 3
#define HAL_LL_RB4_AN4 4
#define HAL_LL_RB5_AN5 5
#define HAL_LL_RB6_AN6 6
#define HAL_LL_RB7_AN7 7
#define HAL_LL_RB8_AN8 8
#define HAL_LL_RB9_AN9 9
#define HAL_LL_RD1_AN24 24
#define HAL_LL_RD2_AN25 25
#define HAL_LL_RD3_AN26 26
#define HAL_LL_RE2_AN20 20
#define HAL_LL_RE4_AN21 21
#define HAL_LL_RE5_AN22 22
#define HAL_LL_RE6_AN23 23
#define HAL_LL_RE7_AN27 27
#define HAL_LL_RG6_AN16 16
#define HAL_LL_RG7_AN17 17
#define HAL_LL_RG8_AN18 18
#define HAL_LL_RG9_AN19 19

#define ADC_MODULE 1
#define ADC_MODULE_COUNT 1
#define HAL_LL_AN_COUNT 28

#define HAL_LL_ANSELG_ADDRESS 0xBF886600UL
#define HAL_LL_ANSELF_ADDRESS 0xBF886500UL
#define HAL_LL_ANSELE_ADDRESS 0xBF886400UL
#define HAL_LL_ANSELD_ADDRESS 0xBF886300UL
#define HAL_LL_ANSELC_ADDRESS 0xBF886200UL
#define HAL_LL_ANSELB_ADDRESS 0xBF886100UL
#define HAL_LL_ADC1BUFF_ADDRESS 0xBF809160UL
#define HAL_LL_ADC1BUFE_ADDRESS 0xBF809150UL
#define HAL_LL_ADC1BUFD_ADDRESS 0xBF809140UL
#define HAL_LL_ADC1BUFC_ADDRESS 0xBF809130UL
#define HAL_LL_ADC1BUFB_ADDRESS 0xBF809120UL
#define HAL_LL_ADC1BUFA_ADDRESS 0xBF809110UL
#define HAL_LL_ADC1BUF9_ADDRESS 0xBF809100UL
#define HAL_LL_ADC1BUF8_ADDRESS 0xBF8090F0UL
#define HAL_LL_ADC1BUF7_ADDRESS 0xBF8090E0UL
#define HAL_LL_ADC1BUF6_ADDRESS 0xBF8090D0UL
#define HAL_LL_ADC1BUF5_ADDRESS 0xBF8090C0UL
#define HAL_LL_ADC1BUF4_ADDRESS 0xBF8090B0UL
#define HAL_LL_ADC1BUF3_ADDRESS 0xBF8090A0UL
#define HAL_LL_ADC1BUF2_ADDRESS 0xBF809090UL
#define HAL_LL_ADC1BUF1_ADDRESS 0xBF809080UL
#define HAL_LL_ADC1BUF0_ADDRESS 0xBF809070UL
#define HAL_LL_AD1CSSL2_ADDRESS 0xBF809060UL
#define HAL_LL_AD1CSSL_ADDRESS 0xBF809050UL
#define HAL_LL_AD1CON3_ADDRESS 0xBF809020UL
#define HAL_LL_AD1CON2_ADDRESS 0xBF809010UL
#define HAL_LL_AD1CON1_ADDRESS 0xBF809000UL
#define HAL_LL_AD1CHS_ADDRESS 0xBF809040UL

#define HAL_LL_RB0_AN0_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB1_AN1_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB10_AN10_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB11_AN11_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB12_AN12_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB13_AN13_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB14_AN14_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB15_AN15_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB2_AN2_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB3_AN3_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB4_AN4_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB5_AN5_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB6_AN6_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB7_AN7_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB8_AN8_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB9_AN9_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RD1_AN24_ADDRESS HAL_LL_ANSELD_ADDRESS
#define HAL_LL_RD2_AN25_ADDRESS HAL_LL_ANSELD_ADDRESS
#define HAL_LL_RD3_AN26_ADDRESS HAL_LL_ANSELD_ADDRESS
#define HAL_LL_RE2_AN20_ADDRESS HAL_LL_ANSELE_ADDRESS
#define HAL_LL_RE4_AN21_ADDRESS HAL_LL_ANSELE_ADDRESS
#define HAL_LL_RE5_AN22_ADDRESS HAL_LL_ANSELE_ADDRESS
#define HAL_LL_RE6_AN23_ADDRESS HAL_LL_ANSELE_ADDRESS
#define HAL_LL_RE7_AN27_ADDRESS HAL_LL_ANSELE_ADDRESS
#define HAL_LL_RG6_AN16_ADDRESS HAL_LL_ANSELG_ADDRESS
#define HAL_LL_RG7_AN17_ADDRESS HAL_LL_ANSELG_ADDRESS
#define HAL_LL_RG8_AN18_ADDRESS HAL_LL_ANSELG_ADDRESS
#define HAL_LL_RG9_AN19_ADDRESS HAL_LL_ANSELG_ADDRESS
//EOF ADC

//I2C
#define I2C1_SCL_RG2
#define I2C1_SDA_RG3
#define I2C2_SCL_RF5
#define I2C2_SDA_RF4

#define I2C_MODULE_1 1
#define I2C_MODULE_2 2

#define I2C_MODULE_COUNT 2

#define HAL_LL_I2C_PPS_ENABLED false
//EOF I2C

//UART
#define UART1_RX_RD2
#define UART1_RX_RG8
#define UART1_RX_RF4
#define UART1_RX_RD10
#define UART1_RX_RF1
#define UART1_RX_RB9
#define UART1_RX_RB10
#define UART1_RX_RC14
#define UART1_RX_RB5

#define UART2_RX_RD2
#define UART2_RX_RG8
#define UART2_RX_RF4
#define UART2_RX_RD10
#define UART2_RX_RF1
#define UART2_RX_RB9
#define UART2_RX_RB10
#define UART2_RX_RC14
#define UART2_RX_RB5

#define UART3_RX_RD3
#define UART3_RX_RG7
#define UART3_RX_RF5
#define UART3_RX_RD11
#define UART3_RX_RF0
#define UART3_RX_RB1
#define UART3_RX_RE5
#define UART3_RX_RC13
#define UART3_RX_RB3

#define UART4_RX_RD1
#define UART4_RX_RG9
#define UART4_RX_RB14
#define UART4_RX_RD0
#define UART4_RX_RB6
#define UART4_RX_RD5
#define UART4_RX_RB2
#define UART4_RX_RF3

//Output
#define UART1_TX_RD3
#define UART1_TX_RG7
#define UART1_TX_RF5
#define UART1_TX_RD11
#define UART1_TX_RF0
#define UART1_TX_RB1
#define UART1_TX_RE5
#define UART1_TX_RC13
#define UART1_TX_RB3
#define UART1_TX_RF3

#define UART2_TX_RD3
#define UART2_TX_RG7
#define UART2_TX_RF5
#define UART2_TX_RD11
#define UART2_TX_RF0
#define UART2_TX_RB1
#define UART2_TX_RE5
#define UART2_TX_RC13
#define UART2_TX_RB3
#define UART2_TX_RF3

#define UART3_TX_RD2
#define UART3_TX_RG8
#define UART3_TX_RF4
#define UART3_TX_RD10
#define UART3_TX_RF1
#define UART3_TX_RB9
#define UART3_TX_RB10
#define UART3_TX_RC14
#define UART3_TX_RB5

#define UART4_TX_RD9
#define UART4_TX_RG6
#define UART4_TX_RB8
#define UART4_TX_RB15
#define UART4_TX_RD4
#define UART4_TX_RB0
#define UART4_TX_RE3
#define UART4_TX_RB7

#define UART_MODULE_1 1
#define UART_MODULE_2 2
#define UART_MODULE_3 3
#define UART_MODULE_4 4

#define UART_MODULE_COUNT 4

#define HAL_LL_UART_PPS_ENABLED true
//EOF UART

//SPI
#define SPI1_SCK_RF6
#define SPI2_SCK_RG6
#define SPI3_SCK_RB14

#define SPI1_MISO_RD3
#define SPI1_MISO_RG7
#define SPI1_MISO_RF5
#define SPI1_MISO_RD11
#define SPI1_MISO_RF0
#define SPI1_MISO_RB1
#define SPI1_MISO_RE5
#define SPI1_MISO_RC13
#define SPI1_MISO_RB3

#define SPI2_MISO_RD3
#define SPI2_MISO_RG7
#define SPI2_MISO_RF5
#define SPI2_MISO_RD11
#define SPI2_MISO_RF0
#define SPI2_MISO_RB1
#define SPI2_MISO_RE5
#define SPI2_MISO_RC13
#define SPI2_MISO_RB3

#define SPI3_MISO_RD2
#define SPI3_MISO_RG8
#define SPI3_MISO_RF4
#define SPI3_MISO_RD10
#define SPI3_MISO_RF1
#define SPI3_MISO_RB9
#define SPI3_MISO_RB10
#define SPI3_MISO_RC14
#define SPI3_MISO_RB5

//Output
#define SPI1_MOSI_RD3
#define SPI1_MOSI_RG7
#define SPI1_MOSI_RF5
#define SPI1_MOSI_RD11
#define SPI1_MOSI_RF0
#define SPI1_MOSI_RB1
#define SPI1_MOSI_RE5
#define SPI1_MOSI_RC13
#define SPI1_MOSI_RB3
#define SPI1_MOSI_RF3

#define SPI1_MOSI_RD9
#define SPI1_MOSI_RG6
#define SPI1_MOSI_RB8
#define SPI1_MOSI_RB15
#define SPI1_MOSI_RD4
#define SPI1_MOSI_RB0
#define SPI1_MOSI_RE3
#define SPI1_MOSI_RB7

#define SPI1_MOSI_RD1
#define SPI1_MOSI_RG9
#define SPI1_MOSI_RB14
#define SPI1_MOSI_RD0
#define SPI1_MOSI_RD8
#define SPI1_MOSI_RB6
#define SPI1_MOSI_RD5

#define SPI2_MOSI_RD3
#define SPI2_MOSI_RG7
#define SPI2_MOSI_RF5
#define SPI2_MOSI_RD11
#define SPI2_MOSI_RF0
#define SPI2_MOSI_RB1
#define SPI2_MOSI_RE5
#define SPI2_MOSI_RC13
#define SPI2_MOSI_RB3
#define SPI2_MOSI_RF3

#define SPI2_MOSI_RD2
#define SPI2_MOSI_RG8
#define SPI2_MOSI_RF4
#define SPI2_MOSI_RD10
#define SPI2_MOSI_RF1
#define SPI2_MOSI_RB9
#define SPI2_MOSI_RB10
#define SPI2_MOSI_RC14
#define SPI2_MOSI_RB5

#define SPI3_MOSI_RD2
#define SPI3_MOSI_RG8
#define SPI3_MOSI_RF4
#define SPI3_MOSI_RD10
#define SPI3_MOSI_RF1
#define SPI3_MOSI_RB9
#define SPI3_MOSI_RB10
#define SPI3_MOSI_RC14
#define SPI3_MOSI_RB5

#define SPI3_MOSI_RD3
#define SPI3_MOSI_RG7
#define SPI3_MOSI_RF5
#define SPI3_MOSI_RD11
#define SPI3_MOSI_RF0
#define SPI3_MOSI_RB1
#define SPI3_MOSI_RE5
#define SPI3_MOSI_RC13
#define SPI3_MOSI_RB3
#define SPI3_MOSI_RF3

#define SPI_MODULE_1 1
#define SPI_MODULE_2 2
#define SPI_MODULE_3 3

#define SPI_MODULE_COUNT 3

#define HAL_LL_SPI_PPS_ENABLED true
//EOF SPI

//PWM
#define PWM1_OC_RD1
#define PWM1_OC_RG9
#define PWM1_OC_RB14
#define PWM1_OC_RD0
#define PWM1_OC_RD8
#define PWM1_OC_RB6
#define PWM1_OC_RD5

#define PWM2_OC_RD1
#define PWM2_OC_RG9
#define PWM2_OC_RB14
#define PWM2_OC_RD0
#define PWM2_OC_RD8
#define PWM2_OC_RB6
#define PWM2_OC_RD5

#define PWM3_OC_RD2
#define PWM3_OC_RG8
#define PWM3_OC_RF4
#define PWM3_OC_RD10
#define PWM3_OC_RF1
#define PWM3_OC_RB9
#define PWM3_OC_RB10
#define PWM3_OC_RC14
#define PWM3_OC_RB5

#define PWM4_OC_RD3
#define PWM4_OC_RG7
#define PWM4_OC_RF5
#define PWM4_OC_RD11
#define PWM4_OC_RF0
#define PWM4_OC_RB1
#define PWM4_OC_RE5
#define PWM4_OC_RC13
#define PWM4_OC_RB3
#define PWM4_OC_RF3

#define PWM5_OC_RD9
#define PWM5_OC_RG6
#define PWM5_OC_RB8
#define PWM5_OC_RB15
#define PWM5_OC_RD4
#define PWM5_OC_RB0
#define PWM5_OC_RE3
#define PWM5_OC_RB7

#define OCR_MODULE_1 1
#define OCR_MODULE_2 2
#define OCR_MODULE_3 3
#define OCR_MODULE_4 4
#define OCR_MODULE_5 5

#define OCR_MODULE_COUNT 5

#define TIM_MODULE_COUNT OCR_MODULE_COUNT

#define HAL_LL_TIM_PPS_ENABLED true
//EOF PWM

//IO
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
#define __RF2_CN
#define __RF3_CN
#define __RF4_CN
#define __RF5_CN
#define __RF6_CN
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
#define PORT_COUNT (6)
#define PORT_SIZE (16)
//EOF IO

// GPIO Register addresses and offsets
#define LATB_BASE_ADDRESS 0xBF886130UL
#define LATC_BASE_ADDRESS 0xBF886230UL
#define LATD_BASE_ADDRESS 0xBF886330UL
#define LATE_BASE_ADDRESS 0xBF886430UL
#define LATF_BASE_ADDRESS 0xBF886530UL
#define LATG_BASE_ADDRESS 0xBF886630UL
#define PORTB_BASE_ADDRESS 0xBF886120UL
#define PORTC_BASE_ADDRESS 0xBF886220UL
#define PORTD_BASE_ADDRESS 0xBF886320UL
#define PORTE_BASE_ADDRESS 0xBF886420UL
#define PORTF_BASE_ADDRESS 0xBF886520UL
#define PORTG_BASE_ADDRESS 0xBF886620UL
#define TRISB_BASE_ADDRESS 0xBF886110UL
#define TRISC_BASE_ADDRESS 0xBF886210UL
#define TRISD_BASE_ADDRESS 0xBF886310UL
#define TRISE_BASE_ADDRESS 0xBF886410UL
#define TRISF_BASE_ADDRESS 0xBF886510UL
#define TRISG_BASE_ADDRESS 0xBF886610UL
// EOF GPIO Register addresses and offsets

// PMD Register addresses
#define HAL_LL_I2C1MD_ENABLE_BIT 16
#define HAL_LL_I2C2MD_ENABLE_BIT 17
#define HAL_LL_OC1MD_ENABLE_BIT 16
#define HAL_LL_OC2MD_ENABLE_BIT 17
#define HAL_LL_OC3MD_ENABLE_BIT 18
#define HAL_LL_OC4MD_ENABLE_BIT 19
#define HAL_LL_OC5MD_ENABLE_BIT 20
#define HAL_LL_PMD1_ADDRESS 0xBF80F240UL
#define HAL_LL_PMD2_ADDRESS 0xBF80F250UL
#define HAL_LL_PMD3_ADDRESS 0xBF80F260UL
#define HAL_LL_PMD4_ADDRESS 0xBF80F270UL
#define HAL_LL_PMD5_ADDRESS 0xBF80F280UL
#define HAL_LL_PMD6_ADDRESS 0xBF80F290UL
#define HAL_LL_SPI1MD_ENABLE_BIT 8
#define HAL_LL_SPI2MD_ENABLE_BIT 9
#define HAL_LL_SPI3MD_ENABLE_BIT 10
#define HAL_LL_U1MD_ENABLE_BIT 0
#define HAL_LL_U2MD_ENABLE_BIT 1
#define HAL_LL_U3MD_ENABLE_BIT 2
#define HAL_LL_U4MD_ENABLE_BIT 3
// EOF PMD Register addresses

// I2C and SPI Register addresses
#define HAL_LL_I2C1ADD_ADDRESS 0xBF805020UL
#define HAL_LL_I2C1BRG_ADDRESS 0xBF805040UL
#define HAL_LL_I2C1CON_ADDRESS 0xBF805000UL
#define HAL_LL_I2C1MSK_ADDRESS 0xBF805030UL
#define HAL_LL_I2C1RCV_ADDRESS 0xBF805060UL
#define HAL_LL_I2C1STAT_ADDRESS 0xBF805010UL
#define HAL_LL_I2C1TRN_ADDRESS 0xBF805050UL
#define HAL_LL_I2C2ADD_ADDRESS 0xBF805120UL
#define HAL_LL_I2C2BRG_ADDRESS 0xBF805140UL
#define HAL_LL_I2C2CON_ADDRESS 0xBF805100UL
#define HAL_LL_I2C2MSK_ADDRESS 0xBF805130UL
#define HAL_LL_I2C2RCV_ADDRESS 0xBF805160UL
#define HAL_LL_I2C2STAT_ADDRESS 0xBF805110UL
#define HAL_LL_I2C2TRN_ADDRESS 0xBF805150UL
#define HAL_LL_SPI1BRG_ADDRESS 0xBF805830UL
#define HAL_LL_SPI1BUF_ADDRESS 0xBF805820UL
#define HAL_LL_SPI1CON_ADDRESS 0xBF805800UL
#define HAL_LL_SPI1CON2_ADDRESS 0xBF805840UL
#define HAL_LL_SPI1STAT_ADDRESS 0xBF805810UL
#define HAL_LL_SPI2BRG_ADDRESS 0xBF805A30UL
#define HAL_LL_SPI2BUF_ADDRESS 0xBF805A20UL
#define HAL_LL_SPI2CON_ADDRESS 0xBF805A00UL
#define HAL_LL_SPI2CON2_ADDRESS 0xBF805A40UL
#define HAL_LL_SPI2STAT_ADDRESS 0xBF805A10UL
#define HAL_LL_SPI3BRG_ADDRESS 0xBF805C30UL
#define HAL_LL_SPI3BUF_ADDRESS 0xBF805C20UL
#define HAL_LL_SPI3CON_ADDRESS 0xBF805C00UL
#define HAL_LL_SPI3CON2_ADDRESS 0xBF805C40UL
#define HAL_LL_SPI3STAT_ADDRESS 0xBF805C10UL
// EOF I2C and SPI Register addresses

// TMR Register addresses
#define HAL_LL_CM1CON_ADDRESS 0xBF80A000UL
#define HAL_LL_CM2CON_ADDRESS 0xBF80A010UL
#define HAL_LL_CM3CON_ADDRESS 0xBF80A020UL
#define HAL_LL_CMSTAT_ADDRESS 0xBF80A060UL
#define HAL_LL_OC1CON_ADDRESS 0xBF803000UL
#define HAL_LL_OC1R_ADDRESS 0xBF803010UL
#define HAL_LL_OC1RS_ADDRESS 0xBF803020UL
#define HAL_LL_OC2CON_ADDRESS 0xBF803200UL
#define HAL_LL_OC2R_ADDRESS 0xBF803210UL
#define HAL_LL_OC2RS_ADDRESS 0xBF803220UL
#define HAL_LL_OC3CON_ADDRESS 0xBF803400UL
#define HAL_LL_OC3R_ADDRESS 0xBF803410UL
#define HAL_LL_OC3RS_ADDRESS 0xBF803420UL
#define HAL_LL_OC4CON_ADDRESS 0xBF803600UL
#define HAL_LL_OC4R_ADDRESS 0xBF803610UL
#define HAL_LL_OC4RS_ADDRESS 0xBF803620UL
#define HAL_LL_OC5CON_ADDRESS 0xBF803800UL
#define HAL_LL_OC5R_ADDRESS 0xBF803810UL
#define HAL_LL_OC5RS_ADDRESS 0xBF803820UL
#define HAL_LL_PR1_ADDRESS 0xBF800620UL
#define HAL_LL_PR2_ADDRESS 0xBF800820UL
#define HAL_LL_PR3_ADDRESS 0xBF800A20UL
#define HAL_LL_PR4_ADDRESS 0xBF800C20UL
#define HAL_LL_PR5_ADDRESS 0xBF800E20UL
#define HAL_LL_T1CON_ADDRESS 0xBF800600UL
#define HAL_LL_T2CON_ADDRESS 0xBF800800UL
#define HAL_LL_T3CON_ADDRESS 0xBF800A00UL
#define HAL_LL_T4CON_ADDRESS 0xBF800C00UL
#define HAL_LL_T5CON_ADDRESS 0xBF800E00UL
#define HAL_LL_TMR1_ADDRESS 0xBF800610UL
#define HAL_LL_TMR2_ADDRESS 0xBF800810UL
#define HAL_LL_TMR3_ADDRESS 0xBF800A10UL
#define HAL_LL_TMR4_ADDRESS 0xBF800C10UL
#define HAL_LL_TMR5_ADDRESS 0xBF800E10UL
// EOF TMR Register addresses

// UART Register addresses
#define HAL_LL_U1BRG_ADDRESS 0xBF806040UL
#define HAL_LL_U1MODE_ADDRESS 0xBF806000UL
#define HAL_LL_U1RXREG_ADDRESS 0xBF806030UL
#define HAL_LL_U1STA_ADDRESS 0xBF806010UL
#define HAL_LL_U1TXREG_ADDRESS 0xBF806020UL
#define HAL_LL_U2BRG_ADDRESS 0xBF806240UL
#define HAL_LL_U2MODE_ADDRESS 0xBF806200UL
#define HAL_LL_U2RXREG_ADDRESS 0xBF806230UL
#define HAL_LL_U2STA_ADDRESS 0xBF806210UL
#define HAL_LL_U2TXREG_ADDRESS 0xBF806220UL
#define HAL_LL_U3BRG_ADDRESS 0xBF806440UL
#define HAL_LL_U3MODE_ADDRESS 0xBF806400UL
#define HAL_LL_U3RXREG_ADDRESS 0xBF806430UL
#define HAL_LL_U3STA_ADDRESS 0xBF806410UL
#define HAL_LL_U3TXREG_ADDRESS 0xBF806420UL
#define HAL_LL_U4BRG_ADDRESS 0xBF806640UL
#define HAL_LL_U4MODE_ADDRESS 0xBF806600UL
#define HAL_LL_U4RXREG_ADDRESS 0xBF806630UL
#define HAL_LL_U4STA_ADDRESS 0xBF806610UL
#define HAL_LL_U4TXREG_ADDRESS 0xBF806620UL
// EOF UART Register addresses

// IVT Register addresses
#define HAL_LL_UART_1 31
#define HAL_LL_UART_2 36
#define HAL_LL_UART_3 38
#define HAL_LL_UART_4 39
#define HAL_LL_UART1_ERR 38
#define HAL_LL_UART1_RX 39
#define HAL_LL_UART1_TX 40
#define HAL_LL_UART2_ERR 56
#define HAL_LL_UART2_RX 57
#define HAL_LL_UART2_TX 58
#define HAL_LL_UART3_ERR 62
#define HAL_LL_UART3_RX 63
#define HAL_LL_UART3_TX 64
#define HAL_LL_UART4_ERR 65
#define HAL_LL_UART4_RX 66
#define HAL_LL_UART4_TX 67
#define HAL_LL_IEC0_ADDRESS 0xBF881060UL
#define HAL_LL_IEC1_ADDRESS 0xBF881070UL
#define HAL_LL_IEC2_ADDRESS 0xBF881080UL
#define HAL_LL_IFS0_ADDRESS 0xBF881030UL
#define HAL_LL_IFS1_ADDRESS 0xBF881040UL
#define HAL_LL_IFS2_ADDRESS 0xBF881050UL
#define HAL_LL_INTSTAT_ADDRESS 0xBF881010UL
#define HAL_LL_IPC0_ADDRESS 0xBF881090UL
#define HAL_LL_IPC1_ADDRESS 0xBF8810A0UL
#define HAL_LL_IPC10_ADDRESS 0xBF881130UL
#define HAL_LL_IPC11_ADDRESS 0xBF881140UL
#define HAL_LL_IPC12_ADDRESS 0xBF881150UL
#define HAL_LL_IPC2_ADDRESS 0xBF8810B0UL
#define HAL_LL_IPC3_ADDRESS 0xBF8810C0UL
#define HAL_LL_IPC4_ADDRESS 0xBF8810D0UL
#define HAL_LL_IPC5_ADDRESS 0xBF8810E0UL
#define HAL_LL_IPC6_ADDRESS 0xBF8810F0UL
#define HAL_LL_IPC7_ADDRESS 0xBF881100UL
#define HAL_LL_IPC8_ADDRESS 0xBF881110UL
#define HAL_LL_IPC9_ADDRESS 0xBF881120UL
#define HAL_LL_IPTMR_ADDRESS 0xBF881020UL
// EOF IVT Register addresses

// PPS Register addresses
#define HAL_LL_RPA0R_ADDRESS 0xBF80FB00UL
#define HAL_LL_RPA10R_ADDRESS 0xBF80FB28UL
#define HAL_LL_RPA11R_ADDRESS 0xBF80FB2CUL
#define HAL_LL_RPA12R_ADDRESS 0xBF80FB30UL
#define HAL_LL_RPA13R_ADDRESS 0xBF80FB34UL
#define HAL_LL_RPA14R_ADDRESS 0xBF80FB38UL
#define HAL_LL_RPA15R_ADDRESS 0xBF80FB3CUL
#define HAL_LL_RPA1R_ADDRESS 0xBF80FB04UL
#define HAL_LL_RPA2R_ADDRESS 0xBF80FB08UL
#define HAL_LL_RPA3R_ADDRESS 0xBF80FB0CUL
#define HAL_LL_RPA4R_ADDRESS 0xBF80FB10UL
#define HAL_LL_RPA5R_ADDRESS 0xBF80FB14UL
#define HAL_LL_RPA6R_ADDRESS 0xBF80FB18UL
#define HAL_LL_RPA7R_ADDRESS 0xBF80FB1CUL
#define HAL_LL_RPA8R_ADDRESS 0xBF80FB20UL
#define HAL_LL_RPA9R_ADDRESS 0xBF80FB24UL
#define HAL_LL_RPB0R_ADDRESS 0xBF80FB40UL
#define HAL_LL_RPB10R_ADDRESS 0xBF80FB68UL
#define HAL_LL_RPB11R_ADDRESS 0xBF80FB6CUL
#define HAL_LL_RPB12R_ADDRESS 0xBF80FB70UL
#define HAL_LL_RPB13R_ADDRESS 0xBF80FB74UL
#define HAL_LL_RPB14R_ADDRESS 0xBF80FB78UL
#define HAL_LL_RPB15R_ADDRESS 0xBF80FB7CUL
#define HAL_LL_RPB1R_ADDRESS 0xBF80FB44UL
#define HAL_LL_RPB2R_ADDRESS 0xBF80FB48UL
#define HAL_LL_RPB3R_ADDRESS 0xBF80FB4CUL
#define HAL_LL_RPB4R_ADDRESS 0xBF80FB50UL
#define HAL_LL_RPB5R_ADDRESS 0xBF80FB54UL
#define HAL_LL_RPB6R_ADDRESS 0xBF80FB58UL
#define HAL_LL_RPB7R_ADDRESS 0xBF80FB5CUL
#define HAL_LL_RPB8R_ADDRESS 0xBF80FB60UL
#define HAL_LL_RPB9R_ADDRESS 0xBF80FB64UL
#define HAL_LL_RPC0R_ADDRESS 0xBF80FB80UL
#define HAL_LL_RPC10R_ADDRESS 0xBF80FBA8UL
#define HAL_LL_RPC11R_ADDRESS 0xBF80FBACUL
#define HAL_LL_RPC12R_ADDRESS 0xBF80FBB0UL
#define HAL_LL_RPC13R_ADDRESS 0xBF80FBB4UL
#define HAL_LL_RPC14R_ADDRESS 0xBF80FBB8UL
#define HAL_LL_RPC15R_ADDRESS 0xBF80FBBCUL
#define HAL_LL_RPC1R_ADDRESS 0xBF80FB84UL
#define HAL_LL_RPC2R_ADDRESS 0xBF80FB88UL
#define HAL_LL_RPC3R_ADDRESS 0xBF80FB8CUL
#define HAL_LL_RPC4R_ADDRESS 0xBF80FB90UL
#define HAL_LL_RPC5R_ADDRESS 0xBF80FB94UL
#define HAL_LL_RPC6R_ADDRESS 0xBF80FB98UL
#define HAL_LL_RPC7R_ADDRESS 0xBF80FB9CUL
#define HAL_LL_RPC8R_ADDRESS 0xBF80FBA0UL
#define HAL_LL_RPC9R_ADDRESS 0xBF80FBA4UL
#define HAL_LL_RPD0R_ADDRESS 0xBF80FBC0UL
#define HAL_LL_RPD10R_ADDRESS 0xBF80FBE8UL
#define HAL_LL_RPD11R_ADDRESS 0xBF80FBECUL
#define HAL_LL_RPD12R_ADDRESS 0xBF80FBF0UL
#define HAL_LL_RPD13R_ADDRESS 0xBF80FBF4UL
#define HAL_LL_RPD14R_ADDRESS 0xBF80FBF8UL
#define HAL_LL_RPD15R_ADDRESS 0xBF80FBFCUL
#define HAL_LL_RPD1R_ADDRESS 0xBF80FBC4UL
#define HAL_LL_RPD2R_ADDRESS 0xBF80FBC8UL
#define HAL_LL_RPD3R_ADDRESS 0xBF80FBCCUL
#define HAL_LL_RPD4R_ADDRESS 0xBF80FBD0UL
#define HAL_LL_RPD5R_ADDRESS 0xBF80FBD4UL
#define HAL_LL_RPD6R_ADDRESS 0xBF80FBD8UL
#define HAL_LL_RPD7R_ADDRESS 0xBF80FBDCUL
#define HAL_LL_RPD8R_ADDRESS 0xBF80FBE0UL
#define HAL_LL_RPD9R_ADDRESS 0xBF80FBE4UL
#define HAL_LL_RPE0R_ADDRESS 0xBF80FC00UL
#define HAL_LL_RPE10R_ADDRESS 0xBF80FC28UL
#define HAL_LL_RPE11R_ADDRESS 0xBF80FC2CUL
#define HAL_LL_RPE12R_ADDRESS 0xBF80FC30UL
#define HAL_LL_RPE13R_ADDRESS 0xBF80FC34UL
#define HAL_LL_RPE14R_ADDRESS 0xBF80FC38UL
#define HAL_LL_RPE15R_ADDRESS 0xBF80FC3CUL
#define HAL_LL_RPE1R_ADDRESS 0xBF80FC04UL
#define HAL_LL_RPE2R_ADDRESS 0xBF80FC08UL
#define HAL_LL_RPE3R_ADDRESS 0xBF80FC0CUL
#define HAL_LL_RPE4R_ADDRESS 0xBF80FC10UL
#define HAL_LL_RPE5R_ADDRESS 0xBF80FC14UL
#define HAL_LL_RPE6R_ADDRESS 0xBF80FC18UL
#define HAL_LL_RPE7R_ADDRESS 0xBF80FC1CUL
#define HAL_LL_RPE8R_ADDRESS 0xBF80FC20UL
#define HAL_LL_RPE9R_ADDRESS 0xBF80FC24UL
#define HAL_LL_RPF0R_ADDRESS 0xBF80FC40UL
#define HAL_LL_RPF10R_ADDRESS 0xBF80FC68UL
#define HAL_LL_RPF11R_ADDRESS 0xBF80FC6CUL
#define HAL_LL_RPF12R_ADDRESS 0xBF80FC70UL
#define HAL_LL_RPF13R_ADDRESS 0xBF80FC74UL
#define HAL_LL_RPF14R_ADDRESS 0xBF80FC78UL
#define HAL_LL_RPF15R_ADDRESS 0xBF80FC7CUL
#define HAL_LL_RPF1R_ADDRESS 0xBF80FC44UL
#define HAL_LL_RPF2R_ADDRESS 0xBF80FC48UL
#define HAL_LL_RPF3R_ADDRESS 0xBF80FC4CUL
#define HAL_LL_RPF4R_ADDRESS 0xBF80FC50UL
#define HAL_LL_RPF5R_ADDRESS 0xBF80FC54UL
#define HAL_LL_RPF6R_ADDRESS 0xBF80FC58UL
#define HAL_LL_RPF7R_ADDRESS 0xBF80FC5CUL
#define HAL_LL_RPF8R_ADDRESS 0xBF80FC60UL
#define HAL_LL_RPF9R_ADDRESS 0xBF80FC64UL
#define HAL_LL_RPG0R_ADDRESS 0xBF80FC80UL
#define HAL_LL_RPG10R_ADDRESS 0xBF80FCA8UL
#define HAL_LL_RPG11R_ADDRESS 0xBF80FCACUL
#define HAL_LL_RPG12R_ADDRESS 0xBF80FCB0UL
#define HAL_LL_RPG13R_ADDRESS 0xBF80FCB4UL
#define HAL_LL_RPG14R_ADDRESS 0xBF80FCB8UL
#define HAL_LL_RPG15R_ADDRESS 0xBF80FCBCUL
#define HAL_LL_RPG1R_ADDRESS 0xBF80FC84UL
#define HAL_LL_RPG2R_ADDRESS 0xBF80FC88UL
#define HAL_LL_RPG3R_ADDRESS 0xBF80FC8CUL
#define HAL_LL_RPG4R_ADDRESS 0xBF80FC90UL
#define HAL_LL_RPG5R_ADDRESS 0xBF80FC94UL
#define HAL_LL_RPG6R_ADDRESS 0xBF80FC98UL
#define HAL_LL_RPG7R_ADDRESS 0xBF80FC9CUL
#define HAL_LL_RPG8R_ADDRESS 0xBF80FCA0UL
#define HAL_LL_RPG9R_ADDRESS 0xBF80FCA4UL
#define HAL_LL_SDI1R_ADDRESS 0xBF80FA84UL
#define HAL_LL_SDI2R_ADDRESS 0xBF80FA90UL
#define HAL_LL_SDI3R_ADDRESS 0xBF80FA9CUL
#define HAL_LL_SDI4R_ADDRESS 0xBF80FAA8UL
#define HAL_LL_SDI5R_ADDRESS 0xBF80FAB4UL
#define HAL_LL_SDI6R_ADDRESS 0xBF80FAC0UL
#define HAL_LL_U1RXR_ADDRESS 0xBF80FA50UL
#define HAL_LL_U2RXR_ADDRESS 0xBF80FA58UL
#define HAL_LL_U3RXR_ADDRESS 0xBF80FA60UL
#define HAL_LL_U4RXR_ADDRESS 0xBF80FA68UL
#define HAL_LL_U5RXR_ADDRESS 0xBF80FA70UL
#define HAL_LL_U6RXR_ADDRESS 0xBF80FA78UL
// EOF PPS Register addresses

// Unlock Register addresses
#define HAL_LL_OSCCON_ADDRESS 0xBF80F000UL
// EOF Unlock Register addresses

// UART Interrupt necessities
#define HAL_LL_IVT_UART_1_SHIFT 26
#define HAL_LL_IVT_UART_1 HAL_LL_UART_1
#define HAL_LL_IVT_UART_1_ADDRESS HAL_LL_IPC7_ADDRESS
#define HAL_LL_UART_1_IFS_RX_ADDRESS HAL_LL_IFS1_ADDRESS
#define HAL_LL_UART_1_IEC_RX_ADDRESS HAL_LL_IEC1_ADDRESS
#define HAL_LL_UART_1_IFS_TX_ADDRESS HAL_LL_IFS1_ADDRESS
#define HAL_LL_UART_1_IEC_TX_ADDRESS HAL_LL_IEC1_ADDRESS
#define HAL_LL_UART_1_TX_FLAG 8
#define HAL_LL_UART_1_RX_FLAG 7

#define HAL_LL_IVT_UART_2_SHIFT 2
#define HAL_LL_IVT_UART_2 HAL_LL_UART_2
#define HAL_LL_IVT_UART_2_ADDRESS HAL_LL_IPC9_ADDRESS
#define HAL_LL_UART_2_IFS_RX_ADDRESS HAL_LL_IFS1_ADDRESS
#define HAL_LL_UART_2_IEC_RX_ADDRESS HAL_LL_IEC1_ADDRESS
#define HAL_LL_UART_2_IFS_TX_ADDRESS HAL_LL_IFS1_ADDRESS
#define HAL_LL_UART_2_IEC_TX_ADDRESS HAL_LL_IEC1_ADDRESS
#define HAL_LL_UART_2_TX_FLAG 26
#define HAL_LL_UART_2_RX_FLAG 25

#define HAL_LL_IVT_UART_3_SHIFT 18
#define HAL_LL_IVT_UART_3 HAL_LL_UART_3
#define HAL_LL_IVT_UART_3_ADDRESS HAL_LL_IPC9_ADDRESS
#define HAL_LL_UART_3_IFS_RX_ADDRESS HAL_LL_IFS1_ADDRESS
#define HAL_LL_UART_3_IEC_RX_ADDRESS HAL_LL_IEC1_ADDRESS
#define HAL_LL_UART_3_IFS_TX_ADDRESS HAL_LL_IFS2_ADDRESS
#define HAL_LL_UART_3_IEC_TX_ADDRESS HAL_LL_IEC2_ADDRESS
#define HAL_LL_UART_3_TX_FLAG 0
#define HAL_LL_UART_3_RX_FLAG 31

#define HAL_LL_IVT_UART_4_SHIFT 26
#define HAL_LL_IVT_UART_4 HAL_LL_UART_4
#define HAL_LL_IVT_UART_4_ADDRESS HAL_LL_IPC9_ADDRESS
#define HAL_LL_UART_4_IFS_RX_ADDRESS HAL_LL_IFS2_ADDRESS
#define HAL_LL_UART_4_IEC_RX_ADDRESS HAL_LL_IEC2_ADDRESS
#define HAL_LL_UART_4_IFS_TX_ADDRESS HAL_LL_IFS2_ADDRESS
#define HAL_LL_UART_4_IEC_TX_ADDRESS HAL_LL_IEC2_ADDRESS
#define HAL_LL_UART_4_TX_FLAG 3
#define HAL_LL_UART_4_RX_FLAG 2
// EOF UART Interrupt necessities

#endif // _MCU_DEFINITIONS_H_
