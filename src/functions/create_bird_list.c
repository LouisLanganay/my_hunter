/*
** EPITECH PROJECT, 2022
** my_hunter.c
** File description:
** create_bird_list
*/

#include "../../includes/hunter.h"

birds_list new_bird(birds_list **birds, int i, int type, game_struct *game)
{
    birds_list *bird = malloc(sizeof(*bird));
    bird->texture = sfTexture_createFromFile("assets/bot-rec.png", NULL);
    bird->rect = (sfIntRect){0, 0, 167, 447};
    bird->sprite = sfSprite_create();
    bird->dead_sound = sfMusic_createFromFile("sounds/die/die1.ogg");
    bird->spawn_sound = sfMusic_createFromFile("sounds/spawn/spawn1.ogg");
    bird->position.x = rand() % 880;
    bird->position.y = (game->spawn_min + rand() %
    (game->spawn_max + 1 - game->spawn_min));
    bird->rect_count = 0;
    bird->rect_speed = 8;
    bird->direction = rand() % 2;
    bird->alive = 0;
    bird->bird_id = i;
    bird->type = type;
    sfMusic_setVolume(bird->dead_sound, 10);
    sfSprite_setOrigin(bird->sprite, (sfVector2f){0, bird->rect.height});
    sfSprite_setPosition(bird->sprite, bird->position);
    bird->next = *birds;
    *birds = bird;
}

void create_bird_list(birds_list **birds, game_struct *game)
{
    for (int i = 0; i < 10; i++) {
        new_bird(birds, i, 0, game);
    }
}
