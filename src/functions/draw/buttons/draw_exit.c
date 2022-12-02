/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw_slider.c
*/

#include "../../../../includes/hunter.h"

void draw_exit_button(csfml_struct *csfml_options, game_struct *game)
{
    sfSprite_setTexture(game->btn->exitb_sprite,
        game->btn->exitb_texture, sfTrue);
    sfSprite_setTextureRect(game->btn->exitb_sprite,
        game->btn->exitb_rect);
    sfSprite_setPosition(game->btn->exitb_sprite, (sfVector2f){240, 510});
    sfRenderWindow_drawSprite(csfml_options->window,
        game->btn->exitb_sprite, NULL);
}
