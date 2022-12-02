/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw_slider.c
*/

#include "../../../../includes/hunter.h"

void draw_close_button(csfml_struct *csfml_options, game_struct *game)
{
    sfSprite_setTexture(game->btn->closeb_sprite,
        game->btn->closeb_texture, sfTrue);
    sfSprite_setTextureRect(game->btn->closeb_sprite,
        game->btn->closeb_rect);
    sfSprite_setPosition(game->btn->closeb_sprite, (sfVector2f){260, 420});
    sfRenderWindow_drawSprite(csfml_options->window,
        game->btn->closeb_sprite, NULL);
}
