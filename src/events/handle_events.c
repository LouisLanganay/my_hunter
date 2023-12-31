/*
** EPITECH PROJECT, 2022
** my_hunter.c
** File description:
** handle_events.c
*/

#include "../../includes/hunter.h"

void handle_events(csfml_struct *csfml_options,
birds_list *birds,
game_struct *game,
vandal_sounds_s *vandal_sounds)
{
    sfRenderWindow_pollEvent(csfml_options->window, &csfml_options->event);
    if (csfml_options->event.type == sfEvtClosed)
        close_window(csfml_options);
    if (csfml_options->event.type == sfEvtMouseMoved) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == 1)
            mouse_click_left(csfml_options, birds, game, vandal_sounds);
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) == 1)
        mouse_click_left(csfml_options, birds, game, vandal_sounds);
    if (csfml_options->event.type == sfEvtKeyPressed &&
        csfml_options->event.key.code == sfKeyEscape)
            pause_game(csfml_options, game);
}
