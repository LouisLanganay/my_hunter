/*
** EPITECH PROJECT, 2022
** my_put_nbr_scientific
** File description:
** transform a float into scientific notation
*/

#include <stdio.h>

int my_put_nbr_float(double nb, int precision);
int my_putchar(char c);
int my_putstr(char *str);
int my_put_nbr(int nb, int precision);
int my_nbrlen(int nb);

int equal_zero(long double nb, char c, int precision)
{
    int j = 0;
    if (precision > 0)
        j += my_putstr("0.");
    else
        j += my_putstr("0");
    for (int x = 0; x < precision; x++)
        j += my_putchar('0');
    j += my_putchar(c);
    j += my_putstr("+00");
    return (j);
}

int upper_than_1(long double nb, char c, int precision)
{
    int count = 0;
    int a = 0;

    while ((nb) >= 10) {
        nb /= 10;
        count++;
    }
    a += my_put_nbr_float(nb, precision);
    my_putchar(c);
    my_putchar('+');
    a += 2;
    if (count < 10) {
        my_putchar('0');
        a++;
    }
    my_put_nbr(count, 0);
    a += my_nbrlen(count);
    return (a);
}

int lower_than_0(long double nb, char c, int precision)
{
    int count = 0;
    int a = 1;

    nb *= (-1);
    while ((nb) >= 10) {
        nb /= 10;
        count++;
    }
    my_putchar('-');
    a += my_put_nbr_float(nb, precision);
    my_putchar(c);
    my_putchar('+');
    a += 2;
    if (count < 10) {
        my_putchar('0');
        a++;
    }
    my_put_nbr(count, 0);
    a += my_nbrlen(count);
    return (a);
}

int between_0_and_1(long double nb, char c, int precision)
{
    int count = 0;
    int a = 0;

    while ((nb < 1) && (nb > 0)) {
        nb *= 10;
        count++;
    }
    a += my_put_nbr_float(nb, precision);
    my_putchar(c);
    my_putchar('-');
    a += 2;
    if (count < 10) {
            my_putchar('0');
            a++;
    }
    my_put_nbr(count, 0);
    a += my_nbrlen(count);
    return (a);
}

int my_put_nbr_scientific(long double nb, char c, int precision)
{
    if (nb == 0)
        return equal_zero(nb, c, precision);
    if (nb > 1)
        return upper_than_1(nb, c, precision);
    if (nb < 0)
        return lower_than_0(nb, c, precision);
    if ((nb < 1) && (nb > 0))
        return between_0_and_1(nb, c, precision);
}
