/*
** EPITECH PROJECT, 2024
** shell_add_sanity
** File description:
** Organized
*/

#include <stdio.h>
#include "../../../include/my.h"
#include "../../../include/utils.h"
#include "../../../include/shell.h"

static int type_match(char *arg)
{
    int matches = 0;
    char *valid_args[HRD_VAL_TYPES_N] = {HRD_WRES, HRD_ACTS,
        HRD_DEVS, HRD_PRCS, HRD_SENS};

    if (arg == NULL)
        return FUNC_FAILED;
    for (int i = 0; i < HRD_VAL_TYPES_N; i++) {
        if (my_strmatch(arg, valid_args[i]) == TRUE)
            matches += 1;
    }
    return matches > 0;
}

static int examine_sanity(char **args)
{
    int i = 0;

    if (args == NULL)
        return FUNC_FAILED;
    for (; args[i] != NULL; i++) {
        if (my_str_isupper(args[i]) == FALSE || type_match(args[i]) <= 0)
            return FUNC_FAILED;
        i++;
        if (args[i] == NULL)
            break;
    }
    if ((i % 2) == 0 && i > 0)
        return FUNC_SUCCESS;
    return FUNC_FAILED;
}

int shell_add_sanity(char **args)
{
    if (args == NULL)
        return FUNC_FAILED;
    if (examine_sanity(args) == FUNC_FAILED)
        return FUNC_FAILED;
    return FUNC_SUCCESS;
}
