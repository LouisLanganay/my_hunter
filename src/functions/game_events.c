/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** game_events.c
*/

#include "../includes/hunter.h"

void game_end_event(csfml_struct *csfml_options, game_struct *game)
{
    init_game_struct(game);
    sfRenderWindow_setMouseCursorVisible(csfml_options->window, sfTrue);
}

int bot_remaining(birds_list *birds,
csfml_struct *csfml_options,
game_struct *game)
{
    int remaining = game->remaining - game->score;
    if (remaining == 0)
        game_end_event(csfml_options, game);
    int spawned = 0;
    for (int i = 0; i < 10; i++) {
        if (birds->alive == 1)
            spawned++;
        birds = birds->next;
    }
    return remaining - spawned;
}

void spawn_birds(csfml_struct *csfml_options,
    game_struct *game,
    birds_list *birds)
{
    int ratio = rand() % 10000;
    if (9900 > ratio || game->started == 0 ||
        bot_remaining(birds, csfml_options, game) < 1)
        return;
    for (int i = 0; i < 10; i++) {
        if (birds->alive != 0) {
            birds = birds->next;
            continue;
        }
        birds->alive = 1;
        if (birds->spawn_sound != NULL) {
            sfMusic_setPlayingOffset(birds->spawn_sound, sfSeconds(0));
            sfMusic_play(birds->spawn_sound);
        }
        break;
        birds = birds->next;
    }
}

void game_events(birds_list *birds,
csfml_struct *csfml_options,
game_struct *game)
{
    buttons_states(csfml_options, game);
    if (game->started == 0)
        return enter_range_draw(csfml_options, game);
    if (game->paused == 1)
        return settings_draw(csfml_options, game);
    spawn_birds(csfml_options, game, birds);
}
