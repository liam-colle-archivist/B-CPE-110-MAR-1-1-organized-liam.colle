/*
** EPITECH PROJECT, 2024
** shell_disp
** File description:
** Organized
*/

#include <stdio.h>
#include "../../../include/my.h"
#include "../../../include/my_printf.h"
#include "../../../include/shell.h"
#include "../../../include/utils.h"

int hw_print_hardware(hardware_t *hardware, int endchar)
{
    if (hardware == NULL || endchar < 0 || endchar > 1)
        return FUNC_FAILED;
    my_printf("%s n°%u - %c", hardware->type_s, hardware->id, '"');
    my_putstr(hardware->tag);
    my_putchar('"');
    my_putchar(endchar ? '\n' : ' ');
    return FUNC_SUCCESS;
}

static int print_hardwares(hardware_t *end)
{
    hardware_t *curr_chain = end;

    if (end == NULL)
        return FUNC_FAILED;
    while (curr_chain != NULL) {
        if (hw_print_hardware(curr_chain, TRUE) == FUNC_FAILED)
            return FUNC_FAILED;
        curr_chain = curr_chain->previous;
    }
    return FUNC_SUCCESS;
}

int disp(void *data, char **args)
{
    workshop_t *wrks = NULL;

    if (data == NULL)
        return FUNC_FAILED;
    if (args != NULL) {
        if (args[0] != NULL)
            return FUNC_FAILED;
    }
    wrks = (workshop_t *) data;
    if (print_hardwares(wrks->end) == FUNC_FAILED)
        return FUNC_FAILED;
    return FUNC_SUCCESS;
}
