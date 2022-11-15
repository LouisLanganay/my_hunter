/*
** EPITECH PROJECT, 2022
** my_putsquare.c
** File description:
** my_putsquare
*/

#include "framebuffer.h"

/**
 * @brief Display a square with my_putpixel
 * 
 * @param framebuffer Our framebuffer
 * @param x1 Our coordinate on x for first marker
 * @param y1 Our coordinate on y for first marker
 * @param x2 Our coordinate on x for second marker
 * @param y2 Our coordinate on y for second marker
 * @return long long Count of displayed pixels
 */

long long my_putsquare(framebuffer_t *framebuffer, int x1, int y1, int x2,
                        int y2)
{
    long long pixel_count = 0;
    long long x = x1;
    long long y = y1;

    if (x1 > x2 || y1 > y2)
        return 84;
    while (y != y2) {
        while (x != x2) {
            pixel_count += my_putpixel(framebuffer, x, y, sfRed);
            x++;
        }
        x = x1;
        y++;
    }
    return pixel_count;
}