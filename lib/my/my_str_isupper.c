/*
** EPITECH PROJECT, 2024
** my_str_isupper
** File description:
** Day 6, Task 15
*/

#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_str_isupper(char const *str)
{
    if (str == NULL)
        return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 'A') || (str[i] > 'Z')) {
            return 0;
        }
    }
    return 1;
}
