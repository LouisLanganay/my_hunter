/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** create_window.c
*/

#include "../../includes/hunter.h"

void set_textures(csfml_struct *csfml_options)
{
    if (csfml_options->count_fps >= csfml_options->duck_speed)
        move_rect(csfml_options);
    sfSprite_setTexture(csfml_options->sprite, csfml_options->texture, sfTrue);
    sfSprite_setTextureRect(csfml_options->sprite, csfml_options->rect);
    csfml_options->count_fps++;
    //sfSprite_scale(csfml_options->sprite, (sfVector2f){0.1, 0.1});
}

void create_window(csfml_struct *csfml_options)
{
    float seconds;
    sfTime time;
    if (!csfml_options->window || !csfml_options->texture)
        return;
    sfRenderWindow_setFramerateLimit(csfml_options->window, 60);
    while (sfRenderWindow_isOpen(csfml_options->window)) {
        time = sfClock_getElapsedTime(csfml_options->clock);
        seconds = time.microseconds / 1000000.0;
        handle_events(csfml_options);
        set_textures(csfml_options);

        sfRenderWindow_clear(csfml_options->window, sfBlack);
        sfRenderWindow_drawSprite(csfml_options->window, csfml_options->sprite,
        NULL);
        sfRenderWindow_display(csfml_options->window);

        sfClock_restart(csfml_options->clock);
        sfSleep(sfMilliseconds(10));
    }
}
