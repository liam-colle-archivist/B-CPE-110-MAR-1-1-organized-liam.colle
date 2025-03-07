/*
** EPITECH PROJECT, 2024
** shell_insert_sort
** File description:
** Organized
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../../include/my.h"
#include "../../../include/utils.h"
#include "../../../include/shell.h"

static void sh_quick_sort_swap(hardware_t *hard_1, hardware_t *hard_2)
{
    hardware_t *swap = malloc(sizeof(hardware_t));

    if (swap == NULL)
        return;
    swap->id = hard_1->id;
    swap->tag = hard_1->tag;
    swap->type = hard_1->type;
    swap->type_s = hard_1->type_s;
    hard_1->id = hard_2->id;
    hard_1->tag = hard_2->tag;
    hard_1->type = hard_2->type;
    hard_1->type_s = hard_2->type_s;
    hard_2->id = swap->id;
    hard_2->tag = swap->tag;
    hard_2->type = swap->type;
    hard_2->type_s = swap->type_s;
    free(swap);
}

static hardware_t *sh_quick_sort_part(hardware_t *start, hardware_t *end,
    int (*wrks_cmp)(hardware_t *hard, hardware_t *max_hard))
{
    hardware_t *pivot = start;
    hardware_t *prev_hard = start;
    hardware_t *curr_hard = start;

    if (start == NULL || end == NULL || wrks_cmp == NULL)
        return NULL;
    while (curr_hard != end->next) {
        if (wrks_cmp(curr_hard, pivot) == TRUE) {
            sh_quick_sort_swap(curr_hard, prev_hard->next);
            prev_hard = prev_hard->next;
        }
        curr_hard = curr_hard->next;
    }
    sh_quick_sort_swap(pivot, prev_hard);
    return prev_hard;
}

static void sh_quick_sort_rec(hardware_t *start, hardware_t *end,
    int (*wrks_cmp)(hardware_t *hard, hardware_t *max_hard))
{
    hardware_t *pivot = sh_quick_sort_part(start, end, wrks_cmp);

    if (start == NULL || end == NULL || wrks_cmp == NULL)
        return;
    if (start == end)
        return;
    sh_quick_sort_rec(start, pivot, wrks_cmp);
    sh_quick_sort_rec(pivot->next, end, wrks_cmp);
}

static void sh_quick_sort(workshop_t *wrks,
    int (*wrks_cmp)(hardware_t *hard, hardware_t *max_hard))
{
    if (wrks == NULL)
        return;
    if (wrks->start == NULL || wrks->end == NULL)
        return;
    sh_quick_sort_rec(wrks->start, wrks->end, wrks_cmp);
}

int sh_insert_sort(workshop_t *wrks,
    int (*wrks_cmp)(hardware_t *hard, hardware_t *max_hard))
{
    if (wrks == NULL || wrks_cmp == NULL)
        return FUNC_FAILED;
    if (wrks->start == NULL || wrks->end == NULL)
        return FUNC_FAILED;
    sh_quick_sort(wrks, wrks_cmp);
    return FUNC_SUCCESS;
}
