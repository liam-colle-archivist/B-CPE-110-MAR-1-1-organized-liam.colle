/*
** EPITECH PROJECT, 2024
** my_str_isalpha
** File description:
** Day 6, Task 12
*/

#include <stdio.h>
#include <unistd.h>
#include "my.h"

int is_alpha(char chr)
{
    if ((chr >= 'A') && (chr <= 'Z'))
        return 1;
    if ((chr >= 'a') && (chr <= 'z'))
        return 1;
    return 0;
}

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_alpha(str[i]) == 0) {
            return 0;
        }
    }
    return 1;
}
