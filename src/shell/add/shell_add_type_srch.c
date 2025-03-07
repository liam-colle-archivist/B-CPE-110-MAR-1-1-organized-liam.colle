/*
** EPITECH PROJECT, 2024
** shell_type
** File description:
** Organized
*/

#include <stdio.h>
#include "../../../include/my.h"
#include "../../../include/shell.h"
#include "../../../include/utils.h"

int wrks_get_hw_type(char *arg)
{
    char *valid_args[HRD_VAL_TYPES_N] = {HRD_WRES, HRD_ACTS,
        HRD_DEVS, HRD_PRCS, HRD_SENS};

    if (arg == NULL)
        return FUNC_FAILED;
    for (int i = 0; i < HRD_VAL_TYPES_N; i++) {
        if (my_strmatch(arg, valid_args[i]) == TRUE)
            return i;
    }
    return HARD_UNKNOWN;
}
