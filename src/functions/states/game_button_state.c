/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** game_button.c
*/

#include "../../../includes/hunter.h"

void gameb_state(csfml_struct *csfml_options,
    game_struct *game,
    sfVector2i posM)
{
    sfVector2f posB = sfSprite_getPosition(game->btn->game_sprite);
    if (posM.x >= posB.x && posM.x <= posB.x + 400 &&
        posM.y >= posB.y && posM.y <= posB.y + 305) {
            if (game->btn->game_hovered != 1) {
                game->btn->game_hovered = 1;
                sfMusic_setPlayingOffset(game->b_hover, sfSeconds(0));
                sfMusic_play(game->b_hover);
                sfSprite_setScale(game->btn->game_sprite,
                    (sfVector2f){1.01, 1.01});
            }
        } else {
            game->btn->game_hovered = 0;
            sfSprite_setScale(game->btn->game_sprite, (sfVector2f){1, 1});
        }
}
