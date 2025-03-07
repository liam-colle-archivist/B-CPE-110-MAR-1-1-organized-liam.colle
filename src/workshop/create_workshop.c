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

static int init_workshop(workshop_t *wrks)
{
    if (wrks == NULL)
        return FUNC_FAILED;
    wrks->id_offset = 0;
    wrks->start = NULL;
    wrks->end = NULL;
    return FUNC_SUCCESS;
}

workshop_t *wkrs_create_wrks(void)
{
    workshop_t *wrks = NULL;

    wrks = malloc(sizeof(workshop_t));
    if (wrks == NULL)
        return NULL;
    if (init_workshop(wrks) == FUNC_FAILED) {
        if (wrks != NULL)
            free(wrks);
        return NULL;
    }
    return wrks;
}
