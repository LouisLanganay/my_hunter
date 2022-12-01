/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** close_button.c
*/

#include "../../../includes/hunter.h"

void closeb_state(csfml_struct *csfml_options,
    game_struct *game,
    sfVector2i posM)
{
    sfVector2f posB = sfSprite_getPosition(game->btn->closeb_sprite);
    if (posM.x >= posB.x && posM.x <= posB.x + game->btn->closeb_rect.width &&
        posM.y >= posB.y && posM.y <= posB.y + game->btn->closeb_rect.height) {
            if (game->btn->closeb_hovered != 1) {
                game->btn->closeb_hovered = 1;
                sfMusic_setPlayingOffset(game->b_hover, sfSeconds(0));
                sfMusic_play(game->b_hover);
            }
            game->btn->closeb_rect.left = game->btn->closeb_rect.width;
        } else {
            game->btn->closeb_hovered = 0;
            game->btn->closeb_rect.left = 0;
        }
}
