/*
** EPITECH PROJECT, 2022
** task04
** File description:
** task04
*/

int my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0){
        my_putchar('N');
    } else {
        my_putchar('P');
    }
}
