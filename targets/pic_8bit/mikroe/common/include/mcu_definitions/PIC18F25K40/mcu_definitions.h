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
 * @brief MCU specific pin and module definitions.
 */

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

#include "mcu_reg_addresses.h"
#include "can_definitions.h"

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


#define HAL_LL_ADRESL_ADDRESS 0xF63U
#define HAL_LL_FVRCON_ADDRESS 0xF31U
#define HAL_LL_ANSELC_ADDRESS 0xF21U
#define HAL_LL_ANSELB_ADDRESS 0xF19U
#define HAL_LL_ANSELA_ADDRESS 0xF11U
#define HAL_LL_ADREF_ADDRESS 0xF58U
#define HAL_LL_ADPCH_ADDRESS 0xF5FU
#define HAL_LL_ADCON3_ADDRESS 0xF5BU
#define HAL_LL_ADCON2_ADDRESS 0xF5AU
#define HAL_LL_ADCON1_ADDRESS 0xF59U
#define HAL_LL_ADCON0_ADDRESS 0xF60U

#define HAL_LL_AN_COUNT 24
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
#define UART_RX_RB0
#define UART_RX_RB1
#define UART_RX_RB2
#define UART_RX_RB3
#define UART_RX_RB4
#define UART_RX_RB5
#define UART_RX_RB6
#define UART_RX_RB7
#define UART_RX_RC0
#define UART_RX_RC1
#define UART_RX_RC2
#define UART_RX_RC3
#define UART_RX_RC4
#define UART_RX_RC5
#define UART_RX_RC6
#define UART_RX_RC7
#define UART_TX_RB0
#define UART_TX_RB1
#define UART_TX_RB2
#define UART_TX_RB3
#define UART_TX_RB4
#define UART_TX_RB5
#define UART_TX_RB6
#define UART_TX_RB7
#define UART_TX_RC0
#define UART_TX_RC1
#define UART_TX_RC2
#define UART_TX_RC3
#define UART_TX_RC4
#define UART_TX_RC5
#define UART_TX_RC6
#define UART_TX_RC7

#define UART_MODULE 1

#define UART_MODULE_COUNT 1

#define HAL_LL_UART_PPS_ENABLED true
//EOF UART

//SPI
#define SPI_MISO_RB0
#define SPI_MISO_RB1
#define SPI_MISO_RB2
#define SPI_MISO_RB3
#define SPI_MISO_RB4
#define SPI_MISO_RB5
#define SPI_MISO_RB6
#define SPI_MISO_RB7
#define SPI_MISO_RC0
#define SPI_MISO_RC1
#define SPI_MISO_RC2
#define SPI_MISO_RC3
#define SPI_MISO_RC4
#define SPI_MISO_RC5
#define SPI_MISO_RC6
#define SPI_MISO_RC7
#define SPI_MOSI_RB0
#define SPI_MOSI_RB1
#define SPI_MOSI_RB2
#define SPI_MOSI_RB3
#define SPI_MOSI_RB4
#define SPI_MOSI_RB5
#define SPI_MOSI_RB6
#define SPI_MOSI_RB7
#define SPI_MOSI_RC0
#define SPI_MOSI_RC1
#define SPI_MOSI_RC2
#define SPI_MOSI_RC3
#define SPI_MOSI_RC4
#define SPI_MOSI_RC5
#define SPI_MOSI_RC6
#define SPI_MOSI_RC7
#define SPI_SCK_RB0
#define SPI_SCK_RB1
#define SPI_SCK_RB2
#define SPI_SCK_RB3
#define SPI_SCK_RB4
#define SPI_SCK_RB5
#define SPI_SCK_RB6
#define SPI_SCK_RB7
#define SPI_SCK_RC0
#define SPI_SCK_RC1
#define SPI_SCK_RC2
#define SPI_SCK_RC3
#define SPI_SCK_RC4
#define SPI_SCK_RC5
#define SPI_SCK_RC6
#define SPI_SCK_RC7

