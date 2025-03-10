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
 * @file  board.h
 * @brief Main board pin mapping.
 */

#ifndef _BOARD_H_
#define _BOARD_H_

#ifdef __cplusplus
extern "C"{
#endif

#include "hal_target.h"
#include "shield.h"

// Hardware revision number
#define BOARD_REV_MAJOR (1)
#define BOARD_REV_MINOR (00)

#define BOARD_NAME "Mikromedia for dsPIC33EP"

/// Mapping
#define TFT_RST  GPIO_PC1
#define TFT_CS   GPIO_PC3
#define TFT_RS   GPIO_PB15
#define TFT_RD   GPIO_PD12
#define TFT_WR   GPIO_PD13
#define TFT_BLED GPIO_PD7
#define TFT_D0   GPIO_PA0
#define TFT_D1   GPIO_PA1
#define TFT_D2   GPIO_PA2
#define TFT_D3   GPIO_PA3
#define TFT_D4   GPIO_PA4
#define TFT_D5   GPIO_PA5
#define TFT_D6   GPIO_PA6
#define TFT_D7   GPIO_PA7
#define TFT_D8   GPIO_PE0
#define TFT_D9   GPIO_PE1
#define TFT_D10  GPIO_PE2
#define TFT_D11  GPIO_PE3
#define TFT_D12  GPIO_PE4
#define TFT_D13  GPIO_PE5
#define TFT_D14  GPIO_PE6
#define TFT_D15  GPIO_PE7

#define TFT_BPWM TFT_BLED

#define LCD_TFT_8BIT_CH0 GPIO_PORT_A
#define TFT_8BIT_DATA_PORT_CH0 LCD_TFT_8BIT_CH0
#define LCD_TFT_8BIT_CH0_MASK 0x00FF
#define TFT_8BIT_DATA_PORT_CH0_MASK LCD_TFT_8BIT_CH0_MASK

#define LCD_TFT_16BIT_CH0 GPIO_PORT_A
#define TFT_16BIT_DATA_PORT_CH0 LCD_TFT_16BIT_CH0
#define LCD_TFT_16BIT_CH0_MASK 0x00FF
#define TFT_16BIT_DATA_PORT_CH0_MASK LCD_TFT_16BIT_CH0_MASK

#define LCD_TFT_16BIT_CH1 GPIO_PORT_E
#define TFT_16BIT_DATA_PORT_CH1 LCD_TFT_16BIT_CH1
#define LCD_TFT_16BIT_CH1_MASK 0xFF00
#define TFT_16BIT_DATA_PORT_CH1_MASK LCD_TFT_16BIT_CH1_MASK

#define TP_MIKROE_XL GPIO_PB13
#define TP_MIKROE_XR GPIO_PB11
#define TP_MIKROE_YU GPIO_PB12
#define TP_MIKROE_YD GPIO_PB10

// Default TP_MIKROE touch panel calibration values.
#define TP_MIKROE_CALIBRATION_XMIN 92
#define TP_MIKROE_CALIBRATION_XMAX 882
#define TP_MIKROE_CALIBRATION_YMIN 132
#define TP_MIKROE_CALIBRATION_YMAX 770

#define TP_MIKROE_PRESSURE_THRESHOLD_LOWER (70)
#define TP_MIKROE_PRESSURE_THRESHOLD_UPPER (1000)

// not needed

#define USB_SW_ID HAL_PIN_NC
#define USB_VBUS HAL_PIN_NC
#define USB_N HAL_PIN_NC
#define USB_P HAL_PIN_NC
#define USB_PSW HAL_PIN_NC

#define SD_CS HAL_PIN_NC
#define SD_MOSI HAL_PIN_NC
#define SD_SCK HAL_PIN_NC
#define SD_MISO HAL_PIN_NC
#define SD_CD HAL_PIN_NC

#define FLASH_CS HAL_PIN_NC
#define FLASH_MISO HAL_PIN_NC
#define FLASH_SCK HAL_PIN_NC
#define FLASH_MOSI HAL_PIN_NC

#define MP3_SCLK HAL_PIN_NC
#define MP3_SIN HAL_PIN_NC
#define MP3_SOUT HAL_PIN_NC
#define MP3_CS HAL_PIN_NC
#define MP3_RST HAL_PIN_NC
#define MP3_DREQ HAL_PIN_NC
#define MP3_DCS HAL_PIN_NC

#define ALS_SDA HAL_PIN_NC
#define ALS_SCL HAL_PIN_NC

#define ACCEL_SDA HAL_PIN_NC
#define ACCEL_SCL HAL_PIN_NC
#define ACCEL_INT HAL_PIN_NC

#define BUZZER HAL_PIN_NC

#define IR_TX HAL_PIN_NC

#define LED_R HAL_PIN_NC
#define LED_G HAL_PIN_NC
#define LED_B HAL_PIN_NC

#define TEMP_SENS HAL_PIN_NC

#define CAN_RX HAL_PIN_NC
#define CAN_TX HAL_PIN_NC

#define POWER_BAT_SENSE HAL_PIN_NC
#define POWER_STATUS HAL_PIN_NC
#define POWER_DC_DETECT HAL_PIN_NC

#define USB_UART_TX GPIO_PF3
#define USB_UART_RX GPIO_PF2

#define HEADER_CONNECTOR_HDR1_PIN1 HAL_PIN_NC   // VCC SYS
#define HEADER_CONNECTOR_HDR1_PIN2 HAL_PIN_NC   // VDD
#define HEADER_CONNECTOR_HDR1_PIN3 GPIO_PB0
#define HEADER_CONNECTOR_HDR1_PIN4 GPIO_PB1
#define HEADER_CONNECTOR_HDR1_PIN5 GPIO_PB2
#define HEADER_CONNECTOR_HDR1_PIN6 GPIO_PB3
#define HEADER_CONNECTOR_HDR1_PIN7 GPIO_PB4
#define HEADER_CONNECTOR_HDR1_PIN8 GPIO_PB5
#define HEADER_CONNECTOR_HDR1_PIN9 GPIO_PB9
#define HEADER_CONNECTOR_HDR1_PIN10 GPIO_PD6
#define HEADER_CONNECTOR_HDR1_PIN11 GPIO_PD7
#define HEADER_CONNECTOR_HDR1_PIN12 GPIO_PD12
#define HEADER_CONNECTOR_HDR1_PIN13 GPIO_PD13
#define HEADER_CONNECTOR_HDR1_PIN14 GPIO_PA14
#define HEADER_CONNECTOR_HDR1_PIN15 GPIO_PA15
#define HEADER_CONNECTOR_HDR1_PIN16 GPIO_PD10
#define HEADER_CONNECTOR_HDR1_PIN17 GPIO_PC4
#define HEADER_CONNECTOR_HDR1_PIN18 GPIO_PD0
#define HEADER_CONNECTOR_HDR1_PIN19 GPIO_PB14
#define HEADER_CONNECTOR_HDR1_PIN20 GPIO_PG13
#define HEADER_CONNECTOR_HDR1_PIN21 GPIO_PG14
#define HEADER_CONNECTOR_HDR1_PIN22 GPIO_PG6
#define HEADER_CONNECTOR_HDR1_PIN23 GPIO_PG7
#define HEADER_CONNECTOR_HDR1_PIN24 GPIO_PG8
#define HEADER_CONNECTOR_HDR1_PIN25 HAL_PIN_NC   // VCC 3V3
#define HEADER_CONNECTOR_HDR1_PIN26 HAL_PIN_NC   // VDD

// Specifically defined in schematic
#define HEADER_CONNECTOR_HDR2_PIN1    // RST
#define HEADER_CONNECTOR_HDR2_PIN2    // VDD
#define HEADER_CONNECTOR_HDR2_PIN3    // PHONE JACK L
#define HEADER_CONNECTOR_HDR2_PIN4    // PHONE JACK R
#define HEADER_CONNECTOR_HDR2_PIN5 GPIO_PF2
#define HEADER_CONNECTOR_HDR2_PIN6 GPIO_PF4
#define HEADER_CONNECTOR_HDR2_PIN7 GPIO_PF5
#define HEADER_CONNECTOR_HDR2_PIN8 GPIO_PF8
#define HEADER_CONNECTOR_HDR2_PIN9 GPIO_PF13
#define HEADER_CONNECTOR_HDR2_PIN10 GPIO_PA0
#define HEADER_CONNECTOR_HDR2_PIN11 GPIO_PA1
#define HEADER_CONNECTOR_HDR2_PIN12 GPIO_PE8
#define HEADER_CONNECTOR_HDR2_PIN13 GPIO_PE9
#define HEADER_CONNECTOR_HDR2_PIN14 GPIO_PD8
#define HEADER_CONNECTOR_HDR2_PIN15 GPIO_PD9
#define HEADER_CONNECTOR_HDR2_PIN16 GPIO_PD11
#define HEADER_CONNECTOR_HDR2_PIN17 GPIO_PG0
#define HEADER_CONNECTOR_HDR2_PIN18 GPIO_PG1
#define HEADER_CONNECTOR_HDR2_PIN19 GPIO_PF0
#define HEADER_CONNECTOR_HDR2_PIN20 GPIO_PF1
#define HEADER_CONNECTOR_HDR2_PIN21 GPIO_PD3
#define HEADER_CONNECTOR_HDR2_PIN22 GPIO_PD1
#define HEADER_CONNECTOR_HDR2_PIN23 GPIO_PA2
#define HEADER_CONNECTOR_HDR2_PIN24 GPIO_PA3
#define HEADER_CONNECTOR_HDR2_PIN25 HAL_PIN_NC   // VCC 3V3
#define HEADER_CONNECTOR_HDR2_PIN26 HAL_PIN_NC   // VDD

#define HEADER_CONNECTOR_HDR2_PIN27    // RST
#define HEADER_CONNECTOR_HDR2_PIN28 HAL_PIN_NC   // VDD
#define HEADER_CONNECTOR_HDR2_PIN29    // PHONE JACK L
#define HEADER_CONNECTOR_HDR2_PIN30    // PHONE JACK R
#define HEADER_CONNECTOR_HDR2_PIN31 GPIO_PD0
#define HEADER_CONNECTOR_HDR2_PIN32 GPIO_PD1
#define HEADER_CONNECTOR_HDR2_PIN33 GPIO_PD2
#define HEADER_CONNECTOR_HDR2_PIN34 GPIO_PD3
#define HEADER_CONNECTOR_HDR2_PIN35 GPIO_PD4
#define HEADER_CONNECTOR_HDR2_PIN36 GPIO_PD5
#define HEADER_CONNECTOR_HDR2_PIN37 GPIO_PD8
#define HEADER_CONNECTOR_HDR2_PIN38 GPIO_PD9
#define HEADER_CONNECTOR_HDR2_PIN39 GPIO_PD14
#define HEADER_CONNECTOR_HDR2_PIN40 GPIO_PD15
#define HEADER_CONNECTOR_HDR2_PIN41 GPIO_PD6
#define HEADER_CONNECTOR_HDR2_PIN42 GPIO_PC2
#define HEADER_CONNECTOR_HDR2_PIN43 GPIO_PF12
#define HEADER_CONNECTOR_HDR2_PIN44 GPIO_PF13
#define HEADER_CONNECTOR_HDR2_PIN45 GPIO_PF0
#define HEADER_CONNECTOR_HDR2_PIN46 GPIO_PF1
#define HEADER_CONNECTOR_HDR2_PIN47 GPIO_PF2
#define HEADER_CONNECTOR_HDR2_PIN48 GPIO_PF3
#define HEADER_CONNECTOR_HDR2_PIN49 GPIO_PG2
#define HEADER_CONNECTOR_HDR2_PIN50 GPIO_PG3
#define HEADER_CONNECTOR_HDR2_PIN51 HAL_PIN_NC   // VCC 3V3
#define HEADER_CONNECTOR_HDR2_PIN52 HAL_PIN_NC   // VDD

#ifdef __cplusplus
}
#endif

#endif // _BOARD_H_
// ------------------------------------------------------------------------- END
