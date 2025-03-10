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
 * @brief MCU specific pin and module definitions.
 */

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

#include "mcu_reg_addresses.h"
#include "can_definitions.h"

//DMA
#define DMA_NUM_OF_MODULES 6
#define DMA_NUM_OF_STREAMS 1
#define DMA_NUM_OF_STREAMS_FAMILY 1
#define DMA_NUM_OF_CHANNELS 124
#define DMA_NUM_OF_CHANNELS_FAMILY 124

#define DMA_MODULE_1 0
#define DMA_MODULE_2 1
#define DMA_MODULE_3 2
#define DMA_MODULE_4 3
#define DMA_MODULE_5 4
#define DMA_MODULE_6 5
#define DMA_STREAM 0
//EOF DMA

//ADC
#define HAL_LL_RA0_ANA0_ANSELA_BIT 0
#define HAL_LL_RA0_ANA0_ANSELA 0
#define HAL_LL_RA1_ANA1_ANSELA_BIT 1
#define HAL_LL_RA1_ANA1_ANSELA 1
#define HAL_LL_RA2_ANA2_ANSELA_BIT 2
#define HAL_LL_RA2_ANA2_ANSELA 2
#define HAL_LL_RA3_ANA3_ANSELA_BIT 3
#define HAL_LL_RA3_ANA3_ANSELA 3
#define HAL_LL_RA4_ANA4_ANSELA_BIT 4
#define HAL_LL_RA4_ANA4_ANSELA 4
#define HAL_LL_RA5_ANA5_ANSELA_BIT 5
#define HAL_LL_RA5_ANA5_ANSELA 5
#define HAL_LL_RA6_ANA6_ANSELA_BIT 6
#define HAL_LL_RA6_ANA6_ANSELA 6
#define HAL_LL_RA7_ANA7_ANSELA_BIT 7
#define HAL_LL_RA7_ANA7_ANSELA 7
#define HAL_LL_RB0_ANB0_ANSELB_BIT 0
#define HAL_LL_RB0_ANB0_ANSELB 8
#define HAL_LL_RB1_ANB1_ANSELB_BIT 1
#define HAL_LL_RB1_ANB1_ANSELB 9
#define HAL_LL_RB2_ANB2_ANSELB_BIT 2
#define HAL_LL_RB2_ANB2_ANSELB 10
#define HAL_LL_RB3_ANB3_ANSELB_BIT 3
#define HAL_LL_RB3_ANB3_ANSELB 11
#define HAL_LL_RB4_ANB4_ANSELB_BIT 4
#define HAL_LL_RB4_ANB4_ANSELB 12
#define HAL_LL_RB5_ANB5_ANSELB_BIT 5
#define HAL_LL_RB5_ANB5_ANSELB 13
#define HAL_LL_RB6_ANB6_ANSELB_BIT 6
#define HAL_LL_RB6_ANB6_ANSELB 14
#define HAL_LL_RB7_ANB7_ANSELB_BIT 7
#define HAL_LL_RB7_ANB7_ANSELB 15
#define HAL_LL_RC0_ANC0_ANSELC_BIT 0
#define HAL_LL_RC0_ANC0_ANSELC 16
#define HAL_LL_RC1_ANC1_ANSELC_BIT 1
#define HAL_LL_RC1_ANC1_ANSELC 17
#define HAL_LL_RC2_ANC2_ANSELC_BIT 2
#define HAL_LL_RC2_ANC2_ANSELC 18
#define HAL_LL_RC3_ANC3_ANSELC_BIT 3
#define HAL_LL_RC3_ANC3_ANSELC 19
#define HAL_LL_RC4_ANC4_ANSELC_BIT 4
#define HAL_LL_RC4_ANC4_ANSELC 20
#define HAL_LL_RC5_ANC5_ANSELC_BIT 5
#define HAL_LL_RC5_ANC5_ANSELC 21
#define HAL_LL_RC6_ANC6_ANSELC_BIT 6
#define HAL_LL_RC6_ANC6_ANSELC 22
#define HAL_LL_RC7_ANC7_ANSELC_BIT 7
#define HAL_LL_RC7_ANC7_ANSELC 23
#define HAL_LL_RD0_AND0_ANSELD_BIT 0
#define HAL_LL_RD0_AND0_ANSELD 24
#define HAL_LL_RD1_AND1_ANSELD_BIT 1
#define HAL_LL_RD1_AND1_ANSELD 25
#define HAL_LL_RD2_AND2_ANSELD_BIT 2
#define HAL_LL_RD2_AND2_ANSELD 26
#define HAL_LL_RD3_AND3_ANSELD_BIT 3
#define HAL_LL_RD3_AND3_ANSELD 27
#define HAL_LL_RD4_AND4_ANSELD_BIT 4
#define HAL_LL_RD4_AND4_ANSELD 28
#define HAL_LL_RD5_AND5_ANSELD_BIT 5
#define HAL_LL_RD5_AND5_ANSELD 29
#define HAL_LL_RD6_AND6_ANSELD_BIT 6
#define HAL_LL_RD6_AND6_ANSELD 30
#define HAL_LL_RD7_AND7_ANSELD_BIT 7
#define HAL_LL_RD7_AND7_ANSELD 31
#define HAL_LL_RE0_ANE0_ANSELE_BIT 0
#define HAL_LL_RE0_ANE0_ANSELE 0
#define HAL_LL_RE1_ANE1_ANSELE_BIT 1
#define HAL_LL_RE1_ANE1_ANSELE 1
#define HAL_LL_RE2_ANE2_ANSELE_BIT 2
#define HAL_LL_RE2_ANE2_ANSELE 2
#define HAL_LL_RF0_ANF0_ANSELF_BIT 0
#define HAL_LL_RF0_ANF0_ANSELF 0
#define HAL_LL_RF1_ANF1_ANSELF_BIT 1
#define HAL_LL_RF1_ANF1_ANSELF 1
#define HAL_LL_RF2_ANF2_ANSELF_BIT 2
#define HAL_LL_RF2_ANF2_ANSELF 2
#define HAL_LL_RF3_ANF3_ANSELF_BIT 3
#define HAL_LL_RF3_ANF3_ANSELF 3
#define HAL_LL_RF4_ANF4_ANSELF_BIT 4
#define HAL_LL_RF4_ANF4_ANSELF 4
#define HAL_LL_RF5_ANF5_ANSELF_BIT 5
#define HAL_LL_RF5_ANF5_ANSELF 5
#define HAL_LL_RF6_ANF6_ANSELF_BIT 6
#define HAL_LL_RF6_ANF6_ANSELF 6
#define HAL_LL_RF7_ANF7_ANSELF_BIT 7
#define HAL_LL_RF7_ANF7_ANSELF 7


