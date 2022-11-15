/*
** EPITECH PROJECT, 2022
** task05
** File description:
** task05
*/

int my_compute_square_root(int nb)
{
    int result = 0;
    int no_int = 0;
    for (int i = 0 ; (i * i != nb) && (no_int != 1) ; i++){
        if (i > nb)
            no_int = 1;
        result++;
    }
    if (no_int == 1)
        return (0);
    else
        return (result);
}
