/*
** EPITECH PROJECT, 2024
** my_compute_square_root
** File description:
** day 5, task 5
** my_compute_square_root.c
*/

#include "my.h"

int my_pow_sqr(int nb, int p)
{
    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    if (nb > 2147483647)
        return 0;
    return nb * my_compute_power_rec(nb, p - 1);
}

int find_square_root(int nb, int i)
{
    int pow = my_pow_sqr(i, 2);

    if (i == nb)
        return 0;
    if (pow == nb)
        return i;
    return find_square_root(nb, i + 1);
}

int my_compute_square_root(int nb)
{
    if (nb > 2147483647 || nb <= 0)
        return 0;
    return find_square_root(nb, 0);
}
