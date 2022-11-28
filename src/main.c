/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** bootstrap
*/

#include "../includes/my.h"
#include "../includes/hunter.h"

vandal_sounds_s init_vandal_sounds(vandal_sounds_s *vandal_sounds)
{
    vandal_sounds->shoot_sound1 = sfMusic_createFromFile(
        "./sounds/vandal/vandal1.ogg");
    vandal_sounds->shoot_sound2 = sfMusic_createFromFile(
        "./sounds/vandal/vandal2.ogg");
    vandal_sounds->shoot_sound3 = sfMusic_createFromFile(
        "./sounds/vandal/vandal3.ogg");
    vandal_sounds->shoot_sound4 = sfMusic_createFromFile(
        "./sounds/vandal/vandal4.ogg");
    vandal_sounds->shoot_sound5 = sfMusic_createFromFile(
        "./sounds/vandal/vandal5.ogg");
    vandal_sounds->count = 0;
}

game_struct init_game_struct(game_struct *game)
{
    game->spawnRatio = 9900;
    game->spawn_max = 620;
    game->spawn_min = 480;
    game->intro_sound = sfMusic_createFromFile("sounds/musics/intro.ogg");
    game->crosshair_texture = sfTexture_createFromFile("assets/c2.png", NULL);
    game->crosshair_sprite = sfSprite_create();
    game->startb_texture = sfTexture_createFromFile("assets/gui/sb.png", NULL);
    game->startb_rect = (sfIntRect){0, 0, 366, 74};
    game->startb_sprite = sfSprite_create();
    game->startb_click = sfMusic_createFromFile("sounds/gui/button2.ogg");
    game->startb_hover = sfMusic_createFromFile("sounds/gui/button1.ogg");
    game->page1_texture = sfTexture_createFromFile("assets/gui/p1.png", NULL);
    game->page1_sprite = sfSprite_create();
    game->started = 0;
    game->text = sfText_create();
    game->text2 = sfText_create();
    game->font = sfFont_createFromFile("fonts/valorant.ttf");
    game->score = 0;
    game->remaining = 20;
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
    csfml_options->vandal_texture = sfTexture_createFromFile(
    "./assets/gui/vandal.png", NULL);
    csfml_options->vandal_sprite = sfSprite_create();
    csfml_options->vandal_rect = (sfIntRect){0, 0, 913, 520};
    csfml_options->intro_texture = sfTexture_createFromFile(
        "./assets/gui/intro_back.png", NULL);
    csfml_options->intro_sprite = sfSprite_create();
    sfSprite_setTexture(csfml_options->intro_sprite,
        csfml_options->intro_texture, sfTrue);
    sfSprite_setScale(csfml_options->intro_sprite, (sfVector2f){0.6, 0.6});
}

int main(int ac, char **av)
{
    if (check_arguments(ac, av) != 0)
        return (0);
    csfml_struct *csfml_options = malloc(sizeof(csfml_struct));
    birds_list *birds = malloc(sizeof(birds_list));
    game_struct *game = malloc(sizeof(game_struct));
    vandal_sounds_s *vandal_sounds = malloc(sizeof(vandal_sounds_s));
    init_struct(csfml_options);
    init_vandal_sounds(vandal_sounds);
    init_game_struct(game);
    create_bird_list(&birds, game);
    create_window(csfml_options, birds, game, vandal_sounds);
    destroy_window(csfml_options, birds, game, vandal_sounds);
    free(csfml_options);
    free(birds);
    free(game);
    free(vandal_sounds);
    return 0;
}
