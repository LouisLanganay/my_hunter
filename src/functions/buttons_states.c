/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** buttons_states.c
*/

#include "../../includes/hunter.h"

void startb_state(csfml_struct *csfml_options,
    game_struct *game,
    sfVector2i posM)
{
    sfVector2f posB = sfSprite_getPosition(game->btn->startb_sprite);
    if (posM.x >= posB.x && posM.x <= posB.x + game->btn->startb_rect.width &&
        posM.y >= posB.y && posM.y <= posB.y + game->btn->startb_rect.height) {
            if (game->btn->startb_hovered != 1) {
                game->btn->startb_hovered = 1;
                sfMusic_setPlayingOffset(game->b_hover, sfSeconds(0));
                sfMusic_play(game->b_hover);
            }
            game->btn->startb_rect.left = game->btn->startb_rect.width;

        } else {
            game->btn->startb_hovered = 0;
            game->btn->startb_rect.left = 0;
        }
}

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

void buttons_states(csfml_struct *csfml_options, game_struct *game)
{
    sfVector2i posM = sfMouse_getPositionRenderWindow(csfml_options->window);
    if (game->paused == 1) {
        closeb_state(csfml_options, game, posM);
        exitb_state(csfml_options, game, posM);
        return;
    }
    if (game->started == 0) {
        startb_state(csfml_options, game, posM);
        return;
    }
}
