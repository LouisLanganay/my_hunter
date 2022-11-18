/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** game_events.c
*/

#include "../includes/hunter.h"

void game_events(birds_list *birds,
csfml_struct *csfml_options,
game_struct *game)
{
    int ratio = rand() % 10000;
    if (game->spawnRatio < ratio) {
        for (int i = 0; i < 10; i++) {
            if (birds->alive == 0) {
                birds->alive = 1;
                sfMusic_play(birds->spawn_sound);
                break;
            }
            birds = birds->next;
        }
    }
}