#define HAL_LL_ADRESL_ADDRESS 0x3EAU
#define HAL_LL_FVRCON_ADDRESS 0x3D7U
#define HAL_LL_ANSELF_ADDRESS 0x428U
#define HAL_LL_ANSELE_ADDRESS 0x420U
#define HAL_LL_ANSELD_ADDRESS 0x418U
#define HAL_LL_ANSELC_ADDRESS 0x410U
#define HAL_LL_ANSELB_ADDRESS 0x408U
#define HAL_LL_ANSELA_ADDRESS 0x400U
#define HAL_LL_ADREF_ADDRESS 0x3F8U
#define HAL_LL_ADPCH_ADDRESS 0x3ECU
#define HAL_LL_ADCON3_ADDRESS 0x3F6U
#define HAL_LL_ADCON2_ADDRESS 0x3F5U
#define HAL_LL_ADCON1_ADDRESS 0x3F4U
#define HAL_LL_ADCON0_ADDRESS 0x3F3U

#define HAL_LL_AN_COUNT 43
#define ADC_MODULE 1
#define ADC_MODULE_COUNT 1
//EOF ADC

//I2C
#define I2C_SCL_RB0
#define I2C_SCL_RB1
#define I2C_SCL_RB2
#define I2C_SCL_RB3
#define I2C_SCL_RB4
#define I2C_SCL_RB5
#define I2C_SCL_RB6
#define I2C_SCL_RB7
#define I2C_SCL_RC0
#define I2C_SCL_RC1
#define I2C_SCL_RC2
#define I2C_SCL_RC3
#define I2C_SCL_RC4
#define I2C_SCL_RC5
#define I2C_SCL_RC6
#define I2C_SCL_RC7
#define I2C_SCL_RD0
#define I2C_SCL_RD1
#define I2C_SCL_RD2
#define I2C_SCL_RD3
#define I2C_SCL_RD4
#define I2C_SCL_RD5
#define I2C_SCL_RD6
#define I2C_SCL_RD7
#define I2C_SDA_RB0
#define I2C_SDA_RB1
#define I2C_SDA_RB2
#define I2C_SDA_RB3
#define I2C_SDA_RB4
#define I2C_SDA_RB5
#define I2C_SDA_RB6
#define I2C_SDA_RB7
#define I2C_SDA_RC0
#define I2C_SDA_RC1
#define I2C_SDA_RC2
#define I2C_SDA_RC3
#define I2C_SDA_RC4
#define I2C_SDA_RC5
#define I2C_SDA_RC6
#define I2C_SDA_RC7

#define I2C_MODULE 1

#define I2C_MODULE_COUNT 1

#define HAL_LL_I2C_PPS_ENABLED true
//EOF I2C

//UART
#define UART1_RX_RC0
#define UART1_RX_RC1
#define UART1_RX_RC2
#define UART1_RX_RC3
#define UART1_RX_RC4
#define UART1_RX_RC5
#define UART1_RX_RC6
#define UART1_RX_RC7
#define UART1_RX_RF0
#define UART1_RX_RF1
#define UART1_RX_RF2
#define UART1_RX_RF3
#define UART1_RX_RF4
#define UART1_RX_RF5
#define UART1_RX_RF6
#define UART1_RX_RF7
#define UART1_TX_RC0
#define UART1_TX_RC1
#define UART1_TX_RC2
#define UART1_TX_RC3
#define UART1_TX_RC4
#define UART1_TX_RC5
#define UART1_TX_RC6
#define UART1_TX_RC7
#define UART1_TX_RF0
#define UART1_TX_RF1
#define UART1_TX_RF2
#define UART1_TX_RF3
#define UART1_TX_RF4
#define UART1_TX_RF5
#define UART1_TX_RF6
#define UART1_TX_RF7
#define UART2_RX_RB0
#define UART2_RX_RB1
#define UART2_RX_RB2
#define UART2_RX_RB3
#define UART2_RX_RB4
#define UART2_RX_RB5
#define UART2_RX_RB6
#define UART2_RX_RB7
#define UART2_RX_RD0
#define UART2_RX_RD1
#define UART2_RX_RD2
#define UART2_RX_RD3
#define UART2_RX_RD4
#define UART2_RX_RD5
#define UART2_RX_RD6
#define UART2_RX_RD7
#define UART2_TX_RB0
#define UART2_TX_RB1
#define UART2_TX_RB2
#define UART2_TX_RB3
#define UART2_TX_RB4
#define UART2_TX_RB5
#define UART2_TX_RB6
#define UART2_TX_RB7
#define UART2_TX_RD0
#define UART2_TX_RD1
#define UART2_TX_RD2
#define UART2_TX_RD3
#define UART2_TX_RD4
#define UART2_TX_RD5
#define UART2_TX_RD6
#define UART2_TX_RD7
#define UART3_RX_RA0
#define UART3_RX_RA1
#define UART3_RX_RA2
#define UART3_RX_RA3
#define UART3_RX_RA4
#define UART3_RX_RA5
#define UART3_RX_RA6
#define UART3_RX_RA7
#define UART3_RX_RF0
#define UART3_RX_RF1
#define UART3_RX_RF2
#define UART3_RX_RF3
#define UART3_RX_RF4
#define UART3_RX_RF5
#define UART3_RX_RF6
#define UART3_RX_RF7
#define UART3_TX_RA0
#define UART3_TX_RA1
#define UART3_TX_RA2
#define UART3_TX_RA3
#define UART3_TX_RA4
#define UART3_TX_RA5
#define UART3_TX_RA6
#define UART3_TX_RA7
#define UART3_TX_RF0
#define UART3_TX_RF1
#define UART3_TX_RF2
#define UART3_TX_RF3
#define UART3_TX_RF4
#define UART3_TX_RF5
#define UART3_TX_RF6
#define UART3_TX_RF7
#define UART4_RX_RB0
#define UART4_RX_RB1
#define UART4_RX_RB2
#define UART4_RX_RB3
#define UART4_RX_RB4
#define UART4_RX_RB5
#define UART4_RX_RB6
#define UART4_RX_RB7
#define UART4_RX_RD0
#define UART4_RX_RD1
#define UART4_RX_RD2
#define UART4_RX_RD3
#define UART4_RX_RD4
#define UART4_RX_RD5
#define UART4_RX_RD6
#define UART4_RX_RD7
#define UART4_TX_RA0
#define UART4_TX_RA1
#define UART4_TX_RA2
#define UART4_TX_RA3
#define UART4_TX_RA4
#define UART4_TX_RA5
#define UART4_TX_RA6
#define UART4_TX_RA7
#define UART4_TX_RD0
#define UART4_TX_RD1
#define UART4_TX_RD2
#define UART4_TX_RD3
#define UART4_TX_RD4
#define UART4_TX_RD5
#define UART4_TX_RD6
#define UART4_TX_RD7
#define UART5_RX_RA0
#define UART5_RX_RA1
#define UART5_RX_RA2
#define UART5_RX_RA3
#define UART5_RX_RA4
#define UART5_RX_RA5
#define UART5_RX_RA6
#define UART5_RX_RA7
#define UART5_RX_RF0
#define UART5_RX_RF1
#define UART5_RX_RF2
#define UART5_RX_RF3
#define UART5_RX_RF4
#define UART5_RX_RF5
#define UART5_RX_RF6
#define UART5_RX_RF7
#define UART5_TX_RC0
#define UART5_TX_RC1
#define UART5_TX_RC2
#define UART5_TX_RC3
#define UART5_TX_RC4
#define UART5_TX_RC5
#define UART5_TX_RC6
#define UART5_TX_RC7
#define UART5_TX_RF0
#define UART5_TX_RF1
#define UART5_TX_RF2
#define UART5_TX_RF3
#define UART5_TX_RF4
#define UART5_TX_RF5
#define UART5_TX_RF6
#define UART5_TX_RF7

