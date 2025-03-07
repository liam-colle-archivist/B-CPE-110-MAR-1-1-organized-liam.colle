/*
** EPITECH PROJECT, 2024
** chain_workshop
** File description:
** Organized
*/

#include <stdio.h>
#include "../../include/shell.h"
#include "../../include/utils.h"

static int chain_wrks_element(workshop_t *wrks, hardware_t *new)
{
    hardware_t *curr_chain = wrks->start;

    if (wrks == NULL || new == NULL)
        return FUNC_FAILED;
    new->id = wrks->id_offset;
    wrks->id_offset++;
    if (curr_chain == NULL) {
        new->id = 0;
        wrks->start = new;
        wrks->end = new;
        return FUNC_SUCCESS;
    }
    new->previous = wrks->end;
    wrks->end->next = new;
    wrks->end = new;
    return FUNC_SUCCESS;
}

int wrks_chain_workshop(workshop_t *wrks, hardware_t *hardware)
{
    if (wrks == NULL || hardware == NULL)
        return FUNC_FAILED;
    if (chain_wrks_element(wrks, hardware) == FUNC_FAILED)
        return FUNC_FAILED;
    return FUNC_SUCCESS;
}
