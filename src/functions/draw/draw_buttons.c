/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw_buttons.c
*/

#include "../../../includes/hunter.h"

void draw_resume_button(csfml_struct *csfml_options, game_struct *game)
{
    if (game->paused == 1) {
        sfSprite_setTexture(game->startb_sprite, game->startb_texture, sfTrue);
        sfSprite_setTextureRect(game->startb_sprite, game->startb_rect);
        sfSprite_setPosition(game->startb_sprite, (sfVector2f){255, 470});
        sfRenderWindow_drawSprite(csfml_options->window,
            game->startb_sprite, NULL);
    }
}
