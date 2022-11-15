/*
** EPITECH PROJECT, 2022
** my_put_nbr_float.c
** File description:
** my_put_nbr_float.c
*/

int my_putstr(char *str);

int my_putchar(char c);

long int my_compute_power_rec(long int nb, int p);

double special_cases(double nb, int *j, int precision)
{
    int *ptr = j;
    if (nb > 0 && nb < 1)
        *ptr += my_putchar('0');
    if (nb < 0) {
        my_putchar('-');
        *ptr = *ptr + 1;
        return nb = nb * -1;
    }
    if (nb == 0) {
        precision > 0 ? my_putstr("0.") : my_putstr("0");
        for (int x = 0; x < precision; x++)
            *ptr += my_putchar('0');
    }
    return nb;
}

void print_float(char *str, int i)
{
    for (int x = i - 1; x > -1; x--)
        my_putchar(str[x]);
}

int my_put_nbr_float(double nb, int pres)
{
    int i = 0;
    int j = 0;
    char str[34] = {0};
    nb = special_cases(nb, &j, pres) * my_compute_power_rec(10, pres + 1);
    long int nb_int = (long int)(nb);
    long int nb_start = (long int)(nb);
    while (nb_int / 10) {
        if (i == 0 && (nb_int / 10) % 10 < nb_start % 10 && nb_start % 10 > 5)
            str[i] = ((((nb_int / 10) % 10) + 1) + '0');
        else
            str[i] = ((nb_int / 10) % 10) + '0';
        nb_int = nb_int / 10;
        if (i == (pres - 1)) {
            i++;
            str[i] = '.';
        }
        i++;
    }
    print_float(str, i);
    return i + j;
}
