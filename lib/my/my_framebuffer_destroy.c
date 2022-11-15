/*
** EPITECH PROJECT, 2022
** my_framebuffer_destroy
** File description:
** my_framebuffer_destroy
*/

#include <stdlib.h>

#include "framebuffer.h"

void my_framebuffer_destroy(framebuffer_t *framebuffer)
{
    free(framebuffer->pixels);
    free(framebuffer);
}