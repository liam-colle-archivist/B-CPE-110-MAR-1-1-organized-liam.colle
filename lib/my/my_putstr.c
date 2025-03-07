/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** day 4, task 2
** my_putstr.c
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return i;
}