#define SPI_MODULE 1

#define SPI_MODULE_COUNT 1

#define HAL_LL_SPI_PPS_ENABLED true
//EOF SPI

//PWM
#define PWM_CCP1_RB0
#define PWM_CCP1_RB1
#define PWM_CCP1_RB2
#define PWM_CCP1_RB3
#define PWM_CCP1_RB4
#define PWM_CCP1_RB5
#define PWM_CCP1_RB6
#define PWM_CCP1_RB7
#define PWM_CCP1_RC0
#define PWM_CCP1_RC1
#define PWM_CCP1_RC2
#define PWM_CCP1_RC3
#define PWM_CCP1_RC4
#define PWM_CCP1_RC5
#define PWM_CCP1_RC6
#define PWM_CCP1_RC7
#define PWM_CCP2_RB0
#define PWM_CCP2_RB1
#define PWM_CCP2_RB2
#define PWM_CCP2_RB3
#define PWM_CCP2_RB4
#define PWM_CCP2_RB5
#define PWM_CCP2_RB6
#define PWM_CCP2_RB7
#define PWM_CCP2_RC0
#define PWM_CCP2_RC1
#define PWM_CCP2_RC2
#define PWM_CCP2_RC3
#define PWM_CCP2_RC4
#define PWM_CCP2_RC5
#define PWM_CCP2_RC6
#define PWM_CCP2_RC7

#define CCP_MODULE_1 1
#define CCP_MODULE_2 2

#define CCP_MODULE_COUNT 2

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
#define __RE3_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_E_CN
#define PORT_COUNT (5)
#define PORT_SIZE (8)
//EOF IO

// GPIO Register addresses and offsets
#define LATA_BASE_ADDRESS 0xF83U
#define LATB_BASE_ADDRESS 0xF84U
#define LATC_BASE_ADDRESS 0xF85U
#define LATE_BASE_ADDRESS 0x00U
#define PORTA_BASE_ADDRESS 0xF8DU
#define PORTB_BASE_ADDRESS 0xF8EU
#define PORTC_BASE_ADDRESS 0xF8FU
#define PORTE_BASE_ADDRESS 0xF91U
#define TRISA_BASE_ADDRESS 0xF88U
#define TRISB_BASE_ADDRESS 0xF89U
#define TRISC_BASE_ADDRESS 0xF8AU
#define TRISE_BASE_ADDRESS 0x00U
// EOF GPIO Register addresses and offsets

// PMD Register addresses
#define HAL_LL_PIE0_ADDRESS 0xEC2U
#define HAL_LL_PIE1_ADDRESS 0xEC3U
#define HAL_LL_PIE2_ADDRESS 0xEC4U
#define HAL_LL_PIE3_ADDRESS 0xEC5U
#define HAL_LL_PIE4_ADDRESS 0xEC6U
#define HAL_LL_PIE5_ADDRESS 0xEC7U
#define HAL_LL_PIE6_ADDRESS 0xEC8U
#define HAL_LL_PIE7_ADDRESS 0xEC9U
#define HAL_LL_PIR0_ADDRESS 0xECAU
#define HAL_LL_PIR1_ADDRESS 0xECBU
#define HAL_LL_PIR2_ADDRESS 0xECCU
#define HAL_LL_PIR3_ADDRESS 0xECDU
#define HAL_LL_PIR4_ADDRESS 0xECEU
#define HAL_LL_PIR5_ADDRESS 0xECFU
#define HAL_LL_PIR6_ADDRESS 0xED0U
#define HAL_LL_PIR7_ADDRESS 0xED1U
#define HAL_LL_PMD0_ADDRESS 0xEE1U
#define HAL_LL_PMD1_ADDRESS 0xEE2U
#define HAL_LL_PMD2_ADDRESS 0xEE3U
#define HAL_LL_PMD3_ADDRESS 0xEE4U
#define HAL_LL_PMD4_ADDRESS 0xEE5U
#define HAL_LL_PMD5_ADDRESS 0xEE6U
// EOF PMD Register addresses

