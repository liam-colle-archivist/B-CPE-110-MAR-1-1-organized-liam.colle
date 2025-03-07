/*
** EPITECH PROJECT, 2024
** my_strcpy
** File description:
** Day 6, Task 2
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (i = 0; src[i] != '\0' && i < n; i++)
        dest[i] = src[i];
    if (src[i] == '\0')
        dest[i] = '\0';
    return dest;
}
