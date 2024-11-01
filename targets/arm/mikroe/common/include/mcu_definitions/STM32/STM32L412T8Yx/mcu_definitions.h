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
 * @brief MCU specific pin and module definitions for STM32L412T8Yx.
 */

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

#include "mcu_reg_addresses.h"
#include "dma_definitions.h"
#include "can_definitions.h"

#ifdef __cplusplus
extern "C"{
#endif

// ADC
#define ADC1_PA0_CH5
#define ADC1_PA1_CH6
#define ADC1_PA2_CH7
#define ADC1_PA3_CH8
#define ADC1_PA4_CH9
#define ADC1_PA5_CH10
#define ADC1_PA6_CH11
#define ADC1_PA7_CH12
#define ADC1_PB0_CH15
#define ADC1_PB1_CH16
#define ADC2_PA2_CH7
#define ADC2_PA3_CH8
#define ADC2_PA4_CH9
#define ADC2_PA5_CH10
#define ADC2_PA6_CH11
#define ADC2_PA7_CH12
#define ADC2_PB0_CH15
#define ADC2_PB1_CH16

#define ADC_MODULE_1 (1)
#define ADC_MODULE_2 (2)

#define ADC_MODULE_COUNT (2)
// EOF ADC

// CAN

// EOF CAN

// DMA
#define DMA_NUM_OF_CHANNELS (8)
#define DMA_NUM_OF_CHANNELS_FAMILY (8)
#define DMA_NUM_OF_MODULES (2)
#define DMA_NUM_OF_STREAMS (7)
#define DMA_NUM_OF_STREAMS_FAMILY (7)
// EOF DMA

// I2C
#define I2C1_SCL_PA9_AF4
#define I2C1_SCL_PB6_AF4
#define I2C1_SCL_PB8_AF4
#define I2C1_SDA_PA10_AF4
#define I2C1_SDA_PB7_AF4
#define I2C3_SCL_PA7_AF4
#define I2C3_SDA_PB4_AF4

#define I2C_MODULE_1 (1)
#define I2C_MODULE_3 (2)

#define I2C_MODULE_COUNT (2)
// EOF I2C

// U(S)ART
#define UART1_RX_PA10_AF7
#define UART1_RX_PB7_AF7
#define UART1_TX_PA9_AF7
#define UART1_TX_PB6_AF7
#define UART2_RX_PA15_AF3
#define UART2_RX_PA3_AF7
#define UART2_TX_PA2_AF7

#define UART_MODULE_1 (1)
#define UART_MODULE_2 (2)

#define UART_MODULE_COUNT (2)
// EOF U(S)ART

// SPI
#define SPI1_MISO_PA11_AF5
#define SPI1_MISO_PA6_AF5
#define SPI1_MISO_PB4_AF5
#define SPI1_MOSI_PA12_AF5
#define SPI1_MOSI_PA7_AF5
#define SPI1_MOSI_PB5_AF5
#define SPI1_SCK_PA1_AF5
#define SPI1_SCK_PA5_AF5
#define SPI1_SCK_PB3_AF5

#define SPI_MODULE_1 (1)

#define SPI_MODULE_COUNT (1)
// EOF SPI

// TIM
#define TIM15_BKIN_PA9_AF14
#define TIM15_CH1N_PA1_AF14
#define TIM15_CH1_PA2_AF14
#define TIM15_CH2_PA3_AF14
#define TIM16_BKIN_PB5_AF14
#define TIM16_CH1N_PB6_AF14
#define TIM16_CH1_PA6_AF14
#define TIM16_CH1_PB8_AF14
#define TIM1_BKIN2_COMP1_PA11_AF12
#define TIM1_BKIN2_PA11_AF2
#define TIM1_BKIN_PA6_AF1
#define TIM1_CH1N_PA7_AF1
#define TIM1_CH1_PA8_AF1
#define TIM1_CH2N_PB0_AF1
#define TIM1_CH2_PA9_AF1
#define TIM1_CH3N_PB1_AF1
#define TIM1_CH3_PA10_AF1
#define TIM1_CH4_PA11_AF1
#define TIM1_ETR_PA12_AF1
#define TIM2_CH1_PA0_AF1
#define TIM2_CH1_PA15_AF1
#define TIM2_CH1_PA5_AF1
#define TIM2_CH2_PA1_AF1
#define TIM2_CH2_PB3_AF1
#define TIM2_CH3_PA2_AF1
#define TIM2_CH3_PB10_AF1
#define TIM2_CH4_PA3_AF1
#define TIM2_ETR_PA0_AF14
#define TIM2_ETR_PA15_AF2
#define TIM2_ETR_PA5_AF2

#define TIM_MODULE_1 (1)
#define TIM_MODULE_2 (2)
#define TIM_MODULE_15 (3)
#define TIM_MODULE_16 (4)

#define TIM_MODULE_COUNT (4)

#define TIM1_BUS (2)
#define TIM15_BUS (2)
#define TIM16_BUS (2)
#define TIM2_BUS (1)
// EOF TIM

// GPIO
#define __PA0_CN
#define __PA1_CN
#define __PA10_CN
#define __PA11_CN
#define __PA12_CN
#define __PA13_CN
#define __PA14_CN
#define __PA15_CN
#define __PA2_CN
#define __PA3_CN
#define __PA4_CN
#define __PA5_CN
#define __PA6_CN
#define __PA7_CN
#define __PA8_CN
#define __PA9_CN
#define __PB0_CN
#define __PB1_CN
#define __PB10_CN
#define __PB2_CN
#define __PB3_CN
#define __PB4_CN
#define __PB5_CN
#define __PB6_CN
#define __PB7_CN
#define __PB8_CN
#define __PC14_CN
#define __PC15_CN
#define __PH3_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_H_CN

#define PORT_COUNT (4)
#define PORT_SIZE (16)
// EOF GPIO

// IVT_TABLE
#define UART1_IVT (37)
#define UART1_NVIC (53)
#define UART2_IVT (38)
#define UART2_NVIC (54)
// EOF IVT_TABLE

#ifdef __cplusplus
}
#endif

#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END
