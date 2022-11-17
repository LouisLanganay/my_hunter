/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** mouse_click.c
*/

#include "../../includes/hunter.h"

int bird_hit_or_not(sfVector2i posM, sfVector2f posB, birds_list *bird)
{
    if (posM.x >= posB.x && posM.x <= posB.x + 110)
        if (posM.y >= posB.y && posM.y <= posB.y + 110)
            return (1);
    return (0);
}

void dead_sound(birds_list *bird)
{
    if (bird->dead_sound != NULL) {
        sfMusic_setPlayingOffset(bird->dead_sound, sfSeconds(0.4));
        sfMusic_play(bird->dead_sound);
    }
}

void spawn_sound(birds_list *bird)
{
    if (bird->spawn_sound != NULL) {
        sfMusic_setPlayingOffset(bird->spawn_sound, sfSeconds(0.4));
        sfMusic_play(bird->spawn_sound);
    }
}

void mouse_click_left(csfml_struct *csfml_options, birds_list *birds)
{
    birds_list *bird = birds;
    sfVector2i posM = sfMouse_getPositionRenderWindow(csfml_options->window);
    for (int i = 0; i < 10; i++) {
        sfVector2f posB = sfSprite_getPosition(bird->sprite);
        if (bird_hit_or_not(posM, posB, bird) == 1) {
            dead_sound(bird);
            bird->direction = rand() % 2;
            bird->position.x = rand() % csfml_options->mode.width;
            bird->position.y = rand() % (csfml_options->mode.height - 200);
            sfSprite_setPosition(bird->sprite, bird->position);
            dead_sound(bird);
        }
        bird = bird->next;
    }


}