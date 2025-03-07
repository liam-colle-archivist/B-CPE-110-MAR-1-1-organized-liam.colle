/*
** EPITECH PROJECT, 2024
** shell_sort_type
** File description:
** Organized
*/

#include <stdio.h>
#include "../../../include/my.h"
#include "../../../include/shell.h"
#include "../../../include/utils.h"

int wrks_get_srt_type(char *arg)
{
    char *valid_args[SORT_VAL_TYPES_N - 1] = {SORT_ID, SORT_NAME,
        SORT_TYPE};

    if (arg == NULL)
        return FUNC_FAILED;
    for (int i = 0; i < SORT_VAL_TYPES_N - 1; i++) {
        if (my_strmatch(arg, valid_args[i]) == TRUE)
            return i + 1;
    }
    return SORT_D_UNKNOWN;
}

int wrks_get_srt_rev(char *arg)
{
    char *rev_arg = SORT_REV;

    if (arg == NULL)
        return FUNC_FAILED;
    if (my_strmatch(arg, rev_arg) == TRUE)
        return TRUE;
    return FALSE;
}