#define UART_MODULE_1 1
#define UART_MODULE_2 2
#define UART_MODULE_3 3
#define UART_MODULE_4 4
#define UART_MODULE_5 5

#define UART_MODULE_COUNT 5

#define HAL_LL_UART_PPS_ENABLED true
//EOF UART

//SPI
#define SPI1_MISO_RB0
#define SPI1_MISO_RB1
#define SPI1_MISO_RB2
#define SPI1_MISO_RB3
#define SPI1_MISO_RB4
#define SPI1_MISO_RB5
#define SPI1_MISO_RB6
#define SPI1_MISO_RB7
#define SPI1_MISO_RC0
#define SPI1_MISO_RC1
#define SPI1_MISO_RC2
#define SPI1_MISO_RC3
#define SPI1_MISO_RC4
#define SPI1_MISO_RC5
#define SPI1_MISO_RC6
#define SPI1_MISO_RC7
#define SPI1_MOSI_RB0
#define SPI1_MOSI_RB1
#define SPI1_MOSI_RB2
#define SPI1_MOSI_RB3
#define SPI1_MOSI_RB4
#define SPI1_MOSI_RB5
#define SPI1_MOSI_RB6
#define SPI1_MOSI_RB7
#define SPI1_MOSI_RC0
#define SPI1_MOSI_RC1
#define SPI1_MOSI_RC2
#define SPI1_MOSI_RC3
#define SPI1_MOSI_RC4
#define SPI1_MOSI_RC5
#define SPI1_MOSI_RC6
#define SPI1_MOSI_RC7
#define SPI1_SCK_RB0
#define SPI1_SCK_RB1
#define SPI1_SCK_RB2
#define SPI1_SCK_RB3
#define SPI1_SCK_RB4
#define SPI1_SCK_RB5
#define SPI1_SCK_RB6
#define SPI1_SCK_RB7
#define SPI1_SCK_RC0
#define SPI1_SCK_RC1
#define SPI1_SCK_RC2
#define SPI1_SCK_RC3
#define SPI1_SCK_RC4
#define SPI1_SCK_RC5
#define SPI1_SCK_RC6
#define SPI1_SCK_RC7
#define SPI2_MISO_RB0
#define SPI2_MISO_RB1
#define SPI2_MISO_RB2
#define SPI2_MISO_RB3
#define SPI2_MISO_RB4
#define SPI2_MISO_RB5
#define SPI2_MISO_RB6
#define SPI2_MISO_RB7
#define SPI2_MISO_RD0
#define SPI2_MISO_RD1
#define SPI2_MISO_RD2
#define SPI2_MISO_RD3
#define SPI2_MISO_RD4
#define SPI2_MISO_RD5
#define SPI2_MISO_RD6
#define SPI2_MISO_RD7
#define SPI2_MOSI_RB0
#define SPI2_MOSI_RB1
#define SPI2_MOSI_RB2
#define SPI2_MOSI_RB3
#define SPI2_MOSI_RB4
#define SPI2_MOSI_RB5
#define SPI2_MOSI_RB6
#define SPI2_MOSI_RB7
#define SPI2_MOSI_RD0
#define SPI2_MOSI_RD1
#define SPI2_MOSI_RD2
#define SPI2_MOSI_RD3
#define SPI2_MOSI_RD4
#define SPI2_MOSI_RD5
#define SPI2_MOSI_RD6
#define SPI2_MOSI_RD7
#define SPI2_SCK_RB0
#define SPI2_SCK_RB1
#define SPI2_SCK_RB2
#define SPI2_SCK_RB3
#define SPI2_SCK_RB4
#define SPI2_SCK_RB5
#define SPI2_SCK_RB6
#define SPI2_SCK_RB7
#define SPI2_SCK_RD0
#define SPI2_SCK_RD1
#define SPI2_SCK_RD2
#define SPI2_SCK_RD3
#define SPI2_SCK_RD4
#define SPI2_SCK_RD5
#define SPI2_SCK_RD6
#define SPI2_SCK_RD7

#define SPI_MODULE_1 1
#define SPI_MODULE_2 2

#define SPI_MODULE_COUNT 2

#define HAL_LL_SPI_PPS_ENABLED true
//EOF SPI

//PWM
#define PWM_CCP1_RC0
#define PWM_CCP1_RC1
#define PWM_CCP1_RC2
#define PWM_CCP1_RC3
#define PWM_CCP1_RC4
#define PWM_CCP1_RC5
#define PWM_CCP1_RC6
#define PWM_CCP1_RC7
#define PWM_CCP1_RF0
#define PWM_CCP1_RF1
#define PWM_CCP1_RF2
#define PWM_CCP1_RF3
#define PWM_CCP1_RF4
#define PWM_CCP1_RF5
#define PWM_CCP1_RF6
#define PWM_CCP1_RF7
#define PWM_CCP2_RC0
#define PWM_CCP2_RC1
#define PWM_CCP2_RC2
#define PWM_CCP2_RC3
#define PWM_CCP2_RC4
#define PWM_CCP2_RC5
#define PWM_CCP2_RC6
#define PWM_CCP2_RC7
#define PWM_CCP2_RF0
#define PWM_CCP2_RF1
#define PWM_CCP2_RF2
#define PWM_CCP2_RF3
#define PWM_CCP2_RF4
#define PWM_CCP2_RF5
#define PWM_CCP2_RF6
#define PWM_CCP2_RF7
#define PWM_CCP3_RB0
#define PWM_CCP3_RB1
#define PWM_CCP3_RB2
#define PWM_CCP3_RB3
#define PWM_CCP3_RB4
#define PWM_CCP3_RB5
#define PWM_CCP3_RB6
#define PWM_CCP3_RB7
#define PWM_CCP3_RD0
#define PWM_CCP3_RD1
#define PWM_CCP3_RD2
#define PWM_CCP3_RD3
#define PWM_CCP3_RD4
#define PWM_CCP3_RD5
#define PWM_CCP3_RD6
#define PWM_CCP3_RD7

