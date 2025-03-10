/*
** EPITECH PROJECT, 2024
** octal
** File description:
** octal
*/

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "../my.h"
#include "my_printf.h"

int octal(int decimal)
{
    int inferior = 0;

    if (decimal == 0)
        return my_putchar_wlength('0');
    if (decimal < 0) {
        inferior = my_putchar_wlength('-');
        decimal = -decimal;
    }
    return octal_worker(decimal, 0) + inferior;
}

int octal_worker(int decimal, int chr_count)
{
    if (decimal >= 1) {
        chr_count += octal_worker(decimal / 8, chr_count);
        chr_count += my_putchar_wlength((decimal % 8) + '0');
    }
    return chr_count;
}
