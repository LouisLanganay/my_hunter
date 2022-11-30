/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** enter_range.c
*/

#include "../../../includes/hunter.h"

void enter_range_draw(csfml_struct *csfml_options, game_struct *game)
{
    sfSprite_setTexture(game->scenes->range_sprite,
        game->scenes->range_texture, sfTrue);
    sfSprite_setPosition(game->scenes->range_sprite, (sfVector2f){0, 0});
    sfRenderWindow_drawSprite(csfml_options->window,
        game->scenes->range_sprite, NULL);
    sfSprite_setTexture(game->btn->startb_sprite,
        game->btn->startb_texture, sfTrue);
    sfSprite_setTextureRect(game->btn->startb_sprite, game->btn->startb_rect);
    sfSprite_setPosition(game->btn->startb_sprite, (sfVector2f){255, 470});
    sfRenderWindow_drawSprite(csfml_options->window,
        game->btn->startb_sprite, NULL);
}