#define CCP_MODULE_1 1
#define CCP_MODULE_2 2
#define CCP_MODULE_3 3

#define CCP_MODULE_COUNT 3

#define TIM_MODULE_COUNT CCP_MODULE_COUNT

#define HAL_LL_TIM_PPS_ENABLED true
//EOF PWM

//IO
#define __RA0_CN
#define __RA1_CN
#define __RA2_CN
#define __RA3_CN
#define __RA4_CN
#define __RA5_CN
#define __RA6_CN
#define __RA7_CN
#define __RB0_CN
#define __RB1_CN
#define __RB2_CN
#define __RB3_CN
#define __RB4_CN
#define __RB5_CN
#define __RB6_CN
#define __RB7_CN
#define __RC0_CN
#define __RC1_CN
#define __RC2_CN
#define __RC3_CN
#define __RC4_CN
#define __RC5_CN
#define __RC6_CN
#define __RC7_CN
#define __RD0_CN
#define __RD1_CN
#define __RD2_CN
#define __RD3_CN
#define __RD4_CN
#define __RD5_CN
#define __RD6_CN
#define __RD7_CN
#define __RE0_CN
#define __RE1_CN
#define __RE2_CN
#define __RE3_CN
#define __RF0_CN
#define __RF1_CN
#define __RF2_CN
#define __RF3_CN
#define __RF4_CN
#define __RF5_CN
#define __RF6_CN
#define __RF7_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_D_CN
#define __PORT_E_CN
#define __PORT_F_CN
#define PORT_COUNT (6)
#define PORT_SIZE (8)
//EOF IO

// GPIO Register addresses and offsets
#define LATA_BASE_ADDRESS 0x4BEU
#define LATB_BASE_ADDRESS 0x4BFU
#define LATC_BASE_ADDRESS 0x4C0U
#define LATD_BASE_ADDRESS 0x4C1U
#define LATE_BASE_ADDRESS 0x4C2U
#define LATF_BASE_ADDRESS 0x4C3U
#define PORTA_BASE_ADDRESS 0x4CEU
#define PORTB_BASE_ADDRESS 0x4CFU
#define PORTC_BASE_ADDRESS 0x4D0U
#define PORTD_BASE_ADDRESS 0x4D1U
#define PORTE_BASE_ADDRESS 0x4D2U
#define PORTF_BASE_ADDRESS 0x4D3U
#define TRISA_BASE_ADDRESS 0x4C6U
#define TRISB_BASE_ADDRESS 0x4C7U
#define TRISC_BASE_ADDRESS 0x4C8U
#define TRISD_BASE_ADDRESS 0x4C9U
#define TRISE_BASE_ADDRESS 0x4CAU
#define TRISF_BASE_ADDRESS 0x4CBU
// EOF GPIO Register addresses and offsets

// PMD Register addresses
#define HAL_LL_PIE0_ADDRESS 0x49EU
#define HAL_LL_PIE1_ADDRESS 0x49FU
#define HAL_LL_PIE10_ADDRESS 0x4A8U
#define HAL_LL_PIE11_ADDRESS 0x4A9U
#define HAL_LL_PIE12_ADDRESS 0x4AAU
#define HAL_LL_PIE13_ADDRESS 0x4ABU
#define HAL_LL_PIE14_ADDRESS 0x4ACU
#define HAL_LL_PIE15_ADDRESS 0x4ADU
#define HAL_LL_PIE2_ADDRESS 0x4A0U
#define HAL_LL_PIE3_ADDRESS 0x4A1U
#define HAL_LL_PIE4_ADDRESS 0x4A2U
#define HAL_LL_PIE5_ADDRESS 0x4A3U
#define HAL_LL_PIE6_ADDRESS 0x4A4U
#define HAL_LL_PIE7_ADDRESS 0x4A5U
#define HAL_LL_PIE8_ADDRESS 0x4A6U
#define HAL_LL_PIE9_ADDRESS 0x4A7U
#define HAL_LL_PIR0_ADDRESS 0x4AEU
#define HAL_LL_PIR1_ADDRESS 0x4AFU
#define HAL_LL_PIR10_ADDRESS 0x4B8U
#define HAL_LL_PIR11_ADDRESS 0x4B9U
#define HAL_LL_PIR12_ADDRESS 0x4BAU
#define HAL_LL_PIR13_ADDRESS 0x4BBU
#define HAL_LL_PIR14_ADDRESS 0x4BCU
#define HAL_LL_PIR15_ADDRESS 0x4BDU
#define HAL_LL_PIR2_ADDRESS 0x4B0U
#define HAL_LL_PIR3_ADDRESS 0x4B1U
#define HAL_LL_PIR4_ADDRESS 0x4B2U
#define HAL_LL_PIR5_ADDRESS 0x4B3U
#define HAL_LL_PIR6_ADDRESS 0x4B4U
#define HAL_LL_PIR7_ADDRESS 0x4B5U
#define HAL_LL_PIR8_ADDRESS 0x4B6U
#define HAL_LL_PIR9_ADDRESS 0x4B7U
#define HAL_LL_PMD0_ADDRESS 0x60U
#define HAL_LL_PMD1_ADDRESS 0x61U
#define HAL_LL_PMD3_ADDRESS 0x63U
#define HAL_LL_PMD4_ADDRESS 0x64U
#define HAL_LL_PMD5_ADDRESS 0x65U
#define HAL_LL_PMD6_ADDRESS 0x66U
#define HAL_LL_PMD7_ADDRESS 0x67U
#define HAL_LL_PMD8_ADDRESS 0x68U
// EOF PMD Register addresses

