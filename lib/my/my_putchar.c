/*
** EPITECH PROJECT, 2024
** my_putchar
** File description:
** day 4, task 0
** my_putchar.c
*/
#include <unistd.h>
int my_putchar(char character)
{
    write(1, &character, sizeof(character));
    return character;
}
