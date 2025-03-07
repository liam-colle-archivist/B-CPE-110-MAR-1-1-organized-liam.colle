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

static int wkrs_free_all_chains(workshop_t *wrks)
{
    hardware_t *curr_chain = wrks->start;
    hardware_t *next_chain = wrks->start;

    if (curr_chain == NULL)
        return FUNC_FAILED;
    while (curr_chain != NULL) {
        next_chain = curr_chain->next;
        wkrs_free_chain(curr_chain);
        curr_chain = next_chain;
    }
    return FUNC_SUCCESS;
}

int wkrs_free_wrks(workshop_t *wrks)
{
    if (wrks == NULL)
        return FUNC_FAILED;
    if (wkrs_free_all_chains(wrks) == FUNC_FAILED) {
        if (wrks != NULL) {
            free(wrks);
            return FUNC_SEMFAIL;
        }
        return FUNC_FAILED;
    }
    free(wrks);
    return FUNC_SUCCESS;
}
