/*
** EPITECH PROJECT, 2022
** my_putchar_error
** File description:
** my_putchar_error
*/

int write(int a, char* b, int c);

void my_putchar_error(char c)
{
    write(2, &c, 1);
    return;
}
