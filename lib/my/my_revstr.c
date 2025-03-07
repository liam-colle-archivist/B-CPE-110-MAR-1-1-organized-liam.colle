/*
** EPITECH PROJECT, 2024
** my_revstr
** File description:
** Day 6, Task 3
*/

#include "my.h"

int my_strlen_rev(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++);
    return i;
}

char *my_revstr(char *str)
{
    int len = my_strlen_rev(str);
    char swap = 0;

    for (int i = 0; i <= ((len - 1) / 2); i++) {
        swap = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = swap;
    }
    return str;
}