// I2C and SPI Register addresses
#define HAL_LL_OSCEN_ADDRESS 0xEDCU
#define HAL_LL_OSCSTAT_ADDRESS 0xEDBU
#define HAL_LL_SSP1ADD_ADDRESS 0xF93U
#define HAL_LL_SSP1BUF_ADDRESS 0xF92U
#define HAL_LL_SSP1CON1_ADDRESS 0xF96U
#define HAL_LL_SSP1CON2_ADDRESS 0xF97U
#define HAL_LL_SSP1STAT_ADDRESS 0xF95U
#define HAL_LL_SSPBUF_SPI_MASTER_MODULE_1 HAL_LL_SSP1BUF_ADDRESS
#define HAL_LL_SSPCON1_SPI_MASTER_MODULE_1 HAL_LL_SSP1CON1_ADDRESS
#define HAL_LL_SSPSTAT_SPI_MASTER_MODULE_1 HAL_LL_SSP1STAT_ADDRESS
// EOF I2C and SPI Register addresses

// PMD & PIR Register defines
#define HAL_LL_PIE_MODULE_UART1_ADDRESS HAL_LL_PIE3_ADDRESS
#define HAL_LL_PIR_MODULE_I2C1_ADDRESS HAL_LL_PIR3_ADDRESS
#define HAL_LL_PIR_MODULE_UART1_ADDRESS HAL_LL_PIR3_ADDRESS
#define HAL_LL_PIR_SSPIF_MODULE_1_BIT 0
#define HAL_LL_PMD_I2C1_ADDRESS HAL_LL_PMD4_ADDRESS
#define HAL_LL_PMD_SPI1_ADDRESS HAL_LL_PMD4_ADDRESS
#define HAL_LL_PMD_UART1_ADDRESS HAL_LL_PMD4_ADDRESS
#define HAL_LL_SSP1_MODULE_BIT 4
#define HAL_LL_UART1_MODULE_BIT 6
#define HAL_LL_UART1_RCIF_BIT 5
#define HAL_LL_UART1_TXIF_BIT 4
// EOF PMD & PIR Register defines

// TMR Register addresses
#define HAL_LL_CCP1CON_ADDRESS 0xFACU
#define HAL_LL_CCP2CON_ADDRESS 0xFA8U
#define HAL_LL_CCPTMRS_ADDRESS 0xFAEU
#define HAL_LL_CCPTMRS_CCP_MODULE_1 HAL_LL_CCPTMRS_ADDRESS
#define HAL_LL_CCP_MODULE_1_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_2 HAL_LL_CCPTMRS_ADDRESS
#define HAL_LL_CCP_MODULE_2_TIM2_ENABLE_BIT 0x00
#define HAL_LL_PMD_CCP_MODULE_1 HAL_LL_PMD3_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_1_ENABLE_BIT 0
#define HAL_LL_PMD_CCP_MODULE_2 HAL_LL_PMD3_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_2_ENABLE_BIT 1
#define HAL_LL_T0CON0_ADDRESS 0xFD5U
#define HAL_LL_T0CON1_ADDRESS 0xFD6U
#define HAL_LL_T1CON_ADDRESS 0xFCFU
#define HAL_LL_T2CLKCON_ADDRESS 0xFBFU
#define HAL_LL_T2CON_ADDRESS 0xFBDU
#define HAL_LL_PR2_ADDRESS 0xFBCU
#define HAL_LL_T3CON_ADDRESS 0xFC9U
#define HAL_LL_T4CLKCON_ADDRESS 0xFB9U
#define HAL_LL_T4CON_ADDRESS 0xFB7U
#define HAL_LL_PR4_ADDRESS 0xFB6U
#define HAL_LL_T5CON_ADDRESS 0xFC3U
#define HAL_LL_T6CLKCON_ADDRESS 0xFB3U
#define HAL_LL_T6CON_ADDRESS 0xFB1U
#define HAL_LL_PR6_ADDRESS 0xFB0U
#define HAL_LL_CCPR1L_ADDRESS 0xFAAU
#define HAL_LL_CCPR2L_ADDRESS 0xFA6U
// EOF TMR Register addresses

