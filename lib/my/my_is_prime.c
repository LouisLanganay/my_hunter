/*
** EPITECH PROJECT, 2022
** task06
** File description:
** task06
*/

int my_is_prime(int nb)
{
    if (nb <= 1)
        return (0);
    for (int i = 1 ; i <= nb ; i++){
        if ((nb % i == 0) && (i != 1 && i != nb))
            return (0);
    }
    return (1);
}
