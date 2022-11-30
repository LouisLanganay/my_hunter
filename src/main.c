/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** bootstrap
*/

#include "../includes/my.h"
#include "../includes/hunter.h"

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
