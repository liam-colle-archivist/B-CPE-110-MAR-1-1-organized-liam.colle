/*
** EPITECH PROJECT, 2024
** chain_utils
** File description:
** Organized
*/

#include <stdio.h>
#include "../../include/shell.h"
#include "../../include/utils.h"

int hw_chain_len(hardware_t *start)
{
    int len = 0;
    hardware_t *curr_chain = start;

    if (start == NULL)
        return FUNC_FAILED;
    for (; curr_chain != NULL; len++)
        curr_chain = curr_chain->next;
    return len;
}
