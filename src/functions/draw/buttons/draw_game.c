/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw_slider.c
*/

#include "../../../../includes/hunter.h"

void draw_game_button(csfml_struct *csfml_options, game_struct *game)
{
    sfVector2f game_pos = {235, 130};
    float ratio = sfSprite_getScale(game->btn->game_sprite).x;

    sfSprite_setTexture(game->btn->game_sprite,
        game->btn->game_texture, sfTrue);
    sfSprite_setPosition(game->btn->game_sprite, (sfVector2f){
        game_pos.x - ((game_pos.x * ratio) - game_pos.x),
        game_pos.y - ((game_pos.y * ratio) - game_pos.y)});
    sfRenderWindow_drawSprite(csfml_options->window,
        game->btn->game_sprite, NULL);
}
