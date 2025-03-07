/*
** EPITECH PROJECT, 2024
** my_strstr
** File description:
** Day 6, Task 5
*/

#include <stdio.h>
#include <unistd.h>
#include "my.h"

int compare_str(char *str, char const *to_find, int i)
{
    for (int j = 0; to_find[j] != '\0'; j++) {
        if (str[i + j] == '\0')
            return -1;
        if (str[i + j] != to_find[j])
            return -1;
    }
    return i;
}

char *my_strstr(char *str, char const *to_find)
{
    int compare_res = -1;

    if (to_find[0] == '\0')
        return str;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find[0])
            compare_res = compare_str(str, to_find, i);
        if (compare_res > -1)
            return &str[i];
    }
    return NULL;
}
