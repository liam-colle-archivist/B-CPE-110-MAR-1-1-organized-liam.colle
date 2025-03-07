/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** day 4, task 2
** my_putstr.c
*/

#include "my.h"

int my_putstr_custlen(char const *str, int max)
{
    int i = 0;

    if (max == -1)
        for (i = 0; str[i] != '\0'; i++)
            my_putchar(str[i]);
    else
        for (i = 0; str[i] != '\0' && i < max; i++)
            my_putchar(str[i]);
    return i;
}
