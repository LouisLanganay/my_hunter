/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** bootstrap
*/

#include "../includes/my.h"
#include "../includes/hunter.h"

game_struct init_game_struct(game_struct *game)
{
    game->spawnRatio = 9900;
}

csfml_struct init_struct(csfml_struct *csfml_options)
{
    csfml_options->mode = (sfVideoMode){880, 600, 32};
    csfml_options->window = sfRenderWindow_create(csfml_options->mode,
    "SFML window", sfResize | sfClose, 0);
    csfml_options->texture = sfTexture_createFromFile("./assets/backv.png",
    NULL);
    csfml_options->sprite = sfSprite_create();
    csfml_options->clock = sfClock_create();
    csfml_options->event;
}

birds_list new_bird(birds_list **birds, int i, int type)
{
    birds_list *bird = malloc(sizeof(*bird));

    bird->texture = sfTexture_createFromFile("assets/bot-rec.png", NULL);
    bird->rect = (sfIntRect){0, 0, 167, 447};
    bird->sprite = sfSprite_create();
    bird->position = (sfVector2f){rand() % 800, 275 + rand() % (400 + 1 - 275)};
    bird->dead_sound = sfMusic_createFromFile("sounds/die/die1.ogg");
    bird->spawn_sound = sfMusic_createFromFile("sounds/spawn/spawn1.ogg");
    bird->rect_count = 0;
    bird->rect_speed = 8;
    bird->direction = rand() % 2;
    bird->alive = 0;
    bird->bird_id = i;
    bird->type = type;
    sfSprite_setTexture(bird->sprite, bird->texture, sfTrue);
    sfSprite_setTextureRect(bird->sprite, bird->rect);
    sfSprite_setPosition(bird->sprite, bird->position);
    bird->next = *birds;
    *birds = bird;
}

void create_bird_list(birds_list **birds)
{
    for (int i = 0; i < 10; i++) {
        new_bird(birds, i, 0);
    }
}

int main(int ac, char **av)
{
    if (check_arguments(ac, av) != 0)
        return (0);
    csfml_struct *csfml_options = malloc(sizeof(csfml_struct));
    birds_list *birds = malloc(sizeof(birds_list));
    game_struct *game = malloc(sizeof(game_struct));
    init_struct(csfml_options);
    init_game_struct(game);
    create_bird_list(&birds);
    create_window(csfml_options, birds, game);
    destroy_window(csfml_options, birds);
    free(csfml_options);
    free(birds);
    free(game);
    return 0;
}
