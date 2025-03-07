/*
** EPITECH PROJECT, 2024
** create_chain
** File description:
** Organized
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../include/shell.h"
#include "../../include/utils.h"

static int init_hardware(hardware_t *hardware)
{
    if (hardware == NULL)
        return FUNC_FAILED;
    hardware->id = HARD_UNKNOWN;
    hardware->type = HARD_UNKNOWN;
    hardware->type_s = NULL;
    hardware->tag = NULL;
    hardware->previous = NULL;
    hardware->next = NULL;
    return FUNC_SUCCESS;
}

hardware_t *wkrs_create_chain(void)
{
    hardware_t *hardware = NULL;

    hardware = malloc(sizeof(hardware_t));
    if (hardware == NULL)
        return NULL;
    if (init_hardware(hardware) == FUNC_FAILED) {
        if (hardware != NULL)
            free(hardware);
        return NULL;
    }
    return hardware;
}
