/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** exit_button.c
*/

#include "../../../includes/hunter.h"

void exitb_state(csfml_struct *csfml_options,
    game_struct *game,
    sfVector2i posM)
{
    sfVector2f posB = sfSprite_getPosition(game->btn->exitb_sprite);
    if (posM.x >= posB.x && posM.x <= posB.x + game->btn->exitb_rect.width &&
        posM.y >= posB.y && posM.y <= posB.y + game->btn->exitb_rect.height) {
            if (game->btn->exitb_hovered != 1) {
                game->btn->exitb_hovered = 1;
                sfMusic_setPlayingOffset(game->b_hover, sfSeconds(0));
                sfMusic_play(game->b_hover);
            }
            game->btn->exitb_rect.left = game->btn->exitb_rect.width;
        } else {
            game->btn->exitb_hovered = 0;
            game->btn->exitb_rect.left = 0;
        }
}
