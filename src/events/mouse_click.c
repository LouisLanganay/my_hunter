/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** mouse_click.c
*/

#include "../../includes/hunter.h"

int bird_hit_or_not(sfVector2i posM, sfVector2f posB)
{
    if (posM.x >= posB.x && posM.x <= posB.x + 110)
        if (posM.y >= posB.y && posM.y <= posB.y + 110)
            return (1);
    return (0);
}

void mouse_click_left(csfml_struct *csfml_options, bird_struct *bird)
{
    sfVector2i posM = sfMouse_getPositionRenderWindow(csfml_options->window);
    sfVector2f posB = sfSprite_getPosition(bird->sprite);

    //printf("Mouse x=%i y=%i\n", posM.x, posM.y);
    //printf("bird x=%f y=%f\n", posB.x, posB.y);

    if (bird_hit_or_not(posM, posB) == 1) {
        printf("hit\n");
        bird->position.x = rand() % 800;
        bird->position.y = rand() % 400;
        sfSprite_setPosition(bird->sprite, bird->position);
    }
}