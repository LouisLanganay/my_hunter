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
    #include <time.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <math.h>

    typedef struct bird_struct {
        sfTexture* texture;
        sfIntRect rect;
        sfSprite* sprite;
        sfVector2f position;
        int rect_count;
        int rect_speed;
        int direction;
    } bird_struct;

    typedef struct csfml_struct {
        sfEvent event;
        sfIntRect rect;
        sfClock* clock;
        sfVideoMode mode;
        sfSprite* sprite;
        sfTexture* texture;
        sfRenderWindow* window;
    } csfml_struct;

    void create_window(csfml_struct *csfml_options, bird_struct *bird);

    void destroy_window(csfml_struct *csfml_options, bird_struct *bird);

    void close_window(csfml_struct *csfml_options);

    void handle_events(csfml_struct *csfml_options, bird_struct *bird);
    
    void mouse_click_left(csfml_struct *csfml_options, bird_struct *bird);

    void bird_moovment(bird_struct *bird, csfml_struct *csfml_options);
    
#endif
