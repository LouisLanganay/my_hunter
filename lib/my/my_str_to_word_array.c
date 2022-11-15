/*
** EPITECH PROJECT, 2022
** task04
** File description:
** task04
*/

#include <stdlib.h>

int is_alpha(char const *str, int i)
{
    if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
        return 0;
    else
        return 1;
}

int word_len(int x, char const *str)
{
    int i = x;
    int count = 0;
    while (is_alpha(str, i) == 0) {
        i++;
        count++;
    }
    return count;
}

int words_count(char const *str)
{
    int count = 0;
    int z = 0;
    while (str[z] != '\0') {
        if (is_alpha(str, z) == 0 && is_alpha(str, z + 1) == 1)
            count++;
        z++;
    }
    return count;
}

char **my_str_to_word_array(char const *str)
{
    char **array = malloc(sizeof(char *) * (words_count(str) + 1));
    int i = 0;
    int w = 0;
    while (str[i] != '\0'){
        int f = 0;
        array[w] = malloc(sizeof(char) * (word_len(i, str) + 1));
        while (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122) {
            array[w][f] = str[i];
            i++;
            f++;
        }
        if (is_alpha(str, i - 1) == 0) {
            array[w][f] = 0;
            w++;
        }
        if (str[i] != '\0')
            i++;
    }
    return array;
}