// I2C and SPI Register addresses
#define HAL_LL_I2C1ERR_ADDRESS 0x297U
#define HAL_LL_I2C1ADB0_ADDRESS 0x28EU
#define HAL_LL_I2C1ADB1_ADDRESS 0x28FU
#define HAL_LL_I2C1CLK_ADDRESS 0x29CU
#define HAL_LL_I2C1CNT_ADDRESS 0x28DU
#define HAL_LL_I2C1CON0_ADDRESS 0x294U
#define HAL_LL_I2C1CON1_ADDRESS 0x295U
#define HAL_LL_I2C1CON2_ADDRESS 0x296U
#define HAL_LL_I2C1PIE_ADDRESS 0x29BU
#define HAL_LL_I2C1PIR_ADDRESS 0x29AU
#define HAL_LL_I2C1RXB_ADDRESS 0x28BU
#define HAL_LL_I2C1STAT0_ADDRESS 0x298U
#define HAL_LL_I2C1STAT1_ADDRESS 0x299U
#define HAL_LL_I2C1TXB_ADDRESS 0x28CU
#define HAL_LL_OSCEN_ADDRESS 0xB3U
#define HAL_LL_OSCSTAT_ADDRESS 0xB2U
#define HAL_LL_SPI1BAUD_ADDRESS 0x89U
#define HAL_LL_SPI1CLK_ADDRESS 0x8CU
#define HAL_LL_SPI1CON0_ADDRESS 0x84U
#define HAL_LL_SPI1CON1_ADDRESS 0x85U
#define HAL_LL_SPI1CON2_ADDRESS 0x86U
#define HAL_LL_SPI1INTE_ADDRESS 0x8BU
#define HAL_LL_SPI1INTF_ADDRESS 0x8AU
#define HAL_LL_SPI1RXB_ADDRESS 0x80U
#define HAL_LL_SPI1STATUS_ADDRESS 0x87U
#define HAL_LL_SPI1TCNTH_ADDRESS 0x83U
#define HAL_LL_SPI1TCNTL_ADDRESS 0x82U
#define HAL_LL_SPI1TWIDTH_ADDRESS 0x88U
#define HAL_LL_SPI1TXB_ADDRESS 0x81U
#define HAL_LL_SPI2BAUD_ADDRESS 0x96U
#define HAL_LL_SPI2CLK_ADDRESS 0x99U
#define HAL_LL_SPI2CON0_ADDRESS 0x91U
#define HAL_LL_SPI2CON1_ADDRESS 0x92U
#define HAL_LL_SPI2CON2_ADDRESS 0x93U
#define HAL_LL_SPI2INTE_ADDRESS 0x98U
#define HAL_LL_SPI2INTF_ADDRESS 0x97U
#define HAL_LL_SPI2RXB_ADDRESS 0x8DU
#define HAL_LL_SPI2STATUS_ADDRESS 0x94U
#define HAL_LL_SPI2TCNTH_ADDRESS 0x90U
#define HAL_LL_SPI2TCNTL_ADDRESS 0x8FU
#define HAL_LL_SPI2TWIDTH_ADDRESS 0x95U
#define HAL_LL_SPI2TXB_ADDRESS 0x8EU
// EOF I2C and SPI Register addresses

// PMD & PIR Register defines
#define HAL_LL_PIE_MODULE_UART1_ADDRESS HAL_LL_PIE4_ADDRESS
#define HAL_LL_PIE_MODULE_UART2_ADDRESS HAL_LL_PIE8_ADDRESS
#define HAL_LL_PIE_MODULE_UART3_ADDRESS HAL_LL_PIE9_ADDRESS
#define HAL_LL_PIE_MODULE_UART4_ADDRESS HAL_LL_PIE12_ADDRESS
#define HAL_LL_PIE_MODULE_UART5_ADDRESS HAL_LL_PIE13_ADDRESS
#define HAL_LL_PIR_MODULE_UART1_ADDRESS HAL_LL_PIR4_ADDRESS
#define HAL_LL_PIR_MODULE_UART2_ADDRESS HAL_LL_PIR8_ADDRESS
#define HAL_LL_PIR_MODULE_UART3_ADDRESS HAL_LL_PIR9_ADDRESS
#define HAL_LL_PIR_MODULE_UART4_ADDRESS HAL_LL_PIR12_ADDRESS
#define HAL_LL_PIR_MODULE_UART5_ADDRESS HAL_LL_PIR13_ADDRESS
#define HAL_LL_PMD_I2C1_ADDRESS HAL_LL_PMD6_ADDRESS
#define HAL_LL_PMD_I2C2_ADDRESS HAL_LL_PMD6_ADDRESS
#define HAL_LL_PMD_SPI1_ADDRESS HAL_LL_PMD6_ADDRESS
#define HAL_LL_PMD_SPI2_ADDRESS HAL_LL_PMD6_ADDRESS
#define HAL_LL_PMD_UART1_ADDRESS HAL_LL_PMD6_ADDRESS
#define HAL_LL_PMD_UART2_ADDRESS HAL_LL_PMD6_ADDRESS
#define HAL_LL_PMD_UART3_ADDRESS HAL_LL_PMD6_ADDRESS
#define HAL_LL_PMD_UART4_ADDRESS HAL_LL_PMD6_ADDRESS
#define HAL_LL_PMD_UART5_ADDRESS HAL_LL_PMD6_ADDRESS
#define HAL_LL_SSP1_MODULE_BIT 1
#define HAL_LL_SSP2_MODULE_BIT 2
#define HAL_LL_UART1_MODULE_BIT 3
#define HAL_LL_UART1_URXIF_BIT 0
#define HAL_LL_UART1_UTXIF_BIT 1
#define HAL_LL_UART2_MODULE_BIT 4
#define HAL_LL_UART2_URXIF_BIT 0
#define HAL_LL_UART2_UTXIF_BIT 1
#define HAL_LL_UART3_MODULE_BIT 5
#define HAL_LL_UART3_URXIF_BIT 0
#define HAL_LL_UART3_UTXIF_BIT 1
#define HAL_LL_UART4_MODULE_BIT 6
#define HAL_LL_UART4_URXIF_BIT 0
#define HAL_LL_UART4_UTXIF_BIT 1
#define HAL_LL_UART5_MODULE_BIT 7
#define HAL_LL_UART5_URXIF_BIT 0
#define HAL_LL_UART5_UTXIF_BIT 1
// EOF PMD & PIR Register defines

// TMR Register addresses
#define HAL_LL_CCP1CON_ADDRESS 0x342U
#define HAL_LL_CCP2CON_ADDRESS 0x346U
#define HAL_LL_CCP3CON_ADDRESS 0x34AU
#define HAL_LL_CCPTMRS0_ADDRESS 0x34CU
#define HAL_LL_CCPTMRS_CCP_MODULE_1 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_1_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_2 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_2_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_3 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_3_TIM2_ENABLE_BIT 0x00
#define HAL_LL_T0CON0_ADDRESS 0x31AU
#define HAL_LL_T0CON1_ADDRESS 0x31BU
#define HAL_LL_T1CON_ADDRESS 0x31EU
#define HAL_LL_T2CLKCON_ADDRESS 0x326U
#define HAL_LL_T2CON_ADDRESS 0x324U
#define HAL_LL_PR2_ADDRESS 0x323U
#define HAL_LL_T3CON_ADDRESS 0x32AU
#define HAL_LL_T4CLKCON_ADDRESS 0x332U
#define HAL_LL_T4CON_ADDRESS 0x330U
#define HAL_LL_PR4_ADDRESS 0x32FU
#define HAL_LL_T5CON_ADDRESS 0x336U
#define HAL_LL_T6CLKCON_ADDRESS 0x33EU
#define HAL_LL_T6CON_ADDRESS 0x33CU
#define HAL_LL_PR6_ADDRESS 0x33BU
#define HAL_LL_CCPR1L_ADDRESS 0x340U
#define HAL_LL_CCPR2L_ADDRESS 0x344U
#define HAL_LL_CCPR3L_ADDRESS 0x348U
// EOF TMR Register addresses

