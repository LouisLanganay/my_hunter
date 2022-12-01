/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw_croshair.c
*/

#include "../../../includes/hunter.h"
#include "../../../includes/my.h"

void draw_croshair(csfml_struct *csfml_options, game_struct *game)
{
    sfSprite_setTexture(game->crosshair_sprite, game->crosshair_texture,
    sfTrue);
    if (game->paused == 1) {
        sfSprite_setScale(game->crosshair_sprite, (sfVector2f){1.8, 1.8});
        sfSprite_setPosition(game->crosshair_sprite, (sfVector2f){520, 222});
    } else {
        sfRenderWindow_setMouseCursorVisible(csfml_options->window, sfFalse);
        sfSprite_setScale(game->crosshair_sprite, (sfVector2f){1, 1});
        sfSprite_setPosition(game->crosshair_sprite,
        (sfVector2f){sfMouse_getPositionRenderWindow(csfml_options->window).x,
        sfMouse_getPositionRenderWindow(csfml_options->window).y});
    }
    sfRenderWindow_drawSprite(csfml_options->window, game->crosshair_sprite,
    NULL);
}
