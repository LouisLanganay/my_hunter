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
        sfMusic* intro_sound;
        sfTexture* crosshair_texture;
        sfSprite* crosshair_sprite;
        sfTexture* startb_texture;
        sfTexture* page1_texture;
        sfSprite* page1_sprite;
        sfTexture* intro_texture;
        sfSprite* intro_sprite;
        sfSprite* startb_sprite;
        sfIntRect startb_rect;
        sfMusic* startb_click;
        sfMusic* startb_hover;
        sfMusic* shoot_sound;
        int startb_hovered;
        int spawnRatio;
        float bot_scale;
        int started;
        int spawn_max;
        int spawn_min;
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

    void destroy_window(csfml_struct *csfml_options,
    birds_list *birds,
    game_struct *game);

    void close_window(csfml_struct *csfml_options);

    void handle_events(csfml_struct *csfml_options,
                        birds_list *birds,
                        game_struct *game);

    void mouse_click_left(csfml_struct *csfml_options,
                        birds_list *birds,
                        game_struct *game);

    void bird_moovment(birds_list *bird, csfml_struct *csfml_options);

    int check_arguments(int ac, char **av);

    void game_events(birds_list *birds,
                    csfml_struct *csfml_options,
                    game_struct *game);

#endif