// ADC Register addresses and bit defines
#define HAL_LL_ADC_PMD_ADDRESS HAL_LL_PMD3_ADDRESS
#define HAL_LL_ADCMD_BIT 5
// EOF ADC Register addresses and bit defines

// SLRCON Register addresses and bit defines
#define HAL_LL_SLRCON_PA0_BIT 0
#define HAL_LL_SLRCON_PA1_BIT 1
#define HAL_LL_SLRCON_PA2_BIT 2
#define HAL_LL_SLRCON_PA3_BIT 3
#define HAL_LL_SLRCON_PA4_BIT 4
#define HAL_LL_SLRCON_PA5_BIT 5
#define HAL_LL_SLRCON_PA6_BIT 6
#define HAL_LL_SLRCON_PA7_BIT 7
#define HAL_LL_SLRCON_PB0_BIT 0
#define HAL_LL_SLRCON_PB1_BIT 1
#define HAL_LL_SLRCON_PB2_BIT 2
#define HAL_LL_SLRCON_PB3_BIT 3
#define HAL_LL_SLRCON_PB4_BIT 4
#define HAL_LL_SLRCON_PB5_BIT 5
#define HAL_LL_SLRCON_PB6_BIT 6
#define HAL_LL_SLRCON_PB7_BIT 7
#define HAL_LL_SLRCON_PC0_BIT 0
#define HAL_LL_SLRCON_PC1_BIT 1
#define HAL_LL_SLRCON_PC2_BIT 2
#define HAL_LL_SLRCON_PC3_BIT 3
#define HAL_LL_SLRCON_PC4_BIT 4
#define HAL_LL_SLRCON_PC5_BIT 5
#define HAL_LL_SLRCON_PC6_BIT 6
#define HAL_LL_SLRCON_PC7_BIT 7
#define HAL_LL_SLRCON_PD0_BIT 0
#define HAL_LL_SLRCON_PD1_BIT 1
#define HAL_LL_SLRCON_PD2_BIT 2
#define HAL_LL_SLRCON_PD3_BIT 3
#define HAL_LL_SLRCON_PD4_BIT 4
#define HAL_LL_SLRCON_PD5_BIT 5
#define HAL_LL_SLRCON_PD6_BIT 6
#define HAL_LL_SLRCON_PD7_BIT 7
#define HAL_LL_SLRCON_PE0_BIT 0
#define HAL_LL_SLRCON_PE1_BIT 1
#define HAL_LL_SLRCON_PE2_BIT 2
#define HAL_LL_SLRCON_PF0_BIT 0
#define HAL_LL_SLRCON_PF1_BIT 1
#define HAL_LL_SLRCON_PF2_BIT 2
#define HAL_LL_SLRCON_PF3_BIT 3
#define HAL_LL_SLRCON_PF4_BIT 4
#define HAL_LL_SLRCON_PF5_BIT 5
#define HAL_LL_SLRCON_PF6_BIT 6
#define HAL_LL_SLRCON_PF7_BIT 7
#define HAL_LL_SLRCONA_ADDRESS 0x403U
#define HAL_LL_SLRCONB_ADDRESS 0x40BU
#define HAL_LL_SLRCONC_ADDRESS 0x413U
#define HAL_LL_SLRCOND_ADDRESS 0x41BU
#define HAL_LL_SLRCONE_ADDRESS 0x423U
#define HAL_LL_SLRCONF_ADDRESS 0x42BU
#define HAL_LL_SLRCON_BIT_COUNT 43

// EOF SLRCON Register addresses and bit defines

// ODCON Register addresses and bit defines
#define HAL_LL_ODCON_ALPHABETIC
#define HAL_LL_ODCONA_ADDRESS 0x402U
#define HAL_LL_ODCONA_ODCA0_BIT 0
#define HAL_LL_ODCONA_ODCA1_BIT 1
#define HAL_LL_ODCONA_ODCA2_BIT 2
#define HAL_LL_ODCONA_ODCA3_BIT 3
#define HAL_LL_ODCONA_ODCA4_BIT 4
#define HAL_LL_ODCONA_ODCA5_BIT 5
#define HAL_LL_ODCONA_ODCA6_BIT 6
#define HAL_LL_ODCONA_ODCA7_BIT 7
#define HAL_LL_ODCONB_ADDRESS 0x40AU
#define HAL_LL_ODCONB_ODCB0_BIT 0
#define HAL_LL_ODCONB_ODCB1_BIT 1
#define HAL_LL_ODCONB_ODCB2_BIT 2
#define HAL_LL_ODCONB_ODCB3_BIT 3
#define HAL_LL_ODCONB_ODCB4_BIT 4
#define HAL_LL_ODCONB_ODCB5_BIT 5
#define HAL_LL_ODCONB_ODCB6_BIT 6
#define HAL_LL_ODCONB_ODCB7_BIT 7
#define HAL_LL_ODCONC_ADDRESS 0x412U
#define HAL_LL_ODCONC_ODCC0_BIT 0
#define HAL_LL_ODCONC_ODCC1_BIT 1
#define HAL_LL_ODCONC_ODCC2_BIT 2
#define HAL_LL_ODCONC_ODCC3_BIT 3
#define HAL_LL_ODCONC_ODCC4_BIT 4
#define HAL_LL_ODCONC_ODCC5_BIT 5
#define HAL_LL_ODCONC_ODCC6_BIT 6
#define HAL_LL_ODCONC_ODCC7_BIT 7
#define HAL_LL_ODCOND_ADDRESS 0x41AU
#define HAL_LL_ODCOND_ODCD0_BIT 0
#define HAL_LL_ODCOND_ODCD1_BIT 1
#define HAL_LL_ODCOND_ODCD2_BIT 2
#define HAL_LL_ODCOND_ODCD3_BIT 3
#define HAL_LL_ODCOND_ODCD4_BIT 4
#define HAL_LL_ODCOND_ODCD5_BIT 5
#define HAL_LL_ODCOND_ODCD6_BIT 6
#define HAL_LL_ODCOND_ODCD7_BIT 7
#define HAL_LL_ODCONE_ADDRESS 0x422U
#define HAL_LL_ODCONE_ODCE0_BIT 0
#define HAL_LL_ODCONE_ODCE1_BIT 1
#define HAL_LL_ODCONE_ODCE2_BIT 2
#define HAL_LL_ODCONF_ADDRESS 0x42AU
#define HAL_LL_ODCONF_ODCF0_BIT 0
#define HAL_LL_ODCONF_ODCF1_BIT 1
#define HAL_LL_ODCONF_ODCF2_BIT 2
#define HAL_LL_ODCONF_ODCF3_BIT 3
#define HAL_LL_ODCONF_ODCF4_BIT 4
#define HAL_LL_ODCONF_ODCF5_BIT 5
#define HAL_LL_ODCONF_ODCF6_BIT 6
#define HAL_LL_ODCONF_ODCF7_BIT 7
#define HAL_LL_ODCON_BIT_COUNT 43

