/*
** EPITECH PROJECT, 2024
** my_strncat
** File description:
** Day 7, Task 3
*/

#include <stdio.h>
#include <stdlib.h>

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;

    for (i = 0; dest[i] != '\0'; i++);
    for (j = 0; src[j] != '\0' && j < nb; j++)
        dest[i + j] = src[j];
    if (src[j] != '\0')
        dest[i + j] = '\0';
    return dest;
}
