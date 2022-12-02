/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw_slider.c
*/

#include "../../../../includes/hunter.h"

void draw_arrow_button(csfml_struct *csfml_options, game_struct *game)
{
    sfSprite_setTexture(game->btn->arrow_sprite,
        game->btn->arrow_texture, sfTrue);
    sfSprite_setTextureRect(game->btn->arrow_sprite,
        game->btn->arrow_rect);
    sfSprite_setScale(game->btn->arrow_sprite, (sfVector2f){0.55, 0.55});
    sfSprite_setPosition(game->btn->arrow_sprite, (sfVector2f){715, 218});
    sfRenderWindow_drawSprite(csfml_options->window,
        game->btn->arrow_sprite, NULL);
}