// EOF ODCON Register addresses and bit defines

// UART Register addresses
#define HAL_LL_U1BRGH_ADDRESS 0x2AFU
#define HAL_LL_U1BRGL_ADDRESS 0x2AEU
#define HAL_LL_U1CON0_ADDRESS 0x2ABU
#define HAL_LL_U1CON1_ADDRESS 0x2ACU
#define HAL_LL_U1CON2_ADDRESS 0x2ADU
#define HAL_LL_U1ERRIE_ADDRESS 0x2B3U
#define HAL_LL_U1ERRIR_ADDRESS 0x2B2U
#define HAL_LL_U1FIFO_ADDRESS 0x2B0U
#define HAL_LL_U1RXB_ADDRESS 0x2A1U
#define HAL_LL_U1TXB_ADDRESS 0x2A3U
#define HAL_LL_U2BRGH_ADDRESS 0x2C2U
#define HAL_LL_U2BRGL_ADDRESS 0x2C1U
#define HAL_LL_U2CON0_ADDRESS 0x2BEU
#define HAL_LL_U2CON1_ADDRESS 0x2BFU
#define HAL_LL_U2CON2_ADDRESS 0x2C0U
#define HAL_LL_U2ERRIE_ADDRESS 0x2C6U
#define HAL_LL_U2ERRIR_ADDRESS 0x2C5U
#define HAL_LL_U2FIFO_ADDRESS 0x2C3U
#define HAL_LL_U2RXB_ADDRESS 0x2B4U
#define HAL_LL_U2TXB_ADDRESS 0x2B6U
#define HAL_LL_U3BRGH_ADDRESS 0x2D5U
#define HAL_LL_U3BRGL_ADDRESS 0x2D4U
#define HAL_LL_U3CON0_ADDRESS 0x2D1U
#define HAL_LL_U3CON1_ADDRESS 0x2D2U
#define HAL_LL_U3CON2_ADDRESS 0x2D3U
#define HAL_LL_U3ERRIE_ADDRESS 0x2D9U
#define HAL_LL_U3ERRIR_ADDRESS 0x2D8U
#define HAL_LL_U3FIFO_ADDRESS 0x2D6U
#define HAL_LL_U3RXB_ADDRESS 0x2C7U
#define HAL_LL_U3TXB_ADDRESS 0x2C9U
#define HAL_LL_U4BRGH_ADDRESS 0x2E8U
#define HAL_LL_U4BRGL_ADDRESS 0x2E7U
#define HAL_LL_U4CON0_ADDRESS 0x2E4U
#define HAL_LL_U4CON1_ADDRESS 0x2E5U
#define HAL_LL_U4CON2_ADDRESS 0x2E6U
#define HAL_LL_U4ERRIE_ADDRESS 0x2ECU
#define HAL_LL_U4ERRIR_ADDRESS 0x2EBU
#define HAL_LL_U4FIFO_ADDRESS 0x2E9U
#define HAL_LL_U4RXB_ADDRESS 0x2DAU
#define HAL_LL_U4TXB_ADDRESS 0x2DCU
#define HAL_LL_U5BRGH_ADDRESS 0x2FBU
#define HAL_LL_U5BRGL_ADDRESS 0x2FAU
#define HAL_LL_U5CON0_ADDRESS 0x2F7U
#define HAL_LL_U5CON1_ADDRESS 0x2F8U
#define HAL_LL_U5CON2_ADDRESS 0x2F9U
#define HAL_LL_U5ERRIE_ADDRESS 0x2FFU
#define HAL_LL_U5ERRIR_ADDRESS 0x2FEU
#define HAL_LL_U5FIFO_ADDRESS 0x2FCU
#define HAL_LL_U5RXB_ADDRESS 0x2EDU
#define HAL_LL_U5TXB_ADDRESS 0x2EFU
// EOF UART Register addresses

