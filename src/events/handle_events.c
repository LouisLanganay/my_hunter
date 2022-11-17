/*
** EPITECH PROJECT, 2022
** my_hunter.c
** File description:
** handle_events.c
*/

#include "../../includes/hunter.h"

void handle_events(csfml_struct *csfml_options, bird_struct *bird)
{
    sfRenderWindow_pollEvent(csfml_options->window, &csfml_options->event);
    if (csfml_options->event.type == sfEvtClosed)
        close_window(csfml_options);
    if (csfml_options->event.type == sfEvtMouseMoved) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == 1)
            mouse_click_left(csfml_options, bird);
    }
}