/*
** EPITECH PROJECT, 2022
** framebuffer
** File description:
** framebuffer
*/

#ifndef _FRAMEBUFFER_H__
    #define _FRAMEBUFFER_H__

    #include <SFML/Graphics.h>

    struct framebuffer {
        unsigned int width;
        unsigned int height;
        sfUint8 *pixels;
    };
    typedef struct framebuffer framebuffer_t;
    framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
    void framebuffer_destroy(framebuffer_t *framebuffer);
    int my_putpixel(framebuffer_t *framebuffer,
        unsigned int x, unsigned int y, sfColor color);

#endif
