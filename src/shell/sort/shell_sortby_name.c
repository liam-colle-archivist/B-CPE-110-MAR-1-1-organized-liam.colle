/*
** EPITECH PROJECT, 2024
** shell_sort_name
** File description:
** Organized
*/

#include <stdio.h>
#include <string.h>
#include "../../../include/shell.h"
#include "../../../include/utils.h"
#include "../../../include/my.h"

int sh_hw_sortby_name(hardware_t *hard, hardware_t *max_hard)
{
    if (hard == NULL || max_hard == NULL)
        return FUNC_FAILED;
    return my_strcmp(hard->tag, max_hard->tag) > 0;
}

int sh_hw_sortby_rname(hardware_t *hard, hardware_t *max_hard)
{
    if (hard == NULL || max_hard == NULL)
        return FUNC_FAILED;
    return my_strcmp(hard->tag, max_hard->tag) < 0;
}
