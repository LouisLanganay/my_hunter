/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** bootstrap
*/

#include "../includes/my.h"
#include "../includes/hunter.h"

csfml_struct init_struct(csfml_struct *csfml_options)
{
    csfml_options->mode = (sfVideoMode){880, 600, 32};
    csfml_options->window = sfRenderWindow_create(csfml_options->mode,
    "SFML window", sfResize | sfClose, 0);
    csfml_options->texture = sfTexture_createFromFile("./assets/background.jpg",
    NULL);
    csfml_options->sprite = sfSprite_create();
    csfml_options->clock = sfClock_create();
    csfml_options->event;
}

bird_struct create_bird(bird_struct *bird)
{
    bird->texture = sfTexture_createFromFile("./assets/duck.png",
    NULL);
    bird->sprite = sfSprite_create();
    bird->rect.height = 110;
    bird->rect.width = 110;
    bird->rect.left = 0;
    bird->rect.top = 0;
    bird->position.x = rand() % 800;
    bird->position.y = rand() % 400;
    bird->rect_count = 0;
    bird->rect_speed = 8;
    bird->direction = 1;
}

int main(int ac, char **av)
{
    if (check_arguments(ac, av) != 0)
        return (0);
    csfml_struct *csfml_options = malloc(sizeof(csfml_struct));
    bird_struct *bird = malloc(sizeof(bird_struct));
    init_struct(csfml_options);
    create_bird(bird);
    create_window(csfml_options, bird);
    destroy_window(csfml_options, bird);
    free(csfml_options);
    free(bird);
    return 0;
}