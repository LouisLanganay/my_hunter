/*
** EPITECH PROJECT, 2022
** my_put_address
** File description:
** for my_printf
*/

int my_putnbr_base_long(long nbr, char const *base);

int my_putstr(char *str);

int my_put_address(long long nbr)
{
    int i = 2;
    my_putstr("0x");
    i += my_putnbr_base_long(nbr, "0123456789abcdef");
    return (i);
}
