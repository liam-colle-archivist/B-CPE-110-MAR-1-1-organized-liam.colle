/*
** EPITECH PROJECT, 2024
** shell_add
** File description:
** Organized
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../../include/my.h"
#include "../../../include/my_printf.h"
#include "../../../include/shell.h"
#include "../../../include/utils.h"

static int add_chain(workshop_t *wrks, char *hw_type, char *tag)
{
    hardware_t *hardware = NULL;

    hardware = wkrs_create_chain();
    if (hardware == NULL)
        return FUNC_FAILED;
    hardware->type = wrks_get_hw_type(hw_type);
    hardware->type_s = my_strdup(hw_type);
    hardware->tag = my_strdup(tag);
    if (wrks_chain_workshop(wrks, hardware) == FUNC_FAILED)
        return FUNC_FAILED;
    if (hw_print_hardware(hardware, FALSE) == FUNC_FAILED)
        return FUNC_FAILED;
    my_putstr("added.\n");
    return FUNC_SUCCESS;
}

int add(void *data, char **args)
{
    workshop_t *wrks = NULL;

    if (data == NULL)
        return FUNC_FAILED;
    wrks = (workshop_t *) data;
    if (shell_add_sanity(args) == FUNC_FAILED)
        return FUNC_FAILED;
    for (int i = 0; args[i + 1] != NULL; i++) {
        if (i % 2 != 0)
            continue;
        if (add_chain(wrks, args[i], args[i + 1]) == FUNC_FAILED)
            return FUNC_FAILED;
    }
    return FUNC_SUCCESS;
}
