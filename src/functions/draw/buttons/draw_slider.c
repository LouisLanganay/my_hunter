/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw_slider.c
*/

#include "../../../../includes/hunter.h"

void draw_slider(csfml_struct *csfml_options, game_struct *game)
{
    sfSprite_setTexture(game->btn->slider_sprite,
        game->btn->slider_texture, sfTrue);
    sfSprite_setScale(game->btn->slider_sprite, (sfVector2f){0.3, 0.3});
    int c_pos = (game->general_vol * (797 - 452)) / 100 + 445;
    sfSprite_setPosition(game->btn->slider_sprite, (sfVector2f){c_pos, 120});
    sfRenderWindow_drawSprite(csfml_options->window,
        game->btn->slider_sprite, NULL);
}
