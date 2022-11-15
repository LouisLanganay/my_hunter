/*
** EPITECH PROJECT, 2022
** my_framebuffer_create
** File description:
** my_framebuffer_create
*/

#include <stdlib.h>

#include "framebuffer.h"

framebuffer_t *my_framebuffer_create(unsigned int width, unsigned int height)
{
    int i = 0;
    framebuffer_t *tab;
    if (!(tab = malloc(sizeof(framebuffer_t))))
        return 0;
    if (!(tab->pixels = malloc(sizeof(sfUint8) * width * height * 4))) {
        free(tab);
        return 0;
    }
    tab->width = width;
    tab->height = height;
    while (i < width * height * 4) {
        tab->pixels[i] = 0;
        i++;
    }
    return tab;
}