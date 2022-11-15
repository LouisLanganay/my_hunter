/*
** EPITECH PROJECT, 2022
** my_putpixel
** File description:
** my_putpixel
*/

#include "framebuffer.h"

/**
 * @brief Display a pixel
 * 
 * @param framebuffer Our framebuffer
 * @param x Coordinates on x for our pixel
 * @param y Coordinates on y for our pixel
 * @param color Color for our pixel
 * @return int Return 1 in case our pixel was displayed
 */

int my_putpixel(framebuffer_t *framebuffer, unsigned int x,
    unsigned int y, sfColor color)
{
    if (x < 0 || y < 0)
        return 0;
    if (x > framebuffer->width || y > framebuffer->height)
        return 0;
    framebuffer->pixels[(framebuffer->width * y + x) * 4] = color.r;
    framebuffer->pixels[(framebuffer->width * y + x) * 4 + 1] = color.g;
    framebuffer->pixels[(framebuffer->width * y + x) * 4 + 2] = color.b;
    framebuffer->pixels[(framebuffer->width * y + x) * 4 + 3] = color.a;
    return 1;
}