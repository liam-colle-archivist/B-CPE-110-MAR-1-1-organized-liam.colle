/*
** EPITECH PROJECT, 2024
** shell_sortby_type
** File description:
** Organized
*/

#include <stdio.h>
#include <string.h>
#include "../../../include/shell.h"
#include "../../../include/utils.h"
#include "../../../include/my.h"

int sh_hw_sortby_type(hardware_t *hard, hardware_t *max_hard)
{
    if (hard == NULL || max_hard == NULL)
        return FUNC_FAILED;
    return my_strcmp(hard->type_s, max_hard->type_s) > 0;
}

int sh_hw_sortby_rtype(hardware_t *hard, hardware_t *max_hard)
{
    if (hard == NULL || max_hard == NULL)
        return FUNC_FAILED;
    return my_strcmp(hard->type_s, max_hard->type_s) < 0;
}
