/*
** EPITECH PROJECT, 2024
** my_strstr
** File description:
** Day 6, Task 5
*/

#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int compare_res = 0;

    for (int i = 0; (s1[i] != '\0') && i < n; i++)
        if (s1[i] != s2[i]) {
            compare_res = s1[i] - s2[i];
            break;
        }
    return compare_res;
}
