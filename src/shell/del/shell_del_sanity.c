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

static int examine_sanity(char **args)
{
    int i = 0;

    if (args == NULL)
        return FUNC_FAILED;
    for (; args[i] != NULL; i++)
        if (my_str_isnum(args[i]) == FALSE)
            return FUNC_FAILED;
    return FUNC_FAILED;
}

int shell_del_sanity(char **args)
{
    if (args == NULL)
        return FUNC_FAILED;
    if (examine_sanity(args) == FUNC_FAILED)
        return FUNC_FAILED;
    return FUNC_SUCCESS;
}
