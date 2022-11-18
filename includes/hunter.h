/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter header
*/

#ifndef _HUNTER_H__
    #define _HUNTER_H__

    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/Audio.h>
    #include <time.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <math.h>

    typedef struct game_struct {
        int spawnRatio;
    } game_struct;

    typedef struct birds_list {
        sfTexture* texture;
        sfIntRect rect;
        sfSprite* sprite;
        sfVector2f position;
        sfMusic* dead_sound;
        sfMusic* spawn_sound;
        int rect_count;
        int rect_speed;
        int direction;
        int alive;
        int bird_id;
        int type;
        struct birds_list* next;
    } birds_list;

    typedef struct csfml_struct {
        sfEvent event;
        sfIntRect rect;
        sfClock* clock;
        sfVideoMode mode;
        sfSprite* sprite;
        sfTexture* texture;
        sfRenderWindow* window;
    } csfml_struct;

    void create_window(csfml_struct *csfml_options,
                        birds_list *birds,
                        game_struct *game);

    void destroy_window(csfml_struct *csfml_options, birds_list *birds);

    void close_window(csfml_struct *csfml_options);

    void handle_events(csfml_struct *csfml_options, birds_list *birds);

    void mouse_click_left(csfml_struct *csfml_options, birds_list *birds);

    void bird_moovment(birds_list *bird, csfml_struct *csfml_options);

    int check_arguments(int ac, char **av);

    void game_events(birds_list *birds,
                    csfml_struct *csfml_options,
                    game_struct *game);

#endif
