/*
** EPITECH PROJECT, 2022
** my_putnbr_base
** File description:
** my_putnbr_base
*/

int my_putchar(char c);

int my_strlen(const char *str);

int my_baselen(unsigned long int nbr, char const *base, int precision)
{
    int	nombre = 0;
    int	temp;
    int	size = my_strlen(base);
    int	calcul = 0;
    int i = 1;

    if (nbr < 0) {
        nombre = nombre + 1;
        nombre = nombre + my_baselen(-nbr, base, -1);
    } else {
        temp = nbr % size;
        calcul = (nbr - temp) / size;
        if (calcul != 0)
            i += my_baselen(calcul, base, -1);
        nombre = 1;
    }
    return (i);
}

int my_putnbr_base(unsigned long int nbr, char const *base, int precision)
{
    int	temp;
    int	calcul = 0;
    int i = 1;

    if (precision == 0 && nbr == 0)
        return 0;
    if (precision > 0)
        for (int x = 0; x < precision - my_baselen(nbr, base, -1); x++)
            i += my_putchar('0');
    if (nbr < 0) {
        i += my_putchar('-');
        i += my_putnbr_base(-nbr, base, -1);
    } else {
        temp = nbr % my_strlen(base);
        calcul = (nbr - temp) / my_strlen(base);
        if (calcul != 0)
            i += my_putnbr_base(calcul, base, -1);
        my_putchar(base[temp]);
    }
    return (i);
}
