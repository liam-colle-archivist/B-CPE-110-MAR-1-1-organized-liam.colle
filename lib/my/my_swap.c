/*
** EPITECH PROJECT, 2024
** my_swap
** File description:
** day 4, task 1
** my_swap.c
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int swap = *a;

    *a = *b;
    *b = swap;
}
