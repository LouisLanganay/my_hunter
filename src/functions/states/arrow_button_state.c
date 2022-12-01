/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** arrow_button.c
*/

#include "../../../includes/hunter.h"

void arrowb_state(csfml_struct *csfml_options,
    game_struct *game,
    sfVector2i posM)
{
    sfVector2f posB = sfSprite_getPosition(game->btn->arrow_sprite);
    if (posM.x >= posB.x && posM.x <= posB.x + game->btn->arrow_rect.width &&
        posM.y >= posB.y && posM.y <= posB.y + game->btn->arrow_rect.height) {
            if (game->btn->arrow_hovered != 1) {
                game->btn->arrow_hovered = 1;
                sfMusic_setPlayingOffset(game->b_hover, sfSeconds(0));
                sfMusic_play(game->b_hover);
            }
            game->btn->arrow_rect.left = game->btn->arrow_rect.width;
        } else {
            game->btn->arrow_hovered = 0;
            game->btn->arrow_rect.left = 0;
        }
}
