/*
** EPITECH PROJECT, 2022
** task04
** File description:
** task04
*/

float my_compute_power_rec(float nb, float p)
{
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    if (p <= 1)
        return (nb);
    return nb * my_compute_power_rec(nb, p - 1);
}
