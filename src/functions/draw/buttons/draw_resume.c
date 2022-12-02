/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw_slider.c
*/

#include "../../../../includes/hunter.h"

void draw_resume_button(csfml_struct *csfml_options, game_struct *game)
{
    if (game->paused == 1) {
        sfSprite_setTexture(game->btn->startb_sprite,
            game->btn->startb_texture, sfTrue);
        sfSprite_setTextureRect(game->btn->startb_sprite,
            game->btn->startb_rect);
        sfSprite_setPosition(game->btn->startb_sprite, (sfVector2f){255, 420});
        sfRenderWindow_drawSprite(csfml_options->window,
            game->btn->startb_sprite, NULL);
    }
}
