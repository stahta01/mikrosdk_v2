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

/**
 * \file gl_image_format_handlers.h
 * \brief Declaradion of function open for user redefinition.
 *
 * \details Here are declaration for function used by \ref gl_draw_image for specific image format.
 * All functions can be reimplemented by user, and will be automaticly linked indo \ref gl_draw_image.
 */

#ifndef _GL_IMAGE_JPEG_H_
#define _GL_IMAGE_JPEG_H_

#include "gl_types.h"

/** \addtogroup apigroup API
 *  \brief API
 *  @{
 */

/**
 * \addtogroup glgroup Graphic Library
 * \brief Graphic Library
 *  @{
 */

#ifdef __cplusplus
extern "C"{
#endif

/**
 * \brief Draw image of jpeg format on display.
 *
 * \details This function is declared as 'weak' witch means that user can
 * redefine it and his new definition will be linked instead of definition from library.
 * That way user can save RAM space when he draws an image but not jpeg format image. He just have to define this function with empty body.
 * Also, user can write his own definition so that image is draw his way.
 *
 * \param[in] dest  Rectangle that represents destination where picture wil be drawn. See \ref gl_rectangle_t structure definition for detailed explanation.
 * \param[in] src Rectangle that represents part of image that will be draw into destination, et. \p dest rectangle. See \ref gl_rectangle_t structure definition for detailed explanation.
 * \param[in] image Pointer to image.
 *
 * \return Returns zero if image is successfuly drawn, otherwise a number greater then zero iz returned.
 *
 * \pre Before drawing driver must be set by #gl_set_driver.
 *
 * \note Image must be generated by NectoStudio's resource generator.
 */
int __attribute__((weak)) gl_draw_jpeg_image(gl_rectangle_t *dest, gl_rectangle_t *src, const uint8_t *image);

/**
 * \brief Draw image of bitmap 16bpp format on display.
 *
 * \details This function is declared as 'weak' witch means that user can
 * redefine it and his new definition will be linked instead of definition from library.
 * That way user can save RAM space when he draws an image but not of this image format. He just have to define this function with empty body.
 * Also, user can write his own definition so that image is draw his way.
 *
 * \param[in] dest  Rectangle that represents destination where picture wil be drawn. See \ref gl_rectangle_t structure definition for detailed explanation.
 * \param[in] src Rectangle that represents part of image that will be draw into destination, et. \p dest rectangle. See \ref gl_rectangle_t structure definition for detailed explanation.
 * \param[in] image Pointer to image.
 *
 * \return Returns zero if image is successfuly drawn, otherwise a number greater then zero iz returned.
 *
 * \pre Before drawing driver must be set by #gl_set_driver.
 *
 * \note Image must be generated by NectoStudio's resource generator.
 */
void __attribute__((weak)) gl_draw_bitmap_16bpp(gl_rectangle_t *dest, gl_rectangle_t *src, const uint8_t *image);


/**
 * \brief Draw image of bitmap 4bpp format on display.
 *
 * \details This function is declared as 'weak' witch means that user can
 * redefine it and his new definition will be linked instead of definition from library.
 * That way user can save RAM space when he draws an image but not of this image format. He just have to define this function with empty body.
 * Also, user can write his own definition so that image is draw his way.
 *
 * \param[in] dest  Rectangle that represents destination where picture wil be drawn. See \ref gl_rectangle_t structure definition for detailed explanation.
 * \param[in] src Rectangle that represents part of image that will be draw into destination, et. \p dest rectangle. See \ref gl_rectangle_t structure definition for detailed explanation.
 * \param[in] image Pointer to image.
 *
 * \return Returns zero if image is successfuly drawn, otherwise a number greater then zero iz returned.
 *
 * \pre Before drawing driver must be set by #gl_set_driver.
 *
 * \note Image must be generated by NectoStudio's resource generator.
 */
void __attribute__((weak)) gl_draw_bitmap_4bpp(gl_rectangle_t *dest, gl_rectangle_t *src, const uint8_t *image);


/**
 * \brief Draw image of bitmap 8bpp format on display.
 *
 * \details This function is declared as 'weak' witch means that user can
 * redefine it and his new definition will be linked instead of definition from library.
 * That way user can save RAM space when he draws an image but not of this image format. He just have to define this function with empty body.
 * Also, user can write his own definition so that image is draw his way.
 *
 * \param[in] dest  Rectangle that represents destination where picture wil be drawn. See \ref gl_rectangle_t structure definition for detailed explanation.
 * \param[in] src Rectangle that represents part of image that will be draw into destination, et. \p dest rectangle. See \ref gl_rectangle_t structure definition for detailed explanation.
 * \param[in] image Pointer to image.
 *
 * \return Returns zero if image is successfuly drawn, otherwise a number greater then zero iz returned.
 *
 * \pre Before drawing driver must be set by #gl_set_driver.
 *
 * \note Image must be generated by NectoStudio's resource generator.
 */
void __attribute__((weak)) gl_draw_bitmap_8bpp(gl_rectangle_t *dest, gl_rectangle_t *src, const uint8_t *image);


/**
 * \brief Draw image of bitmap 1bpp format on display.
 *
 * \details This function is declared as 'weak' witch means that user can
 * redefine it and his new definition will be linked instead of definition from library.
 * That way user can save RAM space when he draws an image but not of this image format. He just have to define this function with empty body.
 * Also, user can write his own definition so that image is draw his way.
 *
 * \param[in] dest  Rectangle that represents destination where picture wil be drawn. See \ref gl_rectangle_t structure definition for detailed explanation.
 * \param[in] src Rectangle that represents part of image that will be draw into destination, et. \p dest rectangle. See \ref gl_rectangle_t structure definition for detailed explanation.
 * \param[in] image Pointer to image.
 *
 * \return Returns zero if image is successfuly drawn, otherwise a number greater then zero iz returned.
 *
 * \pre Before drawing driver must be set by #gl_set_driver.
 *
 * \note Image must be generated by NectoStudio's resource generator.
 */
void __attribute__((weak)) gl_draw_bitmap_1bpp(gl_rectangle_t *dest, gl_rectangle_t *src, const uint8_t *image);

#ifdef __cplusplus
} // extern "C"
#endif

/** @} */ // glgroup
/** @} */ // apigroup

#endif //_GL_IMAGE_JPEG_H_
