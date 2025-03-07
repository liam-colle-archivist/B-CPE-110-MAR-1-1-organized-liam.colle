/*
** EPITECH PROJECT, 2024
** my_compute_factorial_rec
** File description:
** day 5, task 4
** my_compute_factorial_rec.c
*/

#include "my.h"

int my_power_double_rec(double nb, int p)
{
    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    if (nb > 2147483647)
        return 0;
    return nb * my_power_double_rec(nb, p - 1);
}
