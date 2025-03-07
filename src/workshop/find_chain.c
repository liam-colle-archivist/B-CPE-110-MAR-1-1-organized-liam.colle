/*
** EPITECH PROJECT, 2024
** find_chain
** File description:
** Organized
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../include/shell.h"
#include "../../include/utils.h"

hardware_t *wkrs_find_chain(workshop_t *wrks, unsigned int id)
{
    hardware_t *curr_chain = NULL;

    if (wrks == NULL)
        return NULL;
    curr_chain = wrks->start;
    while (curr_chain != NULL) {
        if (curr_chain->id == id)
            return curr_chain;
        curr_chain = curr_chain->next;
    }
    return NULL;
}
