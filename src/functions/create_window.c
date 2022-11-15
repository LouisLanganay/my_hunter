/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** create_window.c
*/

#include "../../includes/hunter.h"

void create_window(csfml_struct *csfml_options)
{
    if (!csfml_options->window || !csfml_options->texture)
        return;
    sfRenderWindow_setFramerateLimit(csfml_options->window, 30);
    sfSprite_setTexture(csfml_options->sprite, csfml_options->texture, sfTrue);
    sfSprite_scale(csfml_options->sprite, (sfVector2f){0.1, 0.1});
    while (sfRenderWindow_isOpen(csfml_options->window)) {
        sfRenderWindow_pollEvent(csfml_options->window, &csfml_options->event);
        if (csfml_options->event.type == sfEvtClosed)
            close_window(csfml_options);
        sfRenderWindow_clear(csfml_options->window, sfBlack);
        sfRenderWindow_drawSprite(csfml_options->window, csfml_options->sprite,
        NULL);
        sfRenderWindow_display(csfml_options->window);
    }
}
