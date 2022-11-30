/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** mouse_click.c
*/

#include "../../includes/hunter.h"

int bird_hit_or_not(sfVector2i posM, sfVector2f posB, birds_list *bird)
{
    if (bird->alive == 0)
        return 0;
    if (bird->direction == 1)
        if ((posM.x >= posB.x && posM.x <= posB.x + bird->rect.width *
        sfSprite_getScale(bird->sprite).x) && (posM.y <= posB.y && posM.y >=
        posB.y - bird->rect.height * sfSprite_getScale(bird->sprite).y))
            return 1;
    if (bird->direction == 0)
        if ((posM.x >= posB.x && posM.x <= posB.x + bird->rect.width *
        (sfSprite_getScale(bird->sprite).x * -1)) && (posM.y <= posB.y && posM.y
        >= posB.y - bird->rect.height * sfSprite_getScale(bird->sprite).y))
            return 1;
    return (0);
}

void dead_sound(birds_list *bird)
{
    if (bird->dead_sound != NULL) {
        sfMusic_setPlayingOffset(bird->dead_sound, sfSeconds(0));
        sfMusic_play(bird->dead_sound);
    }
}

void start_button(csfml_struct *csfml_options,
game_struct *game,
sfVector2i posM)
{
    sfVector2f posB = sfSprite_getPosition(game->startb_sprite);
    if ((posM.x >= posB.x && posM.x <= posB.x + game->startb_rect.width) &&
        (posM.y >= posB.y && posM.y <= posB.y + game->startb_rect.height)) {
            if (game->started == 1) {
                game->paused = 0;
                return;
            }
            sfRenderWindow_clear(csfml_options->window, sfBlack);
            sfRenderWindow_drawSprite(csfml_options->window,
                csfml_options->intro_sprite, NULL);
            sfRenderWindow_display(csfml_options->window);
            game->started = 1;
            sfMusic_play(game->startb_click);
            sfMusic_play(game->intro_sound);
            sfSleep(sfSeconds(10));
            game->paused = 0;
        }
}

void vandal_shoot(csfml_struct *csfml_options,
game_struct *game,
vandal_sounds_s *vandal_sounds)
{
    csfml_options->vandal_rect.left = csfml_options->vandal_rect.width;
    sfMusic_setPlayingOffset(vandal_sounds->shoot_sound1, sfSeconds(0.2));
    sfMusic_play(vandal_sounds->shoot_sound1);
}

void mouse_click_left(csfml_struct *csfml_options,
birds_list *birds,
game_struct *game,
vandal_sounds_s *vandal_sounds)
{
    birds_list *bird = birds;
    sfVector2i posM = sfMouse_getPositionRenderWindow(csfml_options->window);
    if (game->started == 0 || game->paused == 1)
        return start_button(csfml_options, game, posM);
    vandal_shoot(csfml_options, game, vandal_sounds);
    for (int i = 0; i < 10; i++) {
        sfVector2f posB = sfSprite_getPosition(bird->sprite);
        if (bird_hit_or_not(posM, posB, bird) == 1) {
            dead_sound(bird);
            bird->alive = 0;
            bird->direction = rand() % 2;
            bird->position.x = rand() % csfml_options->mode.width;
            bird->position.y = (480 + rand() %
            (620 + 1 - 480));
            sfSprite_setPosition(bird->sprite, bird->position);
            game->score += 1;
        }
        bird = bird->next;
    }
}
