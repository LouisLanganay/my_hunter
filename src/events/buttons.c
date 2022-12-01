/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** buttons.c
*/

#include "../../includes/hunter.h"

void start_button(csfml_struct *csfml_options,
game_struct *game,
sfVector2i posM)
{
    sfVector2f posB = sfSprite_getPosition(game->btn->startb_sprite);
    if ((posM.x >= posB.x && posM.x <= posB.x + game->btn->startb_rect.width) &&
    (posM.y >= posB.y && posM.y <= posB.y + game->btn->startb_rect.height)) {
            sfRenderWindow_clear(csfml_options->window, sfBlack);
            sfRenderWindow_drawSprite(csfml_options->window,
                csfml_options->intro_sprite, NULL);
            sfRenderWindow_display(csfml_options->window);
            sfMusic_setPlayingOffset(game->b_click, sfSeconds(0));
            sfMusic_play(game->b_click);
            if (game->skip_intro != 1) {
                sfMusic_play(game->intro_sound);
                sfSleep(sfSeconds(10));
            }
            game->skip_intro = 1;
            game->started = 1;
            game->paused = 0;
        }
}

void exit_button(csfml_struct *csfml_options,
game_struct *game,
sfVector2i posM)
{
    sfVector2f posB = sfSprite_getPosition(game->btn->exitb_sprite);
    if ((posM.x >= posB.x && posM.x <= posB.x + game->btn->exitb_rect.width) &&
    (posM.y >= posB.y && posM.y <= posB.y + game->btn->exitb_rect.height)) {
            sfMusic_setPlayingOffset(game->b_click, sfSeconds(0));
            sfMusic_play(game->b_click);
            sfSleep(sfSeconds(1));
            close_window(csfml_options);
        }
}

void close_button(csfml_struct *csfml_options,
game_struct *game,
sfVector2i posM)
{
    sfVector2f posB = sfSprite_getPosition(game->btn->closeb_sprite);
    if ((posM.x >= posB.x && posM.x <= posB.x + game->btn->closeb_rect.width) &&
    (posM.y >= posB.y && posM.y <= posB.y + game->btn->closeb_rect.height)) {
            sfMusic_setPlayingOffset(game->b_click, sfSeconds(0));
            sfMusic_play(game->b_click);
            game->paused = 0;
        }
}

void arrow_button(csfml_struct *csfml_options,
game_struct *game,
sfVector2i posM)
{
    sfVector2f posB = sfSprite_getPosition(game->btn->arrow_sprite);
    if ((posM.x >= posB.x && posM.x <= posB.x + game->btn->arrow_rect.width) &&
    (posM.y >= posB.y && posM.y <= posB.y + game->btn->arrow_rect.height)) {
            sfMusic_setPlayingOffset(game->b_click, sfSeconds(0));
            sfMusic_play(game->b_click);
            sfColor colors[] = {sfWhite, sfRed, sfBlue, sfGreen, sfYellow};
            sfSprite_setColor(game->crosshair_sprite, colors[rand() % 5]);
            while (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
                sfSleep(sfSeconds(0.01));
            }
        }
}
