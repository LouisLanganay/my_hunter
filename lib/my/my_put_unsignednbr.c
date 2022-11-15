/*
** EPITECH PROJECT, 2022
** task07
** File description:
** task07
*/

int my_putstr(char *str);

int my_putchar(char c);

int my_unsignednbrlen(unsigned int nb);

int print_unsignednbr(unsigned int nb)
{
    int character = 0;

    if (nb < 10) {
        my_putchar(nb + '0');
        return 0;
    } else if (nb > 9) {
        print_unsignednbr(nb / 10);
        character = nb % 10;
        my_putchar(character + '0');
        return 0;
    }
    return 0;
}

int my_put_unsignednbr(unsigned int nb, int precision)
{
    int j = 0;

    if (precision == 0 && nb == 0)
        return 0;
    for (int i = precision; i > my_unsignednbrlen(nb); i--)
        j += my_putchar('0');
    print_unsignednbr(nb);
    return my_unsignednbrlen(nb) + j;
}
