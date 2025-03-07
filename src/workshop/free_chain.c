/*
** EPITECH PROJECT, 2024
** free_chain
** File description:
** Organized
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../include/shell.h"
#include "../../include/utils.h"

int wkrs_free_chain(hardware_t *hardware)
{
    if (hardware == NULL)
        return FUNC_FAILED;
    if (hardware->tag != NULL)
        free(hardware->tag);
    if (hardware->type_s != NULL)
        free(hardware->type_s);
    free(hardware);
    return FUNC_SUCCESS;
}
