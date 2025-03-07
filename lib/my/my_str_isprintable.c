/*
** EPITECH PROJECT, 2024
** my_str_isprintable
** File description:
** Day 6, Task 15
*/

#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 32) || (str[i] > 126)) {
            return 0;
        }
    }
    return 1;
}
