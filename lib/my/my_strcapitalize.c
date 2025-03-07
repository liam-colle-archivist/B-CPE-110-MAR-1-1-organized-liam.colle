/*
** EPITECH PROJECT, 2024
** my_strcapitalize
** File description:
** Day 6, Task 10
*/

#include <stdio.h>
#include <unistd.h>
#include "my.h"

int can_be_capitalized(char character, int ready)
{
    if ((character >= 'a') && (character <= 'z'))
        if (ready == 1)
            return 1;
    return 0;
}

int can_be_ready(char character)
{
    char *valid = "-+ ";
    int size = 3;

    for (int i = 0; i < size; i++)
        if (character == valid[i])
            return 1;
    return 0;
}

int can_be_decapitalized(char character, int *ready)
{
    if ((character >= 'A') && (character <= 'Z')) {
        if (*ready == 0)
            return 1;
        *ready = 0;
    }
    if ((character >= '0') && (character <= '9')) {
        *ready = 0;
    }
    return 0;
}

char *my_strcapitalize(char *str)
{
    int ready = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (can_be_decapitalized(str[i], &ready)) {
            str[i] = str[i] + 32;
            ready = 0;
            continue;
        }
        if (can_be_capitalized(str[i], ready)) {
            str[i] = str[i] - 32;
            ready = 0;
        }
        if (can_be_ready(str[i]))
            ready = 1;
    }
    return str;
}