// ADC Register addresses and bit defines
#define HAL_LL_ADC_PMD_ADDRESS HAL_LL_PMD2_ADDRESS
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
#define HAL_LL_SLRCONA_ADDRESS 0xF0EU
#define HAL_LL_SLRCONB_ADDRESS 0xF16U
#define HAL_LL_SLRCONC_ADDRESS 0xF1EU
#define HAL_LL_SLRCON_BIT_COUNT 24

// EOF SLRCON Register addresses and bit defines

// ODCON Register addresses and bit defines
#define HAL_LL_ODCON_ALPHABETIC
#define HAL_LL_ODCONA_ADDRESS 0xF0FU
#define HAL_LL_ODCONA_ODCA0_BIT 0
#define HAL_LL_ODCONA_ODCA1_BIT 1
#define HAL_LL_ODCONA_ODCA2_BIT 2
#define HAL_LL_ODCONA_ODCA3_BIT 3
#define HAL_LL_ODCONA_ODCA4_BIT 4
#define HAL_LL_ODCONA_ODCA5_BIT 5
#define HAL_LL_ODCONA_ODCA6_BIT 6
#define HAL_LL_ODCONA_ODCA7_BIT 7
#define HAL_LL_ODCONB_ADDRESS 0xF17U
#define HAL_LL_ODCONB_ODCB0_BIT 0
#define HAL_LL_ODCONB_ODCB1_BIT 1
#define HAL_LL_ODCONB_ODCB2_BIT 2
#define HAL_LL_ODCONB_ODCB3_BIT 3
#define HAL_LL_ODCONB_ODCB4_BIT 4
#define HAL_LL_ODCONB_ODCB5_BIT 5
#define HAL_LL_ODCONB_ODCB6_BIT 6
#define HAL_LL_ODCONB_ODCB7_BIT 7
#define HAL_LL_ODCONC_ADDRESS 0xF1FU
#define HAL_LL_ODCONC_ODCC0_BIT 0
#define HAL_LL_ODCONC_ODCC1_BIT 1
#define HAL_LL_ODCONC_ODCC2_BIT 2
#define HAL_LL_ODCONC_ODCC3_BIT 3
#define HAL_LL_ODCONC_ODCC4_BIT 4
#define HAL_LL_ODCONC_ODCC5_BIT 5
#define HAL_LL_ODCONC_ODCC6_BIT 6
#define HAL_LL_ODCONC_ODCC7_BIT 7
#define HAL_LL_ODCON_BIT_COUNT 24

// EOF ODCON Register addresses and bit defines

// UART Register addresses
#define HAL_LL_BAUDCON1_ADDRESS 0xF9FU
#define HAL_LL_RCREG1_ADDRESS 0xF99U
#define HAL_LL_RCSTA1_ADDRESS 0xF9DU
#define HAL_LL_SPBRG1_ADDRESS 0xF9BU
#define HAL_LL_SPBRGH1_ADDRESS 0xF9CU
#define HAL_LL_TXREG1_ADDRESS 0xF9AU
#define HAL_LL_TXSTA1_ADDRESS 0xF9EU
// EOF UART Register addresses

