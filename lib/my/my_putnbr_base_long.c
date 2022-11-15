/*
** EPITECH PROJECT, 2022
** my_putnbr_base_long
** File description:
** my_putnbr_base_long
*/

int my_putchar(char c);

int my_strlen(const char *str);

int my_putnbr_base_long(long nbr, char const *base)
{
    long nombre = 0;
    int	temp;
    int	size = my_strlen(base);
    long calcul = 0;
    int i = 1;

    if (nbr < 0) {
        nombre = nombre + my_putchar('-');
        nombre = nombre + my_putnbr_base_long(-nbr, base);
    } else {
        temp = nbr % size;
        calcul = (nbr - temp) / size;
        if (calcul != 0)
            i += my_putnbr_base_long(calcul, base);
        nombre = my_putchar(base[temp]);
    }
    return (i);
}
