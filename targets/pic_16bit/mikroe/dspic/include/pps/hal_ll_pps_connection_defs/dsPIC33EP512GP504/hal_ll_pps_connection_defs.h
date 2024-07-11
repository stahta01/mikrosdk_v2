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
 * @file  hal_ll_pps_connection_defs.h
 * @brief This file contains pps maps per chip for LOW LEVEL HAL PPS
 *        implementation for dsPIC33EP512GP504.
 */

#ifndef _HAL_LL_PPS_CONNECTION_DEFS_H_
#define _HAL_LL_PPS_CONNECTION_DEFS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "hal_ll_pps_struct_def.h"

/**
 * NOTE:
 * This macro is used for pins that do not have adequate PPS
 * registers according to datasheet.
 */
#define INVALID_PPS_ADDRESS (0) // TODO

// -------------------------------------------------------------

/*!< @brief PPS INPUT FUNCTIONS */
static const hal_ll_pps_pin_map_t hal_ll_pps_input_map[] =
{
    #ifdef UART1_RX_RA4_RP20
    {PIN_4, PORT_A, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 20, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RA8_RPI24
    {PIN_8, PORT_A, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 24, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RA9_RPI25
    {PIN_9, PORT_A, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 25, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB0_RPI32
    {PIN_0, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 32, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB1_RPI33
    {PIN_1, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 33, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB10_RP42
    {PIN_10, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 42, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB11_RP43
    {PIN_11, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 43, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB12_RPI44
    {PIN_12, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 44, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB13_RPI45
    {PIN_13, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 45, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB14_RPI46
    {PIN_14, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 46, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB15_RPI47
    {PIN_15, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 47, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB2_RPI34
    {PIN_2, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 34, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB3_RP35
    {PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 35, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB4_RP36
    {PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 36, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB5_RP37
    {PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 37, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB6_RP38
    {PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 38, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB7_RP39
    {PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 39, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB8_RP40
    {PIN_8, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 40, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RB9_RP41
    {PIN_9, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 41, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RC3_RPI51
    {PIN_3, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 51, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RC4_RPI52
    {PIN_4, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 52, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RC5_RPI53
    {PIN_5, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 53, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RC6_RP54
    {PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 54, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RC7_RP55
    {PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 55, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RC8_RP56
    {PIN_8, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 56, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART1_RX_RC9_RP57
    {PIN_9, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 57, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPINR18_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RA4_RP20
    {PIN_4, PORT_A, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 20, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RA8_RPI24
    {PIN_8, PORT_A, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 24, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RA9_RPI25
    {PIN_9, PORT_A, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 25, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB0_RPI32
    {PIN_0, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 32, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB1_RPI33
    {PIN_1, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 33, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB10_RP42
    {PIN_10, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 42, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB11_RP43
    {PIN_11, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 43, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB12_RPI44
    {PIN_12, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 44, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB13_RPI45
    {PIN_13, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 45, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB14_RPI46
    {PIN_14, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 46, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB15_RPI47
    {PIN_15, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 47, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB2_RPI34
    {PIN_2, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 34, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB3_RP35
    {PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 35, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB4_RP36
    {PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 36, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB5_RP37
    {PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 37, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB6_RP38
    {PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 38, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB7_RP39
    {PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 39, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB8_RP40
    {PIN_8, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 40, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RB9_RP41
    {PIN_9, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 41, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RC3_RPI51
    {PIN_3, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 51, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RC4_RPI52
    {PIN_4, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 52, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RC5_RPI53
    {PIN_5, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 53, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RC6_RP54
    {PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 54, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RC7_RP55
    {PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 55, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RC8_RP56
    {PIN_8, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 56, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef UART2_RX_RC9_RP57
    {PIN_9, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 57, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR19_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RA4_RP20
    {PIN_4, PORT_A, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 20, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RA8_RPI24
    {PIN_8, PORT_A, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 24, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RA9_RPI25
    {PIN_9, PORT_A, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 25, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB0_RPI32
    {PIN_0, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 32, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB1_RPI33
    {PIN_1, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 33, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB10_RP42
    {PIN_10, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 42, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB11_RP43
    {PIN_11, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 43, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB12_RPI44
    {PIN_12, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 44, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB13_RPI45
    {PIN_13, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 45, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB14_RPI46
    {PIN_14, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 46, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB15_RPI47
    {PIN_15, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 47, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB2_RPI34
    {PIN_2, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 34, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB3_RP35
    {PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 35, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB4_RP36
    {PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 36, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB5_RP37
    {PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 37, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB6_RP38
    {PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 38, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB7_RP39
    {PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 39, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB8_RP40
    {PIN_8, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 40, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RB9_RP41
    {PIN_9, PORT_B, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 41, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RC3_RPI51
    {PIN_3, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 51, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RC4_RPI52
    {PIN_4, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 52, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RC5_RPI53
    {PIN_5, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 53, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RC6_RP54
    {PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 54, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RC7_RP55
    {PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 55, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RC8_RP56
    {PIN_8, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 56, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif
    #ifdef SPI2_MISO_RC9_RP57
    {PIN_9, PORT_C, HAL_LL_GPIO_DIGITAL_INPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MISO, 57, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPINR22_REG_ADDRESS},
    #endif

    { HAL_LL_PIN_NC, HAL_LL_PORT_NC, HAL_LL_PIN_NC, HAL_LL_PIN_NC, HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_MODULE_ERROR }
};

/*!< @brief PPS OUTPUT FUNCTIONS */
static const hal_ll_pps_pin_map_t hal_ll_pps_output_map[] =
{
    #ifdef UART1_TX_RA4_RP20
    {PIN_4, PORT_A, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0001, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPOR0_REG_ADDRESS},
    #endif
    #ifdef UART1_TX_RB10_RP42
    {PIN_10, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0001, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPOR4_REG_ADDRESS},
    #endif
    #ifdef UART1_TX_RB11_RP43
    {PIN_11, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, (0x0001ul << 8), HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPOR4_REG_ADDRESS},
    #endif
    #ifdef UART1_TX_RB3_RP35
    {PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, (0x0001ul << 8), HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPOR0_REG_ADDRESS},
    #endif
    #ifdef UART1_TX_RB4_RP36
    {PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0001, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPOR1_REG_ADDRESS},
    #endif
    #ifdef UART1_TX_RB5_RP37
    {PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, (0x0001ul << 8), HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPOR1_REG_ADDRESS},
    #endif
    #ifdef UART1_TX_RB6_RP38
    {PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0001, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPOR2_REG_ADDRESS},
    #endif
    #ifdef UART1_TX_RB7_RP39
    {PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, (0x0001ul << 8), HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPOR2_REG_ADDRESS},
    #endif
    #ifdef UART1_TX_RB8_RP40
    {PIN_8, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0001, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPOR3_REG_ADDRESS},
    #endif
    #ifdef UART1_TX_RB9_RP41
    {PIN_9, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, (0x0001ul << 8), HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPOR3_REG_ADDRESS},
    #endif
    #ifdef UART1_TX_RC6_RP54
    {PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0001, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPOR5_REG_ADDRESS},
    #endif
    #ifdef UART1_TX_RC7_RP55
    {PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, (0x0001ul << 8), HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPOR5_REG_ADDRESS},
    #endif
    #ifdef UART1_TX_RC8_RP56
    {PIN_8, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0001, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPOR6_REG_ADDRESS},
    #endif
    #ifdef UART1_TX_RC9_RP57
    {PIN_9, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, (0x0001ul << 8), HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPOR6_REG_ADDRESS},
    #endif
    #ifdef UART2_TX_RA4_RP20
    {PIN_4, PORT_A, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0003, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR0_REG_ADDRESS},
    #endif
    #ifdef UART2_TX_RB10_RP42
    {PIN_10, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0003, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR4_REG_ADDRESS},
    #endif
    #ifdef UART2_TX_RB11_RP43
    {PIN_11, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, (0x0003ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR4_REG_ADDRESS},
    #endif
    #ifdef UART2_TX_RB3_RP35
    {PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, (0x0003ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR0_REG_ADDRESS},
    #endif
    #ifdef UART2_TX_RB4_RP36
    {PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0003, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR1_REG_ADDRESS},
    #endif
    #ifdef UART2_TX_RB5_RP37
    {PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, (0x0003ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR1_REG_ADDRESS},
    #endif
    #ifdef UART2_TX_RB6_RP38
    {PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0003, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR2_REG_ADDRESS},
    #endif
    #ifdef UART2_TX_RB7_RP39
    {PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, (0x0003ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR2_REG_ADDRESS},
    #endif
    #ifdef UART2_TX_RB8_RP40
    {PIN_8, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0003, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR3_REG_ADDRESS},
    #endif
    #ifdef UART2_TX_RB9_RP41
    {PIN_9, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, (0x0003ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR3_REG_ADDRESS},
    #endif
    #ifdef UART2_TX_RC6_RP54
    {PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0003, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR5_REG_ADDRESS},
    #endif
    #ifdef UART2_TX_RC7_RP55
    {PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, (0x0003ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR5_REG_ADDRESS},
    #endif
    #ifdef UART2_TX_RC8_RP56
    {PIN_8, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, 0x0003, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR6_REG_ADDRESS},
    #endif
    #ifdef UART2_TX_RC9_RP57
    {PIN_9, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_UART, (0x0003ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR6_REG_ADDRESS},
    #endif
    #ifdef SPI2_MOSI_RA4_RP20
    {PIN_4, PORT_A, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0008, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR0_REG_ADDRESS},
    #endif
    #ifdef SPI2_MOSI_RB10_RP42
    {PIN_10, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0008, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR4_REG_ADDRESS},
    #endif
    #ifdef SPI2_MOSI_RB11_RP43
    {PIN_11, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, (0x0008ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR4_REG_ADDRESS},
    #endif
    #ifdef SPI2_MOSI_RB3_RP35
    {PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, (0x0008ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR0_REG_ADDRESS},
    #endif
    #ifdef SPI2_MOSI_RB4_RP36
    {PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0008, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR1_REG_ADDRESS},
    #endif
    #ifdef SPI2_MOSI_RB5_RP37
    {PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, (0x0008ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR1_REG_ADDRESS},
    #endif
    #ifdef SPI2_MOSI_RB6_RP38
    {PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0008, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR2_REG_ADDRESS},
    #endif
    #ifdef SPI2_MOSI_RB7_RP39
    {PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, (0x0008ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR2_REG_ADDRESS},
    #endif
    #ifdef SPI2_MOSI_RB8_RP40
    {PIN_8, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0008, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR3_REG_ADDRESS},
    #endif
    #ifdef SPI2_MOSI_RB9_RP41
    {PIN_9, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, (0x0008ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR3_REG_ADDRESS},
    #endif
    #ifdef SPI2_MOSI_RC6_RP54
    {PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0008, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR5_REG_ADDRESS},
    #endif
    #ifdef SPI2_MOSI_RC7_RP55
    {PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, (0x0008ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR5_REG_ADDRESS},
    #endif
    #ifdef SPI2_MOSI_RC8_RP56
    {PIN_8, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, 0x0008, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR6_REG_ADDRESS},
    #endif
    #ifdef SPI2_MOSI_RC9_RP57
    {PIN_9, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_MOSI, (0x0008ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR6_REG_ADDRESS},
    #endif
    #ifdef SPI2_SCK_RA4_RP20
    {PIN_4, PORT_A, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0009, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR0_REG_ADDRESS},
    #endif
    #ifdef SPI2_SCK_RB10_RP42
    {PIN_10, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0009, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR4_REG_ADDRESS},
    #endif
    #ifdef SPI2_SCK_RB11_RP43
    {PIN_11, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, (0x0009ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR4_REG_ADDRESS},
    #endif
    #ifdef SPI2_SCK_RB3_RP35
    {PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, (0x0009ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR0_REG_ADDRESS},
    #endif
    #ifdef SPI2_SCK_RB4_RP36
    {PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0009, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR1_REG_ADDRESS},
    #endif
    #ifdef SPI2_SCK_RB5_RP37
    {PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, (0x0009ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR1_REG_ADDRESS},
    #endif
    #ifdef SPI2_SCK_RB6_RP38
    {PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0009, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR2_REG_ADDRESS},
    #endif
    #ifdef SPI2_SCK_RB7_RP39
    {PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, (0x0009ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR2_REG_ADDRESS},
    #endif
    #ifdef SPI2_SCK_RB8_RP40
    {PIN_8, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0009, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR3_REG_ADDRESS},
    #endif
    #ifdef SPI2_SCK_RB9_RP41
    {PIN_9, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, (0x0009ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR3_REG_ADDRESS},
    #endif
    #ifdef SPI2_SCK_RC6_RP54
    {PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0009, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR5_REG_ADDRESS},
    #endif
    #ifdef SPI2_SCK_RC7_RP55
    {PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, (0x0009ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR5_REG_ADDRESS},
    #endif
    #ifdef SPI2_SCK_RC8_RP56
    {PIN_8, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, 0x0009, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR6_REG_ADDRESS},
    #endif
    #ifdef SPI2_SCK_RC9_RP57
    {PIN_9, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_SPI_SCK, (0x0009ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR6_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP1_OC1_RA4_RP20
    {PIN_4, PORT_A, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x0010, HAL_LL_PPS_MODULE_INDEX_1, HAL_LL_RPOR0_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP2_OC1_RB11_RP43
    {PIN_11, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, (0x0010ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR4_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP2_OC1_RB9_RP41
    {PIN_9, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, (0x0010ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR3_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP2_OC2_RB3_RP35
    {PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, (0x0011ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR0_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP2_OC2_RB4_RP36
    {PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x0011, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR1_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP2_OC2_RB7_RP39
    {PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, (0x0011ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR2_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP2_OC3_RB6_RP38
    {PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x0012, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR2_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP2_OC4_RB10_RP42
    {PIN_10, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x0013, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR4_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP2_OC4_RB5_RP37
    {PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, (0x0013ul << 8), HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR1_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP2_OC4_RB8_RP40
    {PIN_8, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x0013, HAL_LL_PPS_MODULE_INDEX_2, HAL_LL_RPOR3_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP3_OC1_RC6_RP54
    {PIN_6, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x0010, HAL_LL_PPS_MODULE_INDEX_3, HAL_LL_RPOR5_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP3_OC2_RC7_RP55
    {PIN_7, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, (0x0011ul << 8), HAL_LL_PPS_MODULE_INDEX_3, HAL_LL_RPOR5_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP3_OC3_RC8_RP56
    {PIN_8, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x0012, HAL_LL_PPS_MODULE_INDEX_3, HAL_LL_RPOR6_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP3_OC4_RC9_RP57
    {PIN_9, PORT_C, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, (0x0013ul << 8), HAL_LL_PPS_MODULE_INDEX_3, HAL_LL_RPOR6_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP4_OC1_RA4_RP20
    {PIN_4, PORT_A, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x0010, HAL_LL_PPS_MODULE_INDEX_4, HAL_LL_RPOR0_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP5_OC1_RB11_RP43
    {PIN_11, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, (0x0010ul << 8), HAL_LL_PPS_MODULE_INDEX_5, HAL_LL_RPOR4_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP5_OC1_RB9_RP41
    {PIN_9, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, (0x0010ul << 8), HAL_LL_PPS_MODULE_INDEX_5, HAL_LL_RPOR3_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP5_OC2_RB3_RP35
    {PIN_3, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, (0x0011ul << 8), HAL_LL_PPS_MODULE_INDEX_5, HAL_LL_RPOR0_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP5_OC2_RB4_RP36
    {PIN_4, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x0011, HAL_LL_PPS_MODULE_INDEX_5, HAL_LL_RPOR1_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP5_OC2_RB7_RP39
    {PIN_7, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, (0x0011ul << 8), HAL_LL_PPS_MODULE_INDEX_5, HAL_LL_RPOR2_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP5_OC3_RB6_RP38
    {PIN_6, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x0012, HAL_LL_PPS_MODULE_INDEX_5, HAL_LL_RPOR2_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP5_OC4_RB10_RP42
    {PIN_10, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x0013, HAL_LL_PPS_MODULE_INDEX_5, HAL_LL_RPOR4_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP5_OC4_RB5_RP37
    {PIN_5, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, (0x0013ul << 8), HAL_LL_PPS_MODULE_INDEX_5, HAL_LL_RPOR1_REG_ADDRESS},
    #endif
    #ifdef PWM_CCP5_OC4_RB8_RP40
    {PIN_8, PORT_B, HAL_LL_GPIO_DIGITAL_OUTPUT, HAL_LL_PPS_FUNCTIONALITY_PWM, 0x0013, HAL_LL_PPS_MODULE_INDEX_5, HAL_LL_RPOR3_REG_ADDRESS},
    #endif

    { HAL_LL_PIN_NC, HAL_LL_PORT_NC, HAL_LL_PIN_NC, HAL_LL_PIN_NC, HAL_LL_PIN_NC, HAL_LL_MODULE_ERROR, HAL_LL_MODULE_ERROR }
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_PPS_CONNECTION_DEFS_H_
// ------------------------------------------------------------------------- END
