/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** bootstrap
*/

#include "../includes/my.h"
#include "../includes/hunter.h"

int free_all(csfml_struct *csfml_options,
birds_list *birds,
game_struct *game,
vandal_sounds_s *vandal_sounds)
{
    free(csfml_options);
    free(birds);
    free(game);
    free(vandal_sounds);
}

int main(int ac, char **av)
{
    csfml_struct *csfml_options = malloc(sizeof(csfml_struct));
    birds_list *birds = malloc(sizeof(birds_list));
    game_struct *game = malloc(sizeof(game_struct));
    vandal_sounds_s *vandal_sounds = malloc(sizeof(vandal_sounds_s));
    if (check_arguments(ac, av, game) != 0)
        return free_all(csfml_options, birds, game, vandal_sounds);
    init_struct(csfml_options);
    init_vandal_sounds(vandal_sounds);
    init_game_struct(game);
    create_bird_list(&birds, game);
    create_window(csfml_options, birds, game, vandal_sounds);
    destroy_window(csfml_options, birds, game, vandal_sounds);
    free_all(csfml_options, birds, game, vandal_sounds);
    return 0;
}
