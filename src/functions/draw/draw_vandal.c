/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw_vandal.c
*/

#include "../../../includes/hunter.h"
#include "../../../includes/my.h"

#include <math.h>

float vandal_rotation(csfml_struct *csfml_options)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(csfml_options->window);
    float x;
    if (pos.x > csfml_options->mode.width || pos.x < 0) {
        if (pos.x < 0)
            x = 0;
        else
            x = csfml_options->mode.width;
    } else {
        x = pos.x;
    }
    float calc = my_compute_power_rec(x / 300.0, 3);
    return calc;
}

float vandal_position(csfml_struct *csfml_options)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(csfml_options->window);
    float x;
    if (pos.x > csfml_options->mode.width || pos.x < 0) {
        if (pos.x < 0)
            x = 0;
        else
            x = csfml_options->mode.width;
    } else {
        x = pos.x;
    }
    float calc = my_compute_power_rec(x / 100.0, 2) + 520;
    return calc;
}

void draw_vandal(csfml_struct *csfml_options)
{
    sfSprite_setTexture(csfml_options->vandal_sprite,
    csfml_options->vandal_texture, sfTrue);
    sfSprite_setTextureRect(csfml_options->vandal_sprite,
    csfml_options->vandal_rect);
    sfSprite_setRotation(csfml_options->vandal_sprite,
        vandal_rotation(csfml_options));
    sfSprite_setScale(csfml_options->vandal_sprite, (sfVector2f){0.4, 0.4});
    sfSprite_setPosition(csfml_options->vandal_sprite,
        (sfVector2f){vandal_position(csfml_options), 400});
    sfRenderWindow_drawSprite(csfml_options->window,
    csfml_options->vandal_sprite, NULL);
    csfml_options->vandal_rect.left = 0;
}
