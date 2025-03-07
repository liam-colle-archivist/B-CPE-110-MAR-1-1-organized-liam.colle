/*
** EPITECH PROJECT, 2024
** main
** File description:
** Organized
*/

#include <stdlib.h>
#include "include/shell.h"
#include "include/utils.h"

int main(void)
{
    if (sh_shell_loop() == FUNC_FAILED)
        return EXIT_FAILURE_84;
    return EXIT_SUCCESS;
}
