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
extern "C"
{
#endif

#define BOARD_NAME "STM32F429ZI_DISCOVERY"

#include "hal_target.h"

// Mapping
#define HEADER_CONNECTOR_CN2_D1  	PE2
#define HEADER_CONNECTOR_CN2_D2  	PE3
#define HEADER_CONNECTOR_CN2_D3  	PE4
#define HEADER_CONNECTOR_CN2_D4  	PE5
#define HEADER_CONNECTOR_CN2_D5  	PE6
#define HEADER_CONNECTOR_CN2_D6  	// Pin not routed
#define HEADER_CONNECTOR_CN2_D7  	PC13
#define HEADER_CONNECTOR_CN2_D8  	PC14
#define HEADER_CONNECTOR_CN2_D9  	PC15
#define HEADER_CONNECTOR_CN2_D10 	PF0
#define HEADER_CONNECTOR_CN2_D11 	PF1
#define HEADER_CONNECTOR_CN2_D12 	PF2
#define HEADER_CONNECTOR_CN2_D13 	PF3
#define HEADER_CONNECTOR_CN2_D14 	PF4
#define HEADER_CONNECTOR_CN2_D15 	PF5
#define HEADER_CONNECTOR_CN2_D16 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D17 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D18 	PF6
#define HEADER_CONNECTOR_CN2_D19 	PF7
#define HEADER_CONNECTOR_CN2_D20 	PF8
#define HEADER_CONNECTOR_CN2_D21 	PF9
#define HEADER_CONNECTOR_CN2_D22 	PF10
#define HEADER_CONNECTOR_CN2_D23 	PH0
#define HEADER_CONNECTOR_CN2_D24 	PH1
#define HEADER_CONNECTOR_CN2_D25 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D26 	PC0
#define HEADER_CONNECTOR_CN2_D27 	PC1
#define HEADER_CONNECTOR_CN2_D28 	PC2
#define HEADER_CONNECTOR_CN2_D29 	PC3
#define HEADER_CONNECTOR_CN2_D30 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D31 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D32 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D33 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D34 	PA0
#define HEADER_CONNECTOR_CN2_D35 	PA1
#define HEADER_CONNECTOR_CN2_D36 	PA2
#define HEADER_CONNECTOR_CN2_D37 	PA3
#define HEADER_CONNECTOR_CN2_D38 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D39 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D40 	PA4
#define HEADER_CONNECTOR_CN2_D41 	PA5
#define HEADER_CONNECTOR_CN2_D42 	PA6
#define HEADER_CONNECTOR_CN2_D43 	PA7
#define HEADER_CONNECTOR_CN2_D44 	PC4
#define HEADER_CONNECTOR_CN2_D45 	PC5
#define HEADER_CONNECTOR_CN2_D46 	PB0
#define HEADER_CONNECTOR_CN2_D47 	PB1
#define HEADER_CONNECTOR_CN2_D48 	PB2
#define HEADER_CONNECTOR_CN2_D49 	PF11
#define HEADER_CONNECTOR_CN2_D50 	PF12
#define HEADER_CONNECTOR_CN2_D51 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D52 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D53 	PF13
#define HEADER_CONNECTOR_CN2_D54 	PF14
#define HEADER_CONNECTOR_CN2_D55 	PF15
#define HEADER_CONNECTOR_CN2_D56 	PG0
#define HEADER_CONNECTOR_CN2_D57 	PG1
#define HEADER_CONNECTOR_CN2_D58 	PE7
#define HEADER_CONNECTOR_CN2_D59 	PE8
#define HEADER_CONNECTOR_CN2_D60 	PE9
#define HEADER_CONNECTOR_CN2_D61 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D62 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D63 	PE10
#define HEADER_CONNECTOR_CN2_D64 	PE11
#define HEADER_CONNECTOR_CN2_D65 	PE12
#define HEADER_CONNECTOR_CN2_D66 	PE13
#define HEADER_CONNECTOR_CN2_D67 	PE14
#define HEADER_CONNECTOR_CN2_D68 	PE15
#define HEADER_CONNECTOR_CN2_D69 	PB10
#define HEADER_CONNECTOR_CN2_D70 	PB11
#define HEADER_CONNECTOR_CN2_D71 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D72 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D73 	PB12
#define HEADER_CONNECTOR_CN2_D74 	PB13
#define HEADER_CONNECTOR_CN2_D75 	PB14
#define HEADER_CONNECTOR_CN2_D76 	PB15
#define HEADER_CONNECTOR_CN2_D77 	PD8
#define HEADER_CONNECTOR_CN2_D78 	PD9
#define HEADER_CONNECTOR_CN2_D79 	PD10
#define HEADER_CONNECTOR_CN2_D80 	PD11
#define HEADER_CONNECTOR_CN2_D81 	PD12
#define HEADER_CONNECTOR_CN2_D82 	PD13
#define HEADER_CONNECTOR_CN2_D83 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D84 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D85 	PD14
#define HEADER_CONNECTOR_CN2_D86 	PD15
#define HEADER_CONNECTOR_CN2_D87 	PG2
#define HEADER_CONNECTOR_CN2_D88 	PG3
#define HEADER_CONNECTOR_CN2_D89 	PG4
#define HEADER_CONNECTOR_CN2_D90 	PG5
#define HEADER_CONNECTOR_CN2_D91 	PG6
#define HEADER_CONNECTOR_CN2_D92 	PG7
#define HEADER_CONNECTOR_CN2_D93 	PG8
#define HEADER_CONNECTOR_CN2_D94 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D95 	// Pin not routed
#define HEADER_CONNECTOR_CN2_D96 	PC6
#define HEADER_CONNECTOR_CN2_D97 	PC7
#define HEADER_CONNECTOR_CN2_D98 	PC8
#define HEADER_CONNECTOR_CN2_D99 	PC9
#define HEADER_CONNECTOR_CN2_D100	PA8
#define HEADER_CONNECTOR_CN2_D101	PA9
#define HEADER_CONNECTOR_CN2_D102	PA10
#define HEADER_CONNECTOR_CN2_D103	PA11
#define HEADER_CONNECTOR_CN2_D104	PA12
#define HEADER_CONNECTOR_CN2_D105	PA13
#define HEADER_CONNECTOR_CN2_D106	// Pin not routed
#define HEADER_CONNECTOR_CN2_D107	// Pin not routed
#define HEADER_CONNECTOR_CN2_D108	// Pin not routed
#define HEADER_CONNECTOR_CN2_D109	PA14
#define HEADER_CONNECTOR_CN2_D110	PA15
#define HEADER_CONNECTOR_CN2_D111	PC10
#define HEADER_CONNECTOR_CN2_D112	PC11
#define HEADER_CONNECTOR_CN2_D113	PC12
#define HEADER_CONNECTOR_CN2_D114	PD0
#define HEADER_CONNECTOR_CN2_D115	PD1
#define HEADER_CONNECTOR_CN2_D116	PD2
#define HEADER_CONNECTOR_CN2_D117	PD3
#define HEADER_CONNECTOR_CN2_D118	PD4
#define HEADER_CONNECTOR_CN2_D119	PD5
#define HEADER_CONNECTOR_CN2_D120	// Pin not routed
#define HEADER_CONNECTOR_CN2_D121	// Pin not routed
#define HEADER_CONNECTOR_CN2_D122	PD6
#define HEADER_CONNECTOR_CN2_D123	PD7
#define HEADER_CONNECTOR_CN2_D124	PG9
#define HEADER_CONNECTOR_CN2_D125	PG10
#define HEADER_CONNECTOR_CN2_D126	PG11
#define HEADER_CONNECTOR_CN2_D127	PG12
#define HEADER_CONNECTOR_CN2_D128	PG13
#define HEADER_CONNECTOR_CN2_D129	PG14
#define HEADER_CONNECTOR_CN2_D130	// Pin not routed
#define HEADER_CONNECTOR_CN2_D131	// Pin not routed
#define HEADER_CONNECTOR_CN2_D132	PG15
#define HEADER_CONNECTOR_CN2_D133	PB3
#define HEADER_CONNECTOR_CN2_D134	PB4
#define HEADER_CONNECTOR_CN2_D135	PB5
#define HEADER_CONNECTOR_CN2_D136	PB6
#define HEADER_CONNECTOR_CN2_D137	PB7
#define HEADER_CONNECTOR_CN2_D138	// Pin not routed
#define HEADER_CONNECTOR_CN2_D139	PB8
#define HEADER_CONNECTOR_CN2_D140	PB9
#define HEADER_CONNECTOR_CN2_D141	PE0
#define HEADER_CONNECTOR_CN2_D142	PE1

#define HEADER_CONNECTOR_CN3_D1  	PE2
#define HEADER_CONNECTOR_CN3_D2  	PE3
#define HEADER_CONNECTOR_CN3_D3  	PE4
#define HEADER_CONNECTOR_CN3_D4  	PE5
#define HEADER_CONNECTOR_CN3_D5  	PE6
#define HEADER_CONNECTOR_CN3_D6  	// Pin not routed
#define HEADER_CONNECTOR_CN3_D7  	PC13
#define HEADER_CONNECTOR_CN3_D8  	PC14
#define HEADER_CONNECTOR_CN3_D9  	PC15
#define HEADER_CONNECTOR_CN3_D10 	PF0
#define HEADER_CONNECTOR_CN3_D11 	PF1
#define HEADER_CONNECTOR_CN3_D12 	PF2
#define HEADER_CONNECTOR_CN3_D13 	PF3
#define HEADER_CONNECTOR_CN3_D14 	PF4
#define HEADER_CONNECTOR_CN3_D15 	PF5
#define HEADER_CONNECTOR_CN3_D16 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D17 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D18 	PF6
#define HEADER_CONNECTOR_CN3_D19 	PF7
#define HEADER_CONNECTOR_CN3_D20 	PF8
#define HEADER_CONNECTOR_CN3_D21 	PF9
#define HEADER_CONNECTOR_CN3_D22 	PF10
#define HEADER_CONNECTOR_CN3_D23 	PH0
#define HEADER_CONNECTOR_CN3_D24 	PH1
#define HEADER_CONNECTOR_CN3_D25 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D26 	PC0
#define HEADER_CONNECTOR_CN3_D27 	PC1
#define HEADER_CONNECTOR_CN3_D28 	PC2
#define HEADER_CONNECTOR_CN3_D29 	PC3
#define HEADER_CONNECTOR_CN3_D30 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D31 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D32 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D33 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D34 	PA0
#define HEADER_CONNECTOR_CN3_D35 	PA1
#define HEADER_CONNECTOR_CN3_D36 	PA2
#define HEADER_CONNECTOR_CN3_D37 	PA3
#define HEADER_CONNECTOR_CN3_D38 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D39 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D40 	PA4
#define HEADER_CONNECTOR_CN3_D41 	PA5
#define HEADER_CONNECTOR_CN3_D42 	PA6
#define HEADER_CONNECTOR_CN3_D43 	PA7
#define HEADER_CONNECTOR_CN3_D44 	PC4
#define HEADER_CONNECTOR_CN3_D45 	PC5
#define HEADER_CONNECTOR_CN3_D46 	PB0
#define HEADER_CONNECTOR_CN3_D47 	PB1
#define HEADER_CONNECTOR_CN3_D48 	PB2
#define HEADER_CONNECTOR_CN3_D49 	PF11
#define HEADER_CONNECTOR_CN3_D50 	PF12
#define HEADER_CONNECTOR_CN3_D51 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D52 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D53 	PF13
#define HEADER_CONNECTOR_CN3_D54 	PF14
#define HEADER_CONNECTOR_CN3_D55 	PF15
#define HEADER_CONNECTOR_CN3_D56 	PG0
#define HEADER_CONNECTOR_CN3_D57 	PG1
#define HEADER_CONNECTOR_CN3_D58 	PE7
#define HEADER_CONNECTOR_CN3_D59 	PE8
#define HEADER_CONNECTOR_CN3_D60 	PE9
#define HEADER_CONNECTOR_CN3_D61 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D62 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D63 	PE10
#define HEADER_CONNECTOR_CN3_D64 	PE11
#define HEADER_CONNECTOR_CN3_D65 	PE12
#define HEADER_CONNECTOR_CN3_D66 	PE13
#define HEADER_CONNECTOR_CN3_D67 	PE14
#define HEADER_CONNECTOR_CN3_D68 	PE15
#define HEADER_CONNECTOR_CN3_D69 	PB10
#define HEADER_CONNECTOR_CN3_D70 	PB11
#define HEADER_CONNECTOR_CN3_D71 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D72 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D73 	PB12
#define HEADER_CONNECTOR_CN3_D74 	PB13
#define HEADER_CONNECTOR_CN3_D75 	PB14
#define HEADER_CONNECTOR_CN3_D76 	PB15
#define HEADER_CONNECTOR_CN3_D77 	PD8
#define HEADER_CONNECTOR_CN3_D78 	PD9
#define HEADER_CONNECTOR_CN3_D79 	PD10
#define HEADER_CONNECTOR_CN3_D80 	PD11
#define HEADER_CONNECTOR_CN3_D81 	PD12
#define HEADER_CONNECTOR_CN3_D82 	PD13
#define HEADER_CONNECTOR_CN3_D83 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D84 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D85 	PD14
#define HEADER_CONNECTOR_CN3_D86 	PD15
#define HEADER_CONNECTOR_CN3_D87 	PG2
#define HEADER_CONNECTOR_CN3_D88 	PG3
#define HEADER_CONNECTOR_CN3_D89 	PG4
#define HEADER_CONNECTOR_CN3_D90 	PG5
#define HEADER_CONNECTOR_CN3_D91 	PG6
#define HEADER_CONNECTOR_CN3_D92 	PG7
#define HEADER_CONNECTOR_CN3_D93 	PG8
#define HEADER_CONNECTOR_CN3_D94 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D95 	// Pin not routed
#define HEADER_CONNECTOR_CN3_D96 	PC6
#define HEADER_CONNECTOR_CN3_D97 	PC7
#define HEADER_CONNECTOR_CN3_D98 	PC8
#define HEADER_CONNECTOR_CN3_D99 	PC9
#define HEADER_CONNECTOR_CN3_D100	PA8
#define HEADER_CONNECTOR_CN3_D101	PA9
#define HEADER_CONNECTOR_CN3_D102	PA10
#define HEADER_CONNECTOR_CN3_D103	PA11
#define HEADER_CONNECTOR_CN3_D104	PA12
#define HEADER_CONNECTOR_CN3_D105	PA13
#define HEADER_CONNECTOR_CN3_D106	// Pin not routed
#define HEADER_CONNECTOR_CN3_D107	// Pin not routed
#define HEADER_CONNECTOR_CN3_D108	// Pin not routed
#define HEADER_CONNECTOR_CN3_D109	PA14
#define HEADER_CONNECTOR_CN3_D110	PA15
#define HEADER_CONNECTOR_CN3_D111	PC10
#define HEADER_CONNECTOR_CN3_D112	PC11
#define HEADER_CONNECTOR_CN3_D113	PC12
#define HEADER_CONNECTOR_CN3_D114	PD0
#define HEADER_CONNECTOR_CN3_D115	PD1
#define HEADER_CONNECTOR_CN3_D116	PD2
#define HEADER_CONNECTOR_CN3_D117	PD3
#define HEADER_CONNECTOR_CN3_D118	PD4
#define HEADER_CONNECTOR_CN3_D119	PD5
#define HEADER_CONNECTOR_CN3_D120	// Pin not routed
#define HEADER_CONNECTOR_CN3_D121	// Pin not routed
#define HEADER_CONNECTOR_CN3_D122	PD6
#define HEADER_CONNECTOR_CN3_D123	PD7
#define HEADER_CONNECTOR_CN3_D124	PG9
#define HEADER_CONNECTOR_CN3_D125	PG10
#define HEADER_CONNECTOR_CN3_D126	PG11
#define HEADER_CONNECTOR_CN3_D127	PG12
#define HEADER_CONNECTOR_CN3_D128	PG13
#define HEADER_CONNECTOR_CN3_D129	PG14
#define HEADER_CONNECTOR_CN3_D130	// Pin not routed
#define HEADER_CONNECTOR_CN3_D131	// Pin not routed
#define HEADER_CONNECTOR_CN3_D132	PG15
#define HEADER_CONNECTOR_CN3_D133	PB3
#define HEADER_CONNECTOR_CN3_D134	PB4
#define HEADER_CONNECTOR_CN3_D135	PB5
#define HEADER_CONNECTOR_CN3_D136	PB6
#define HEADER_CONNECTOR_CN3_D137	PB7
#define HEADER_CONNECTOR_CN3_D138	// Pin not routed
#define HEADER_CONNECTOR_CN3_D139	PB8
#define HEADER_CONNECTOR_CN3_D140	PB9
#define HEADER_CONNECTOR_CN3_D141	PE0
#define HEADER_CONNECTOR_CN3_D142	PE1

#define HEADER_CONNECTOR_CN6_D1  	PE2
#define HEADER_CONNECTOR_CN6_D2  	PE3
#define HEADER_CONNECTOR_CN6_D3  	PE4
#define HEADER_CONNECTOR_CN6_D4  	PE5
#define HEADER_CONNECTOR_CN6_D5  	PE6
#define HEADER_CONNECTOR_CN6_D6  	// Pin not routed
#define HEADER_CONNECTOR_CN6_D7  	PC13
#define HEADER_CONNECTOR_CN6_D8  	PC14
#define HEADER_CONNECTOR_CN6_D9  	PC15
#define HEADER_CONNECTOR_CN6_D10 	PF0
#define HEADER_CONNECTOR_CN6_D11 	PF1
#define HEADER_CONNECTOR_CN6_D12 	PF2
#define HEADER_CONNECTOR_CN6_D13 	PF3
#define HEADER_CONNECTOR_CN6_D14 	PF4
#define HEADER_CONNECTOR_CN6_D15 	PF5
#define HEADER_CONNECTOR_CN6_D16 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D17 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D18 	PF6
#define HEADER_CONNECTOR_CN6_D19 	PF7
#define HEADER_CONNECTOR_CN6_D20 	PF8
#define HEADER_CONNECTOR_CN6_D21 	PF9
#define HEADER_CONNECTOR_CN6_D22 	PF10
#define HEADER_CONNECTOR_CN6_D23 	PH0
#define HEADER_CONNECTOR_CN6_D24 	PH1
#define HEADER_CONNECTOR_CN6_D25 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D26 	PC0
#define HEADER_CONNECTOR_CN6_D27 	PC1
#define HEADER_CONNECTOR_CN6_D28 	PC2
#define HEADER_CONNECTOR_CN6_D29 	PC3
#define HEADER_CONNECTOR_CN6_D30 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D31 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D32 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D33 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D34 	PA0
#define HEADER_CONNECTOR_CN6_D35 	PA1
#define HEADER_CONNECTOR_CN6_D36 	PA2
#define HEADER_CONNECTOR_CN6_D37 	PA3
#define HEADER_CONNECTOR_CN6_D38 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D39 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D40 	PA4
#define HEADER_CONNECTOR_CN6_D41 	PA5
#define HEADER_CONNECTOR_CN6_D42 	PA6
#define HEADER_CONNECTOR_CN6_D43 	PA7
#define HEADER_CONNECTOR_CN6_D44 	PC4
#define HEADER_CONNECTOR_CN6_D45 	PC5
#define HEADER_CONNECTOR_CN6_D46 	PB0
#define HEADER_CONNECTOR_CN6_D47 	PB1
#define HEADER_CONNECTOR_CN6_D48 	PB2
#define HEADER_CONNECTOR_CN6_D49 	PF11
#define HEADER_CONNECTOR_CN6_D50 	PF12
#define HEADER_CONNECTOR_CN6_D51 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D52 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D53 	PF13
#define HEADER_CONNECTOR_CN6_D54 	PF14
#define HEADER_CONNECTOR_CN6_D55 	PF15
#define HEADER_CONNECTOR_CN6_D56 	PG0
#define HEADER_CONNECTOR_CN6_D57 	PG1
#define HEADER_CONNECTOR_CN6_D58 	PE7
#define HEADER_CONNECTOR_CN6_D59 	PE8
#define HEADER_CONNECTOR_CN6_D60 	PE9
#define HEADER_CONNECTOR_CN6_D61 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D62 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D63 	PE10
#define HEADER_CONNECTOR_CN6_D64 	PE11
#define HEADER_CONNECTOR_CN6_D65 	PE12
#define HEADER_CONNECTOR_CN6_D66 	PE13
#define HEADER_CONNECTOR_CN6_D67 	PE14
#define HEADER_CONNECTOR_CN6_D68 	PE15
#define HEADER_CONNECTOR_CN6_D69 	PB10
#define HEADER_CONNECTOR_CN6_D70 	PB11
#define HEADER_CONNECTOR_CN6_D71 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D72 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D73 	PB12
#define HEADER_CONNECTOR_CN6_D74 	PB13
#define HEADER_CONNECTOR_CN6_D75 	PB14
#define HEADER_CONNECTOR_CN6_D76 	PB15
#define HEADER_CONNECTOR_CN6_D77 	PD8
#define HEADER_CONNECTOR_CN6_D78 	PD9
#define HEADER_CONNECTOR_CN6_D79 	PD10
#define HEADER_CONNECTOR_CN6_D80 	PD11
#define HEADER_CONNECTOR_CN6_D81 	PD12
#define HEADER_CONNECTOR_CN6_D82 	PD13
#define HEADER_CONNECTOR_CN6_D83 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D84 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D85 	PD14
#define HEADER_CONNECTOR_CN6_D86 	PD15
#define HEADER_CONNECTOR_CN6_D87 	PG2
#define HEADER_CONNECTOR_CN6_D88 	PG3
#define HEADER_CONNECTOR_CN6_D89 	PG4
#define HEADER_CONNECTOR_CN6_D90 	PG5
#define HEADER_CONNECTOR_CN6_D91 	PG6
#define HEADER_CONNECTOR_CN6_D92 	PG7
#define HEADER_CONNECTOR_CN6_D93 	PG8
#define HEADER_CONNECTOR_CN6_D94 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D95 	// Pin not routed
#define HEADER_CONNECTOR_CN6_D96 	PC6
#define HEADER_CONNECTOR_CN6_D97 	PC7
#define HEADER_CONNECTOR_CN6_D98 	PC8
#define HEADER_CONNECTOR_CN6_D99 	PC9
#define HEADER_CONNECTOR_CN6_D100	PA8
#define HEADER_CONNECTOR_CN6_D101	PA9
#define HEADER_CONNECTOR_CN6_D102	PA10
#define HEADER_CONNECTOR_CN6_D103	PA11
#define HEADER_CONNECTOR_CN6_D104	PA12
#define HEADER_CONNECTOR_CN6_D105	PA13
#define HEADER_CONNECTOR_CN6_D106	// Pin not routed
#define HEADER_CONNECTOR_CN6_D107	// Pin not routed
#define HEADER_CONNECTOR_CN6_D108	// Pin not routed
#define HEADER_CONNECTOR_CN6_D109	PA14
#define HEADER_CONNECTOR_CN6_D110	PA15
#define HEADER_CONNECTOR_CN6_D111	PC10
#define HEADER_CONNECTOR_CN6_D112	PC11
#define HEADER_CONNECTOR_CN6_D113	PC12
#define HEADER_CONNECTOR_CN6_D114	PD0
#define HEADER_CONNECTOR_CN6_D115	PD1
#define HEADER_CONNECTOR_CN6_D116	PD2
#define HEADER_CONNECTOR_CN6_D117	PD3
#define HEADER_CONNECTOR_CN6_D118	PD4
#define HEADER_CONNECTOR_CN6_D119	PD5
#define HEADER_CONNECTOR_CN6_D120	// Pin not routed
#define HEADER_CONNECTOR_CN6_D121	// Pin not routed
#define HEADER_CONNECTOR_CN6_D122	PD6
#define HEADER_CONNECTOR_CN6_D123	PD7
#define HEADER_CONNECTOR_CN6_D124	PG9
#define HEADER_CONNECTOR_CN6_D125	PG10
#define HEADER_CONNECTOR_CN6_D126	PG11
#define HEADER_CONNECTOR_CN6_D127	PG12
#define HEADER_CONNECTOR_CN6_D128	PG13
#define HEADER_CONNECTOR_CN6_D129	PG14
#define HEADER_CONNECTOR_CN6_D130	// Pin not routed
#define HEADER_CONNECTOR_CN6_D131	// Pin not routed
#define HEADER_CONNECTOR_CN6_D132	PG15
#define HEADER_CONNECTOR_CN6_D133	PB3
#define HEADER_CONNECTOR_CN6_D134	PB4
#define HEADER_CONNECTOR_CN6_D135	PB5
#define HEADER_CONNECTOR_CN6_D136	PB6
#define HEADER_CONNECTOR_CN6_D137	PB7
#define HEADER_CONNECTOR_CN6_D138	// Pin not routed
#define HEADER_CONNECTOR_CN6_D139	PB8
#define HEADER_CONNECTOR_CN6_D140	PB9
#define HEADER_CONNECTOR_CN6_D141	PE0
#define HEADER_CONNECTOR_CN6_D142	PE1

#define HEADER_CONNECTOR_P1_D1   	PE2
#define HEADER_CONNECTOR_P1_D2   	PE3
#define HEADER_CONNECTOR_P1_D3   	PE4
#define HEADER_CONNECTOR_P1_D4   	PE5
#define HEADER_CONNECTOR_P1_D5   	PE6
#define HEADER_CONNECTOR_P1_D6   	// Pin not routed
#define HEADER_CONNECTOR_P1_D7   	PC13
#define HEADER_CONNECTOR_P1_D8   	PC14
#define HEADER_CONNECTOR_P1_D9   	PC15
#define HEADER_CONNECTOR_P1_D10  	PF0
#define HEADER_CONNECTOR_P1_D11  	PF1
#define HEADER_CONNECTOR_P1_D12  	PF2
#define HEADER_CONNECTOR_P1_D13  	PF3
#define HEADER_CONNECTOR_P1_D14  	PF4
#define HEADER_CONNECTOR_P1_D15  	PF5
#define HEADER_CONNECTOR_P1_D16  	// Pin not routed
#define HEADER_CONNECTOR_P1_D17  	// Pin not routed
#define HEADER_CONNECTOR_P1_D18  	PF6
#define HEADER_CONNECTOR_P1_D19  	PF7
#define HEADER_CONNECTOR_P1_D20  	PF8
#define HEADER_CONNECTOR_P1_D21  	PF9
#define HEADER_CONNECTOR_P1_D22  	PF10
#define HEADER_CONNECTOR_P1_D23  	PH0
#define HEADER_CONNECTOR_P1_D24  	PH1
#define HEADER_CONNECTOR_P1_D25  	// Pin not routed
#define HEADER_CONNECTOR_P1_D26  	PC0
#define HEADER_CONNECTOR_P1_D27  	PC1
#define HEADER_CONNECTOR_P1_D28  	PC2
#define HEADER_CONNECTOR_P1_D29  	PC3
#define HEADER_CONNECTOR_P1_D30  	// Pin not routed
#define HEADER_CONNECTOR_P1_D31  	// Pin not routed
#define HEADER_CONNECTOR_P1_D32  	// Pin not routed
#define HEADER_CONNECTOR_P1_D33  	// Pin not routed
#define HEADER_CONNECTOR_P1_D34  	PA0
#define HEADER_CONNECTOR_P1_D35  	PA1
#define HEADER_CONNECTOR_P1_D36  	PA2
#define HEADER_CONNECTOR_P1_D37  	PA3
#define HEADER_CONNECTOR_P1_D38  	// Pin not routed
#define HEADER_CONNECTOR_P1_D39  	// Pin not routed
#define HEADER_CONNECTOR_P1_D40  	PA4
#define HEADER_CONNECTOR_P1_D41  	PA5
#define HEADER_CONNECTOR_P1_D42  	PA6
#define HEADER_CONNECTOR_P1_D43  	PA7
#define HEADER_CONNECTOR_P1_D44  	PC4
#define HEADER_CONNECTOR_P1_D45  	PC5
#define HEADER_CONNECTOR_P1_D46  	PB0
#define HEADER_CONNECTOR_P1_D47  	PB1
#define HEADER_CONNECTOR_P1_D48  	PB2
#define HEADER_CONNECTOR_P1_D49  	PF11
#define HEADER_CONNECTOR_P1_D50  	PF12
#define HEADER_CONNECTOR_P1_D51  	// Pin not routed
#define HEADER_CONNECTOR_P1_D52  	// Pin not routed
#define HEADER_CONNECTOR_P1_D53  	PF13
#define HEADER_CONNECTOR_P1_D54  	PF14
#define HEADER_CONNECTOR_P1_D55  	PF15
#define HEADER_CONNECTOR_P1_D56  	PG0
#define HEADER_CONNECTOR_P1_D57  	PG1
#define HEADER_CONNECTOR_P1_D58  	PE7
#define HEADER_CONNECTOR_P1_D59  	PE8
#define HEADER_CONNECTOR_P1_D60  	PE9
#define HEADER_CONNECTOR_P1_D61  	// Pin not routed
#define HEADER_CONNECTOR_P1_D62  	// Pin not routed
#define HEADER_CONNECTOR_P1_D63  	PE10
#define HEADER_CONNECTOR_P1_D64  	PE11
#define HEADER_CONNECTOR_P1_D65  	PE12
#define HEADER_CONNECTOR_P1_D66  	PE13
#define HEADER_CONNECTOR_P1_D67  	PE14
#define HEADER_CONNECTOR_P1_D68  	PE15
#define HEADER_CONNECTOR_P1_D69  	PB10
#define HEADER_CONNECTOR_P1_D70  	PB11
#define HEADER_CONNECTOR_P1_D71  	// Pin not routed
#define HEADER_CONNECTOR_P1_D72  	// Pin not routed
#define HEADER_CONNECTOR_P1_D73  	PB12
#define HEADER_CONNECTOR_P1_D74  	PB13
#define HEADER_CONNECTOR_P1_D75  	PB14
#define HEADER_CONNECTOR_P1_D76  	PB15
#define HEADER_CONNECTOR_P1_D77  	PD8
#define HEADER_CONNECTOR_P1_D78  	PD9
#define HEADER_CONNECTOR_P1_D79  	PD10
#define HEADER_CONNECTOR_P1_D80  	PD11
#define HEADER_CONNECTOR_P1_D81  	PD12
#define HEADER_CONNECTOR_P1_D82  	PD13
#define HEADER_CONNECTOR_P1_D83  	// Pin not routed
#define HEADER_CONNECTOR_P1_D84  	// Pin not routed
#define HEADER_CONNECTOR_P1_D85  	PD14
#define HEADER_CONNECTOR_P1_D86  	PD15
#define HEADER_CONNECTOR_P1_D87  	PG2
#define HEADER_CONNECTOR_P1_D88  	PG3
#define HEADER_CONNECTOR_P1_D89  	PG4
#define HEADER_CONNECTOR_P1_D90  	PG5
#define HEADER_CONNECTOR_P1_D91  	PG6
#define HEADER_CONNECTOR_P1_D92  	PG7
#define HEADER_CONNECTOR_P1_D93  	PG8
#define HEADER_CONNECTOR_P1_D94  	// Pin not routed
#define HEADER_CONNECTOR_P1_D95  	// Pin not routed
#define HEADER_CONNECTOR_P1_D96  	PC6
#define HEADER_CONNECTOR_P1_D97  	PC7
#define HEADER_CONNECTOR_P1_D98  	PC8
#define HEADER_CONNECTOR_P1_D99  	PC9
#define HEADER_CONNECTOR_P1_D100 	PA8
#define HEADER_CONNECTOR_P1_D101 	PA9
#define HEADER_CONNECTOR_P1_D102 	PA10
#define HEADER_CONNECTOR_P1_D103 	PA11
#define HEADER_CONNECTOR_P1_D104 	PA12
#define HEADER_CONNECTOR_P1_D105 	PA13
#define HEADER_CONNECTOR_P1_D106 	// Pin not routed
#define HEADER_CONNECTOR_P1_D107 	// Pin not routed
#define HEADER_CONNECTOR_P1_D108 	// Pin not routed
#define HEADER_CONNECTOR_P1_D109 	PA14
#define HEADER_CONNECTOR_P1_D110 	PA15
#define HEADER_CONNECTOR_P1_D111 	PC10
#define HEADER_CONNECTOR_P1_D112 	PC11
#define HEADER_CONNECTOR_P1_D113 	PC12
#define HEADER_CONNECTOR_P1_D114 	PD0
#define HEADER_CONNECTOR_P1_D115 	PD1
#define HEADER_CONNECTOR_P1_D116 	PD2
#define HEADER_CONNECTOR_P1_D117 	PD3
#define HEADER_CONNECTOR_P1_D118 	PD4
#define HEADER_CONNECTOR_P1_D119 	PD5
#define HEADER_CONNECTOR_P1_D120 	// Pin not routed
#define HEADER_CONNECTOR_P1_D121 	// Pin not routed
#define HEADER_CONNECTOR_P1_D122 	PD6
#define HEADER_CONNECTOR_P1_D123 	PD7
#define HEADER_CONNECTOR_P1_D124 	PG9
#define HEADER_CONNECTOR_P1_D125 	PG10
#define HEADER_CONNECTOR_P1_D126 	PG11
#define HEADER_CONNECTOR_P1_D127 	PG12
#define HEADER_CONNECTOR_P1_D128 	PG13
#define HEADER_CONNECTOR_P1_D129 	PG14
#define HEADER_CONNECTOR_P1_D130 	// Pin not routed
#define HEADER_CONNECTOR_P1_D131 	// Pin not routed
#define HEADER_CONNECTOR_P1_D132 	PG15
#define HEADER_CONNECTOR_P1_D133 	PB3
#define HEADER_CONNECTOR_P1_D134 	PB4
#define HEADER_CONNECTOR_P1_D135 	PB5
#define HEADER_CONNECTOR_P1_D136 	PB6
#define HEADER_CONNECTOR_P1_D137 	PB7
#define HEADER_CONNECTOR_P1_D138 	// Pin not routed
#define HEADER_CONNECTOR_P1_D139 	PB8
#define HEADER_CONNECTOR_P1_D140 	PB9
#define HEADER_CONNECTOR_P1_D141 	PE0
#define HEADER_CONNECTOR_P1_D142 	PE1

#define HEADER_CONNECTOR_P2_D1   	PE2
#define HEADER_CONNECTOR_P2_D2   	PE3
#define HEADER_CONNECTOR_P2_D3   	PE4
#define HEADER_CONNECTOR_P2_D4   	PE5
#define HEADER_CONNECTOR_P2_D5   	PE6
#define HEADER_CONNECTOR_P2_D6   	// Pin not routed
#define HEADER_CONNECTOR_P2_D7   	PC13
#define HEADER_CONNECTOR_P2_D8   	PC14
#define HEADER_CONNECTOR_P2_D9   	PC15
#define HEADER_CONNECTOR_P2_D10  	PF0
#define HEADER_CONNECTOR_P2_D11  	PF1
#define HEADER_CONNECTOR_P2_D12  	PF2
#define HEADER_CONNECTOR_P2_D13  	PF3
#define HEADER_CONNECTOR_P2_D14  	PF4
#define HEADER_CONNECTOR_P2_D15  	PF5
#define HEADER_CONNECTOR_P2_D16  	// Pin not routed
#define HEADER_CONNECTOR_P2_D17  	// Pin not routed
#define HEADER_CONNECTOR_P2_D18  	PF6
#define HEADER_CONNECTOR_P2_D19  	PF7
#define HEADER_CONNECTOR_P2_D20  	PF8
#define HEADER_CONNECTOR_P2_D21  	PF9
#define HEADER_CONNECTOR_P2_D22  	PF10
#define HEADER_CONNECTOR_P2_D23  	PH0
#define HEADER_CONNECTOR_P2_D24  	PH1
#define HEADER_CONNECTOR_P2_D25  	// Pin not routed
#define HEADER_CONNECTOR_P2_D26  	PC0
#define HEADER_CONNECTOR_P2_D27  	PC1
#define HEADER_CONNECTOR_P2_D28  	PC2
#define HEADER_CONNECTOR_P2_D29  	PC3
#define HEADER_CONNECTOR_P2_D30  	// Pin not routed
#define HEADER_CONNECTOR_P2_D31  	// Pin not routed
#define HEADER_CONNECTOR_P2_D32  	// Pin not routed
#define HEADER_CONNECTOR_P2_D33  	// Pin not routed
#define HEADER_CONNECTOR_P2_D34  	PA0
#define HEADER_CONNECTOR_P2_D35  	PA1
#define HEADER_CONNECTOR_P2_D36  	PA2
#define HEADER_CONNECTOR_P2_D37  	PA3
#define HEADER_CONNECTOR_P2_D38  	// Pin not routed
#define HEADER_CONNECTOR_P2_D39  	// Pin not routed
#define HEADER_CONNECTOR_P2_D40  	PA4
#define HEADER_CONNECTOR_P2_D41  	PA5
#define HEADER_CONNECTOR_P2_D42  	PA6
#define HEADER_CONNECTOR_P2_D43  	PA7
#define HEADER_CONNECTOR_P2_D44  	PC4
#define HEADER_CONNECTOR_P2_D45  	PC5
#define HEADER_CONNECTOR_P2_D46  	PB0
#define HEADER_CONNECTOR_P2_D47  	PB1
#define HEADER_CONNECTOR_P2_D48  	PB2
#define HEADER_CONNECTOR_P2_D49  	PF11
#define HEADER_CONNECTOR_P2_D50  	PF12
#define HEADER_CONNECTOR_P2_D51  	// Pin not routed
#define HEADER_CONNECTOR_P2_D52  	// Pin not routed
#define HEADER_CONNECTOR_P2_D53  	PF13
#define HEADER_CONNECTOR_P2_D54  	PF14
#define HEADER_CONNECTOR_P2_D55  	PF15
#define HEADER_CONNECTOR_P2_D56  	PG0
#define HEADER_CONNECTOR_P2_D57  	PG1
#define HEADER_CONNECTOR_P2_D58  	PE7
#define HEADER_CONNECTOR_P2_D59  	PE8
#define HEADER_CONNECTOR_P2_D60  	PE9
#define HEADER_CONNECTOR_P2_D61  	// Pin not routed
#define HEADER_CONNECTOR_P2_D62  	// Pin not routed
#define HEADER_CONNECTOR_P2_D63  	PE10
#define HEADER_CONNECTOR_P2_D64  	PE11
#define HEADER_CONNECTOR_P2_D65  	PE12
#define HEADER_CONNECTOR_P2_D66  	PE13
#define HEADER_CONNECTOR_P2_D67  	PE14
#define HEADER_CONNECTOR_P2_D68  	PE15
#define HEADER_CONNECTOR_P2_D69  	PB10
#define HEADER_CONNECTOR_P2_D70  	PB11
#define HEADER_CONNECTOR_P2_D71  	// Pin not routed
#define HEADER_CONNECTOR_P2_D72  	// Pin not routed
#define HEADER_CONNECTOR_P2_D73  	PB12
#define HEADER_CONNECTOR_P2_D74  	PB13
#define HEADER_CONNECTOR_P2_D75  	PB14
#define HEADER_CONNECTOR_P2_D76  	PB15
#define HEADER_CONNECTOR_P2_D77  	PD8
#define HEADER_CONNECTOR_P2_D78  	PD9
#define HEADER_CONNECTOR_P2_D79  	PD10
#define HEADER_CONNECTOR_P2_D80  	PD11
#define HEADER_CONNECTOR_P2_D81  	PD12
#define HEADER_CONNECTOR_P2_D82  	PD13
#define HEADER_CONNECTOR_P2_D83  	// Pin not routed
#define HEADER_CONNECTOR_P2_D84  	// Pin not routed
#define HEADER_CONNECTOR_P2_D85  	PD14
#define HEADER_CONNECTOR_P2_D86  	PD15
#define HEADER_CONNECTOR_P2_D87  	PG2
#define HEADER_CONNECTOR_P2_D88  	PG3
#define HEADER_CONNECTOR_P2_D89  	PG4
#define HEADER_CONNECTOR_P2_D90  	PG5
#define HEADER_CONNECTOR_P2_D91  	PG6
#define HEADER_CONNECTOR_P2_D92  	PG7
#define HEADER_CONNECTOR_P2_D93  	PG8
#define HEADER_CONNECTOR_P2_D94  	// Pin not routed
#define HEADER_CONNECTOR_P2_D95  	// Pin not routed
#define HEADER_CONNECTOR_P2_D96  	PC6
#define HEADER_CONNECTOR_P2_D97  	PC7
#define HEADER_CONNECTOR_P2_D98  	PC8
#define HEADER_CONNECTOR_P2_D99  	PC9
#define HEADER_CONNECTOR_P2_D100 	PA8
#define HEADER_CONNECTOR_P2_D101 	PA9
#define HEADER_CONNECTOR_P2_D102 	PA10
#define HEADER_CONNECTOR_P2_D103 	PA11
#define HEADER_CONNECTOR_P2_D104 	PA12
#define HEADER_CONNECTOR_P2_D105 	PA13
#define HEADER_CONNECTOR_P2_D106 	// Pin not routed
#define HEADER_CONNECTOR_P2_D107 	// Pin not routed
#define HEADER_CONNECTOR_P2_D108 	// Pin not routed
#define HEADER_CONNECTOR_P2_D109 	PA14
#define HEADER_CONNECTOR_P2_D110 	PA15
#define HEADER_CONNECTOR_P2_D111 	PC10
#define HEADER_CONNECTOR_P2_D112 	PC11
#define HEADER_CONNECTOR_P2_D113 	PC12
#define HEADER_CONNECTOR_P2_D114 	PD0
#define HEADER_CONNECTOR_P2_D115 	PD1
#define HEADER_CONNECTOR_P2_D116 	PD2
#define HEADER_CONNECTOR_P2_D117 	PD3
#define HEADER_CONNECTOR_P2_D118 	PD4
#define HEADER_CONNECTOR_P2_D119 	PD5
#define HEADER_CONNECTOR_P2_D120 	// Pin not routed
#define HEADER_CONNECTOR_P2_D121 	// Pin not routed
#define HEADER_CONNECTOR_P2_D122 	PD6
#define HEADER_CONNECTOR_P2_D123 	PD7
#define HEADER_CONNECTOR_P2_D124 	PG9
#define HEADER_CONNECTOR_P2_D125 	PG10
#define HEADER_CONNECTOR_P2_D126 	PG11
#define HEADER_CONNECTOR_P2_D127 	PG12
#define HEADER_CONNECTOR_P2_D128 	PG13
#define HEADER_CONNECTOR_P2_D129 	PG14
#define HEADER_CONNECTOR_P2_D130 	// Pin not routed
#define HEADER_CONNECTOR_P2_D131 	// Pin not routed
#define HEADER_CONNECTOR_P2_D132 	PG15
#define HEADER_CONNECTOR_P2_D133 	PB3
#define HEADER_CONNECTOR_P2_D134 	PB4
#define HEADER_CONNECTOR_P2_D135 	PB5
#define HEADER_CONNECTOR_P2_D136 	PB6
#define HEADER_CONNECTOR_P2_D137 	PB7
#define HEADER_CONNECTOR_P2_D138 	// Pin not routed
#define HEADER_CONNECTOR_P2_D139 	PB8
#define HEADER_CONNECTOR_P2_D140 	PB9
#define HEADER_CONNECTOR_P2_D141 	PE0
#define HEADER_CONNECTOR_P2_D142 	PE1

#ifdef __cplusplus
}
#endif

#endif    // _BOARD_H_
// ------------------------------------------------------------------------- END
