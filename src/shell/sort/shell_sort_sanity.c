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
    char *valid_args[SORT_VAL_TYPES_N - 1] = {SORT_ID, SORT_NAME,
        SORT_TYPE};

    if (arg == NULL)
        return FUNC_FAILED;
    for (int i = 0; i < SORT_VAL_TYPES_N - 1; i++)
        if (my_strmatch(arg, valid_args[i]) == TRUE)
            matches += 1;
    return matches > 0;
}

static int examine_ext_sanity(char **args, int args_len)
{
    if (args_len < 4)
        return FUNC_FAILED;
    if (type_match(args[2]) <= 0)
        return FUNC_FAILED;
    if (type_match(args[3]) <= 0)
        return FUNC_FAILED;
    return FUNC_SUCCESS;
}

static int examine_sanity(char **args)
{
    int args_len = 0;

    if (args == NULL)
        return FUNC_FAILED;
    args_len = sh_args_len(args);
    if (args_len > 4 || args_len <= 0)
        return FUNC_FAILED;
    if (args_len >= 1)
        if (type_match(args[0]) <= 0)
            return FUNC_FAILED;
    if (args_len >= 2)
        if (my_strcmp(args[1], SORT_REV) != 0)
            return FUNC_FAILED;
    if (args_len >= 3)
        if (examine_ext_sanity(args, args_len) == FUNC_FAILED)
            return FUNC_FAILED;
    return FUNC_SUCCESS;
}

int shell_sort_sanity(char **args)
{
    if (args == NULL)
        return FUNC_FAILED;
    if (examine_sanity(args) == FUNC_FAILED)
        return FUNC_FAILED;
    return FUNC_SUCCESS;
}