// PPS Register addresses
#define HAL_LL_RA0PPS_ADDRESS 0x201U
#define HAL_LL_RA1PPS_ADDRESS 0x202U
#define HAL_LL_RA2PPS_ADDRESS 0x203U
#define HAL_LL_RA3PPS_ADDRESS 0x204U
#define HAL_LL_RA4PPS_ADDRESS 0x205U
#define HAL_LL_RA5PPS_ADDRESS 0x206U
#define HAL_LL_RA6PPS_ADDRESS 0x207U
#define HAL_LL_RA7PPS_ADDRESS 0x208U
#define HAL_LL_RB0PPS_ADDRESS 0x209U
#define HAL_LL_RB1PPS_ADDRESS 0x20AU
#define HAL_LL_RB2PPS_ADDRESS 0x20BU
#define HAL_LL_RB3PPS_ADDRESS 0x20CU
#define HAL_LL_RB4PPS_ADDRESS 0x20DU
#define HAL_LL_RB5PPS_ADDRESS 0x20EU
#define HAL_LL_RB6PPS_ADDRESS 0x20FU
#define HAL_LL_RB7PPS_ADDRESS 0x210U
#define HAL_LL_RC0PPS_ADDRESS 0x211U
#define HAL_LL_RC1PPS_ADDRESS 0x212U
#define HAL_LL_RC2PPS_ADDRESS 0x213U
#define HAL_LL_RC3PPS_ADDRESS 0x214U
#define HAL_LL_RC4PPS_ADDRESS 0x215U
#define HAL_LL_RC5PPS_ADDRESS 0x216U
#define HAL_LL_RC6PPS_ADDRESS 0x217U
#define HAL_LL_RC7PPS_ADDRESS 0x218U
#define HAL_LL_RD0PPS_ADDRESS 0x219U
#define HAL_LL_RD1PPS_ADDRESS 0x21AU
#define HAL_LL_RD2PPS_ADDRESS 0x21BU
#define HAL_LL_RD3PPS_ADDRESS 0x21CU
#define HAL_LL_RD4PPS_ADDRESS 0x21DU
#define HAL_LL_RD5PPS_ADDRESS 0x21EU
#define HAL_LL_RD6PPS_ADDRESS 0x21FU
#define HAL_LL_RD7PPS_ADDRESS 0x220U
#define HAL_LL_RE0PPS_ADDRESS 0x221U
#define HAL_LL_RE1PPS_ADDRESS 0x222U
#define HAL_LL_RE2PPS_ADDRESS 0x223U
#define HAL_LL_RF0PPS_ADDRESS 0x229U
#define HAL_LL_RF1PPS_ADDRESS 0x22AU
#define HAL_LL_RF2PPS_ADDRESS 0x22BU
#define HAL_LL_RF3PPS_ADDRESS 0x22CU
#define HAL_LL_RF4PPS_ADDRESS 0x22DU
#define HAL_LL_RF5PPS_ADDRESS 0x22EU
#define HAL_LL_RF6PPS_ADDRESS 0x22FU
#define HAL_LL_RF7PPS_ADDRESS 0x230U
#define HAL_LL_INT0PPS_ADDRESS 0x23EU
#define HAL_LL_INT1PPS_ADDRESS 0x23FU
#define HAL_LL_INT2PPS_ADDRESS 0x240U
#define HAL_LL_T0CKIPPS_ADDRESS 0x241U
#define HAL_LL_T1CKIPPS_ADDRESS 0x242U
#define HAL_LL_T1GPPS_ADDRESS 0x243U
#define HAL_LL_T3CKIPPS_ADDRESS 0x244U
#define HAL_LL_T3GPPS_ADDRESS 0x245U
#define HAL_LL_T5CKIPPS_ADDRESS 0x246U
#define HAL_LL_T5GPPS_ADDRESS 0x247U
#define HAL_LL_T2INPPS_ADDRESS 0x248U
#define HAL_LL_T4INPPS_ADDRESS 0x249U
#define HAL_LL_T6INPPS_ADDRESS 0x24AU
#define HAL_LL_CCP1PPS_ADDRESS 0x24FU
#define HAL_LL_CCP2PPS_ADDRESS 0x250U
#define HAL_LL_CCP3PPS_ADDRESS 0x251U
#define HAL_LL_PWM1ERSPPS_ADDRESS 0x253U
#define HAL_LL_PWM2ERSPPS_ADDRESS 0x254U
#define HAL_LL_PWM3ERSPPS_ADDRESS 0x255U
#define HAL_LL_PWMIN0PPS_ADDRESS 0x257U
#define HAL_LL_PWMIN1PPS_ADDRESS 0x258U
#define HAL_LL_SMT1WINPPS_ADDRESS 0x259U
#define HAL_LL_SMT1SIGPPS_ADDRESS 0x25AU
#define HAL_LL_CWG1PPS_ADDRESS 0x25BU
#define HAL_LL_CWG2PPS_ADDRESS 0x25CU
#define HAL_LL_CWG3PPS_ADDRESS 0x25DU
#define HAL_LL_MD1CARLPPS_ADDRESS 0x25EU
#define HAL_LL_MD1CARHPPS_ADDRESS 0x25FU
#define HAL_LL_MD1SRCPPS_ADDRESS 0x260U
#define HAL_LL_CLCIN0PPS_ADDRESS 0x261U
#define HAL_LL_CLCIN1PPS_ADDRESS 0x262U
#define HAL_LL_CLCIN2PPS_ADDRESS 0x263U
#define HAL_LL_CLCIN3PPS_ADDRESS 0x264U
#define HAL_LL_CLCIN4PPS_ADDRESS 0x265U
#define HAL_LL_CLCIN5PPS_ADDRESS 0x266U
#define HAL_LL_CLCIN6PPS_ADDRESS 0x267U
#define HAL_LL_CLCIN7PPS_ADDRESS 0x268U
#define HAL_LL_ADACTPPS_ADDRESS 0x269U
#define HAL_LL_SPI1SCKPPS_ADDRESS 0x26AU
#define HAL_LL_SPI1SDIPPS_ADDRESS 0x26BU
#define HAL_LL_SPI1SSPPS_ADDRESS 0x26CU
#define HAL_LL_SPI2SCKPPS_ADDRESS 0x26DU
#define HAL_LL_SPI2SDIPPS_ADDRESS 0x26EU
#define HAL_LL_SPI2SSPPS_ADDRESS 0x26FU
#define HAL_LL_I2C1SDAPPS_ADDRESS 0x270U
#define HAL_LL_I2C1SCLPPS_ADDRESS 0x271U
#define HAL_LL_U1RXPPS_ADDRESS 0x272U
#define HAL_LL_U1CTSPPS_ADDRESS 0x273U
#define HAL_LL_U2RXPPS_ADDRESS 0x274U
#define HAL_LL_U2CTSPPS_ADDRESS 0x275U
#define HAL_LL_U3RXPPS_ADDRESS 0x276U
#define HAL_LL_U3CTSPPS_ADDRESS 0x277U
#define HAL_LL_U4RXPPS_ADDRESS 0x278U
#define HAL_LL_U4CTSPPS_ADDRESS 0x279U
#define HAL_LL_U5RXPPS_ADDRESS 0x27AU
#define HAL_LL_U5CTSPPS_ADDRESS 0x27BU
// EOF PPS Register addresses

// Unlock Register addresses
#define HAL_LL_PPSLOCK_ADDRESS 0x200U
#define HAL_LL_OSCCON2_ADDRESS 0xAEU
// EOF Unlock Register addresses

// IRQ defines
#define HAL_LL_INTERRUPT_PRIORITY_LOW 0x0018
#define HAL_LL_INTERRUPT_PRIORITY_HIGH 0x0008
#define HAL_LL_INTERRUPT_PRIORITY HAL_LL_INTERRUPT_PRIORITY_HIGH
#define HAL_LL_IRQ_U1RXIE_BIT 33
#define HAL_LL_IRQ_U1TXIE_BIT 34
#define HAL_LL_IRQ_U2RXIE_BIT 64
#define HAL_LL_IRQ_U2TXIE_BIT 65
#define HAL_LL_IRQ_U3RXIE_BIT 72
#define HAL_LL_IRQ_U3TXIE_BIT 73
#define HAL_LL_IRQ_U4RXIE_BIT 96
#define HAL_LL_IRQ_U4TXIE_BIT 97
#define HAL_LL_IRQ_U5RXIE_BIT 104
#define HAL_LL_IRQ_U5TXIE_BIT 105
// EOF IRQ defines

#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END
