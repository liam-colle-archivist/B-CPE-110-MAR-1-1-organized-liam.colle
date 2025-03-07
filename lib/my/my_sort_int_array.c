/*
** EPITECH PROJECT, 2024
** my_sort_int_array
** File description:
** day 4, task 6
** my_sort_int_array.c
*/

#include "my.h"

int find_index_min(int *array, int size, int startat)
{
    int index_min = 0;
    int min = 2147483647;

    for (int i = startat; i < size; i++) {
        if (array[i] < min) {
            index_min = i;
            min = array[i];
        }
    }
    return index_min;
}

void my_sort_int_array(int *array, int size)
{
    int index_min = 0;
    int swap = 0;

    for (int i = 0; i < size; i++) {
        index_min = find_index_min(array, size, i);
        swap = array[index_min];
        array[index_min] = array[i];
        array[i] = swap;
    }
}
