/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw_vandal.c
*/

#include "../../../includes/hunter.h"
#include "../../../includes/my.h"

void draw_vandal(csfml_struct *csfml_options)
{
    sfSprite_setTexture(csfml_options->vandal_sprite,
    csfml_options->vandal_texture, sfTrue);
    sfSprite_setTextureRect(csfml_options->vandal_sprite,
    csfml_options->vandal_rect);
    sfSprite_setScale(csfml_options->vandal_sprite, (sfVector2f){0.4, 0.4});
    sfSprite_setPosition(csfml_options->vandal_sprite, (sfVector2f){525, 400});
    sfRenderWindow_drawSprite(csfml_options->window,
    csfml_options->vandal_sprite, NULL);
    csfml_options->vandal_rect.left = 0;
}
