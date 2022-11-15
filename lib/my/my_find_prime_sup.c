/*
** EPITECH PROJECT, 2022
** task07
** File description:
** task07
*/

int my_is_prime2(int nb)
{
    if (nb <= 1)
        return (0);
    for (int i = 1 ; i <= nb ; i++){
        if ((nb % i == 0) && (i != 1 && i != nb))
            return (0);
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    int i = nb;
    while (my_is_prime2(i) != 1){
        i++;
    }
    return (i);
}
