/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter header
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>

#ifndef _HUNTER_H__
    #define _HUNTER_H__

    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <stdio.h>
    #include <stdlib.h>

    typedef struct csfml_struct {
        sfVideoMode mode;
        sfRenderWindow* window;
        sfTexture* texture;
        sfSprite* sprite;
        sfEvent event;
    } csfml_struct;

    void create_window(csfml_struct *csfml_options);

    void destroy_window(csfml_struct *csfml_options);
    
#endif
