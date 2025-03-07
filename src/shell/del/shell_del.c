/*
** EPITECH PROJECT, 2024
** shell_del
** File description:
** Organized
*/

#include <stdio.h>
#include "../../../include/my.h"
#include "../../../include/shell.h"
#include "../../../include/utils.h"

int sh_args_len(char **args)
{
    int len = 0;

    if (args == NULL)
        return FUNC_FAILED;
    for (int i = 0; args[i] != NULL; i++)
        len++;
    return len;
}

static void patch_hardwares(int is_start, int is_end, hardware_t *hardware)
{
    if (is_start && !is_end)
        hardware->next->previous = NULL;
    else if (!is_start && is_end)
        hardware->previous->next = NULL;
    else {
        hardware->previous->next = hardware->next;
        hardware->next->previous = hardware->previous;
    }
}

static int del_hardware(workshop_t *wrks, hardware_t *hardware)
{
    int is_start = FALSE;
    int is_end = FALSE;

    if (wrks == NULL || hardware == NULL)
        return FUNC_FAILED;
    is_start = wrks->start == hardware;
    is_end = wrks->end == hardware;
    if (is_start && is_end) {
        wrks->start = NULL;
        wrks->end = NULL;
        return FUNC_SUCCESS;
    }
    if (is_start)
        wrks->start = hardware->next;
    if (is_end)
        wrks->end = hardware->previous;
    patch_hardwares(is_start, is_end, hardware);
    return FUNC_SUCCESS;
}

static void show_deletion(hardware_t *hardware)
{
    if (hardware == NULL)
        return;
    if (hw_print_hardware(hardware, FALSE) == FUNC_FAILED)
        return;
    my_putstr("deleted.\n");
}

static int delete_hardware(workshop_t *wrks, char **args)
{
    int deleted = 0;
    int len = sh_args_len(args);
    hardware_t *found_chain = NULL;

    if (args == NULL)
        return FUNC_FAILED;
    if (args[0] == NULL)
        return FUNC_FAILED;
    for (int i = 0; args[i] != NULL; i++) {
        found_chain = wkrs_find_chain(wrks, my_getnbr(args[i]));
        if (found_chain != NULL) {
            show_deletion(found_chain);
            del_hardware(wrks, found_chain);
            wkrs_free_chain(found_chain);
            deleted++;
        }
    }
    if (deleted == len)
        return FUNC_SUCCESS;
    return FUNC_FAILED;
}

int del(void *data, char **args)
{
    workshop_t *wrks = NULL;

    if (data == NULL)
        return FUNC_FAILED;
    wrks = (workshop_t *) data;
    return delete_hardware(wrks, args);
}
