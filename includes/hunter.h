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

    typedef struct csfml_struct {
        sfEvent event;
        sfClock* clock;
        sfVideoMode mode;
        sfSprite* sprite;
        sfTexture* texture;
        sfRenderWindow* window;
    } csfml_struct;

    void create_window(csfml_struct *csfml_options);

    void destroy_window(csfml_struct *csfml_options);

    void close_window(csfml_struct *csfml_options);

    void handle_events(csfml_struct *csfml_options);
    
    void mouse_click_left(csfml_struct *csfml_options);
    
#endif
