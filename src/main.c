/*
** EPITECH PROJECT, 2022
** bs csfml
** File description:
** bs csfml
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdio.h>
#include <stdlib.h>

#include "../includes/my.h"

int main(void)
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    sfEvent event;
    framebuffer_t *framebuffer;

    window = sfRenderWindow_create(mode, "SFML window",
        sfResize | sfClose, 0);
    texture = sfTexture_createFromFile("./assets/image.png", NULL);
    if (!window)
        return 84;
    if (!texture)
        return 84;
    sprite = sfSprite_create();
    sfRenderWindow_setFramerateLimit(window, 30);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_scale(sprite, (sfVector2f){0.1, 0.1});
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_pollEvent(window, &event);
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
    return 0;
}