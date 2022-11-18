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
    if (posM.x >= posB.x && posM.x <= posB.x + bird->rect.width)
        if (posM.y >= posB.y && posM.y <= posB.y + bird->rect.height)
            return (1);
    return (0);
}

void dead_sound(birds_list *bird)
{
    if (bird->dead_sound != NULL) {
        sfMusic_setPlayingOffset(bird->dead_sound, sfSeconds(0));
        sfMusic_play(bird->dead_sound);
    }
}

void spawn_sound(birds_list *bird)
{
    if (bird->spawn_sound != NULL) {
        sfMusic_setPlayingOffset(bird->spawn_sound, sfSeconds(0));
        sfMusic_play(bird->spawn_sound);
    }
}

void mouse_click_left(csfml_struct *csfml_options, birds_list *birds)
{
    birds_list *bird = birds;
    sfVector2i posM = sfMouse_getPositionRenderWindow(csfml_options->window);
    printf("x: %i, y: %i\n", posM.x, posM.y);
    for (int i = 0; i < 10; i++) {
        sfVector2f posB = sfSprite_getPosition(bird->sprite);
        if (bird_hit_or_not(posM, posB, bird) == 1) {
            dead_sound(bird);
            bird->alive = 0;
            bird->direction = rand() % 2;
            bird->position.x = rand() % csfml_options->mode.width;
            bird->position.y = 275 + rand() % (400 + 1 - 275);
            sfSprite_setPosition(bird->sprite, bird->position);
            spawn_sound(bird);
        }
        bird = bird->next;
    }
}
