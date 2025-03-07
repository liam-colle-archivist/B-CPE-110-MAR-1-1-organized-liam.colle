/*
** EPITECH PROJECT, 2024
** shell_sort_id
** File description:
** Organized
*/

#include <stdio.h>
#include "../../../include/shell.h"
#include "../../../include/utils.h"

int sh_hw_sortby_id(hardware_t *hard, hardware_t *max_hard)
{
    if (hard == NULL || max_hard == NULL)
        return FUNC_FAILED;
    return hard->id > max_hard->id;
}

int sh_hw_sortby_rid(hardware_t *hard, hardware_t *max_hard)
{
    if (hard == NULL || max_hard == NULL)
        return FUNC_FAILED;
    return hard->id < max_hard->id;
}
