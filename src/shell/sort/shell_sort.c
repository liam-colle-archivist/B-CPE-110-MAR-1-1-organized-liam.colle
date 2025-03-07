/*
** EPITECH PROJECT, 2024
** shell_sort
** File description:
** Organized
*/

#include <stdio.h>
#include "../../../include/shell.h"
#include "../../../include/utils.h"

static int initialize_sort(workshop_t *wrks, int type, int rev)
{
    if (type == FUNC_FAILED || rev == FUNC_FAILED)
        return FUNC_FAILED;
    switch (type) {
        case SORT_D_ID:
            return sh_insert_sort(wrks, SORT_F_REV(rev,
                sh_hw_sortby_rid, sh_hw_sortby_id));
        case SORT_D_NAME:
            return sh_insert_sort(wrks, SORT_F_REV(rev,
                sh_hw_sortby_rname, sh_hw_sortby_name));
        case SORT_D_TYPE:
            return sh_insert_sort(wrks, SORT_F_REV(rev,
                sh_hw_sortby_rtype, sh_hw_sortby_type));
        default:
            return FUNC_FAILED;
    }
}

static int sort_selector(char **args, workshop_t *wrks)
{
    int type = 0;
    int rev = 0;

    if (args == NULL || wrks == NULL)
        return FUNC_FAILED;
    if (args[0] == NULL)
        return FUNC_FAILED;
    if (args[1] != NULL)
        rev = wrks_get_srt_rev(args[1]);
    type = wrks_get_srt_type(args[0]);
    return initialize_sort(wrks, type, rev);
}

int sort(void *data, char **args)
{
    workshop_t *wrks = NULL;

    if (data == NULL)
        return FUNC_FAILED;
    wrks = (workshop_t *) data;
    if (shell_sort_sanity(args) == FUNC_FAILED)
        return FUNC_FAILED;
    return sort_selector(args, wrks);
}
