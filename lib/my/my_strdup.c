/*
** EPITECH PROJECT, 2024
** my_strdup
** File description:
** Day 8, Task 1
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    int i = 0;
    int len = my_strlen(src);
    char *dest = malloc(sizeof(char) * (len + 1));

    for (; i < len; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
