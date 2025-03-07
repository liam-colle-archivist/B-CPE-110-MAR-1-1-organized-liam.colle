/*
** EPITECH PROJECT, 2024
** shell
** File description:
** Organized
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/shell.h"
#include "../include/utils.h"

int sh_shell_loop(void)
{
    workshop_t *wrks = wkrs_create_wrks();

    if (wrks == NULL)
        return FUNC_FAILED;
    if (workshop_shell(wrks) == FUNC_FAILED) {
        wkrs_free_wrks(wrks);
        return FUNC_FAILED;
    }
    wkrs_free_wrks(wrks);
    return FUNC_SUCCESS;
}
