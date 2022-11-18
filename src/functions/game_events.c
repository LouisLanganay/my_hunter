/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** game_events.c
*/

#include "../includes/hunter.h"

void enter_range(csfml_struct *csfml_options, game_struct *game)
{
    sfVector2i posM = sfMouse_getPositionRenderWindow(csfml_options->window);
    sfVector2f posB = sfSprite_getPosition(game->startb_sprite);
    if (posM.x >= posB.x && posM.x <= posB.x + game->startb_rect.width &&
        posM.y >= posB.y && posM.y <= posB.y + game->startb_rect.height) {
            if (game->startb_hovered != 1) {
                game->startb_hovered = 1;
                sfMusic_setPlayingOffset(game->startb_hover, sfSeconds(0));
                sfMusic_play(game->startb_hover);
            }
            game->startb_rect.left = game->startb_rect.width;

        } else {
            game->startb_hovered = 0;
            game->startb_rect.left = 0;
        }
    sfSprite_setTexture(game->startb_sprite, game->startb_texture,
    sfTrue);
    sfSprite_setTextureRect(game->startb_sprite, game->startb_rect);
    sfSprite_setPosition(game->startb_sprite,
    (sfVector2f){255, 400});
    sfRenderWindow_drawSprite(csfml_options->window, game->startb_sprite,
    NULL);
}

void game_events(birds_list *birds,
csfml_struct *csfml_options,
game_struct *game)
{
    int ratio = rand() % 10000;
    if (game->started == 0)
        return enter_range(csfml_options, game);
    if (game->spawnRatio < ratio && game->started == 1) {
        for (int i = 0; i < 10; i++) {
            if (birds->alive == 0) {
                birds->alive = 1;
                if (birds->spawn_sound != NULL) {
                    sfMusic_setPlayingOffset(birds->spawn_sound, sfSeconds(0));
                    sfMusic_play(birds->spawn_sound);
                }
                break;
            }
            birds = birds->next;
        }
    }
}