// PPS Register addresses
#define HAL_LL_INT0PPS_ADDRESS 0xEA1U
#define HAL_LL_INT1PPS_ADDRESS 0xEA2U
#define HAL_LL_INT2PPS_ADDRESS 0xEA3U
#define HAL_LL_T0CKIPPS_ADDRESS 0xEA4U
#define HAL_LL_T1CKIPPS_ADDRESS 0xEA5U
#define HAL_LL_T1GPPS_ADDRESS 0xEA6U
#define HAL_LL_T3CKIPPS_ADDRESS 0xEA7U
#define HAL_LL_T3GPPS_ADDRESS 0xEA8U
#define HAL_LL_T5CKIPPS_ADDRESS 0xEA9U
#define HAL_LL_T5GPPS_ADDRESS 0xEAAU
#define HAL_LL_T2INPPS_ADDRESS 0xEABU
#define HAL_LL_T4INPPS_ADDRESS 0xEACU
#define HAL_LL_T6INPPS_ADDRESS 0xEADU
#define HAL_LL_ADACTPPS_ADDRESS 0xEAEU
#define HAL_LL_CCP1PPS_ADDRESS 0xEAFU
#define HAL_LL_CCP2PPS_ADDRESS 0xEB0U
#define HAL_LL_CWGINPPS_ADDRESS 0xEB1U
#define HAL_LL_MDCARLPPS_ADDRESS 0xEB2U
#define HAL_LL_MDCARHPPS_ADDRESS 0xEB3U
#define HAL_LL_MDSRCPPS_ADDRESS 0xEB4U
#define HAL_LL_RX1PPS_ADDRESS 0xEB5U
#define HAL_LL_CK1PPS_ADDRESS 0xEB6U
#define HAL_LL_SSP1CLKPPS_ADDRESS 0xEB7U
#define HAL_LL_SSP1DATPPS_ADDRESS 0xEB8U
#define HAL_LL_SSP1SSPPS_ADDRESS 0xEB9U
#define HAL_LL_RA0PPS_ADDRESS 0xEE7U
#define HAL_LL_RA1PPS_ADDRESS 0xEE8U
#define HAL_LL_RA2PPS_ADDRESS 0xEE9U
#define HAL_LL_RA3PPS_ADDRESS 0xEEAU
#define HAL_LL_RA4PPS_ADDRESS 0xEEBU
#define HAL_LL_RA5PPS_ADDRESS 0xEECU
#define HAL_LL_RA6PPS_ADDRESS 0xEEDU
#define HAL_LL_RA7PPS_ADDRESS 0xEEEU
#define HAL_LL_RB0PPS_ADDRESS 0xEEFU
#define HAL_LL_RB1PPS_ADDRESS 0xEF0U
#define HAL_LL_RB2PPS_ADDRESS 0xEF1U
#define HAL_LL_RB3PPS_ADDRESS 0xEF2U
#define HAL_LL_RB4PPS_ADDRESS 0xEF3U
#define HAL_LL_RB5PPS_ADDRESS 0xEF4U
#define HAL_LL_RB6PPS_ADDRESS 0xEF5U
#define HAL_LL_RB7PPS_ADDRESS 0xEF6U
#define HAL_LL_RC0PPS_ADDRESS 0xEF7U
#define HAL_LL_RC1PPS_ADDRESS 0xEF8U
#define HAL_LL_RC2PPS_ADDRESS 0xEF9U
#define HAL_LL_RC3PPS_ADDRESS 0xEFAU
#define HAL_LL_RC4PPS_ADDRESS 0xEFBU
#define HAL_LL_RC5PPS_ADDRESS 0xEFCU
#define HAL_LL_RC6PPS_ADDRESS 0xEFDU
#define HAL_LL_RC7PPS_ADDRESS 0xEFEU
// EOF PPS Register addresses

// Unlock Register addresses
#define HAL_LL_PPSLOCK_ADDRESS 0xEA0U
#define HAL_LL_OSCCON2_ADDRESS 0xED9U
// EOF Unlock Register addresses

// IRQ defines
#define HAL_LL_INTERRUPT_PRIORITY_LOW 0x0018
#define HAL_LL_INTERRUPT_PRIORITY_HIGH 0x0008
#define HAL_LL_INTERRUPT_PRIORITY HAL_LL_INTERRUPT_PRIORITY_HIGH
#define HAL_LL_IRQ_TXIE_BIT 28
#define HAL_LL_IRQ_RCIE_BIT 29
// EOF IRQ defines

#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END
