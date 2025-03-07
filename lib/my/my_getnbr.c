/*
** EPITECH PROJECT, 2024
** my_getnbr
** File description:
** day 4, task 5
** my_getnbr.c
*/

#include "my.h"

long my_pow(int a, int n)
{
    long power = a;

    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    for (int i = 1; i < n; i++)
        power = power * a;
    return power;
}

int get_symbol(char const *str)
{
    int symbol = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '+')
            symbol = 1;
        if (str[i] == '-')
            symbol = -1;
    }
    return symbol;
}

int is_valid(char const *str, int i)
{
    if ((str[i] == '-') || (str[i] == '+'))
        return 1;
    if ((str[i] >= '0') && (str[i] <= '9'))
        return 1;
    return 0;
}

int calc_wo_overflow(char const *str, int i, int len, long *result)
{
    long future_res = (str[i] - '0') * my_pow(10, len - i - 1);

    future_res += *result;
    if ((future_res - 2147483647 <= 0)) {
        *result += (str[i] - '0') * my_pow(10, len - i - 1);
        return 0;
    } else
        return 1;
    return 0;
}

int my_getnbr(char const *str)
{
    long result = 0;
    int len = 0;
    int symbol = get_symbol(str);
    int fail = 0;

    for (len = 0; str[len] != '\0'; len++)
        if (is_valid(str, len) == 0) {
            break;
        }
    for (int i = 0; i < len; i++) {
        if (is_valid(str, i) == 0) {
            break;
        }
        if ((str[i] >= '0') && (str[i] <= '9'))
            fail = calc_wo_overflow(str, i, len, &result);
        if (fail == 1)
            return 0;
    }
    return result * symbol;
}
