/*
** EPITECH PROJECT, 2024
** test_inter_maps_medium
** File description:
** Setting Up
*/

#include <stdio.h>
#include <stdlib.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/shell.h"
#include "../include/utils.h"

Test (test_organized_sort, test_1_id, .init = cr_redirect_stdout)
{
    char *add_arguments[] = {"WIRE", "alpha", NULL};
    char *sort_arguments[] = {"ID", NULL};
    char *disp_arguments[] = {NULL};
    workshop_t *wrks = wkrs_create_wrks();
    int add_return = FUNC_FAILED;
    int sort_return = FUNC_FAILED;
    int disp_return = FUNC_FAILED;
    int free_return = FUNC_FAILED;

    if (wrks == NULL)
        cr_assert_eq(add_return, FUNC_SUCCESS, "Workshop failed creation (ptr: %p)", wrks);
    add_return = add(wrks, add_arguments);
    sort_return = sort(wrks, sort_arguments);
    disp_return = disp(wrks, disp_arguments);
    free_return = wkrs_free_wrks(wrks);
    cr_assert_eq(add_return, FUNC_SUCCESS, "Hardware failed to add (ExitCode: %d)", add_return);
    cr_assert_eq(disp_return, FUNC_SUCCESS, "Hardware failed to sort (ExitCode: %d)", sort_return);
    cr_assert_eq(disp_return, FUNC_SUCCESS, "Hardware failed to display (ExitCode: %d)", disp_return);
    cr_assert_eq(free_return, FUNC_SUCCESS, "Hardware failed to free itself (ExitCode: %d)", free_return);
    cr_assert_stdout_eq_str("WIRE n°0 - \"alpha\" added.\nWIRE n°0 - \"alpha\"\n", "");
}

Test (test_organized_sort, test_1_id_rev, .init = cr_redirect_stdout)
{
    char *add_arguments[] = {"WIRE", "alpha", NULL};
    char *sort_arguments[] = {"ID", "-r", NULL};
    char *disp_arguments[] = {NULL};
    workshop_t *wrks = wkrs_create_wrks();
    int add_return = FUNC_FAILED;
    int sort_return = FUNC_FAILED;
    int disp_return = FUNC_FAILED;
    int free_return = FUNC_FAILED;

    if (wrks == NULL)
        cr_assert_eq(add_return, FUNC_SUCCESS, "Workshop failed creation (ptr: %p)", wrks);
    add_return = add(wrks, add_arguments);
    sort_return = sort(wrks, sort_arguments);
    disp_return = disp(wrks, disp_arguments);
    free_return = wkrs_free_wrks(wrks);
    cr_assert_eq(add_return, FUNC_SUCCESS, "Hardware failed to add (ExitCode: %d)", add_return);
    cr_assert_eq(disp_return, FUNC_SUCCESS, "Hardware failed to sort (ExitCode: %d)", sort_return);
    cr_assert_eq(disp_return, FUNC_SUCCESS, "Hardware failed to display (ExitCode: %d)", disp_return);
    cr_assert_eq(free_return, FUNC_SUCCESS, "Hardware failed to free itself (ExitCode: %d)", free_return);
    cr_assert_stdout_eq_str("WIRE n°0 - \"alpha\" added.\nWIRE n°0 - \"alpha\"\n", "");
}

Test (test_organized_sort, test_1_type, .init = cr_redirect_stdout)
{
    char *add_arguments[] = {"WIRE", "hdmi", "DEVICE", "tom", NULL};
    char *sort_arguments[] = {"TYPE", NULL};
    char *disp_arguments[] = {NULL};
    workshop_t *wrks = wkrs_create_wrks();
    int add_return = FUNC_FAILED;
    int sort_return = FUNC_FAILED;
    int disp_return = FUNC_FAILED;
    int free_return = FUNC_FAILED;

    if (wrks == NULL)
        cr_assert_eq(add_return, FUNC_SUCCESS, "Workshop failed creation (ptr: %p)", wrks);
    add_return = add(wrks, add_arguments);
    sort_return = sort(wrks, sort_arguments);
    disp_return = disp(wrks, disp_arguments);
    free_return = wkrs_free_wrks(wrks);
    cr_assert_eq(add_return, FUNC_SUCCESS, "Hardware failed to add (ExitCode: %d)", add_return);
    cr_assert_eq(disp_return, FUNC_SUCCESS, "Hardware failed to sort (ExitCode: %d)", sort_return);
    cr_assert_eq(disp_return, FUNC_SUCCESS, "Hardware failed to display (ExitCode: %d)", disp_return);
    cr_assert_eq(free_return, FUNC_SUCCESS, "Hardware failed to free itself (ExitCode: %d)", free_return);
    cr_assert_stdout_eq_str("WIRE n°0 - \"hdmi\" added.\nDEVICE n°1 - \"tom\" added.\nDEVICE n°1 - \"tom\"\nWIRE n°0 - \"hdmi\"\n", "");
}

Test (test_organized_sort, test_1_type_rev, .init = cr_redirect_stdout)
{
    char *add_arguments[] = {"WIRE", "hdmi", "DEVICE", "tom", NULL};
    char *sort_arguments[] = {"TYPE", "-r", NULL};
    char *disp_arguments[] = {NULL};
    workshop_t *wrks = wkrs_create_wrks();
    int add_return = FUNC_FAILED;
    int sort_return = FUNC_FAILED;
    int disp_return = FUNC_FAILED;
    int free_return = FUNC_FAILED;

    if (wrks == NULL)
        cr_assert_eq(add_return, FUNC_SUCCESS, "Workshop failed creation (ptr: %p)", wrks);
    add_return = add(wrks, add_arguments);
    sort_return = sort(wrks, sort_arguments);
    disp_return = disp(wrks, disp_arguments);
    free_return = wkrs_free_wrks(wrks);
    cr_assert_eq(add_return, FUNC_SUCCESS, "Hardware failed to add (ExitCode: %d)", add_return);
    cr_assert_eq(disp_return, FUNC_SUCCESS, "Hardware failed to sort (ExitCode: %d)", sort_return);
    cr_assert_eq(disp_return, FUNC_SUCCESS, "Hardware failed to display (ExitCode: %d)", disp_return);
    cr_assert_eq(free_return, FUNC_SUCCESS, "Hardware failed to free itself (ExitCode: %d)", free_return);
    cr_assert_stdout_eq_str("WIRE n°0 - \"hdmi\" added.\nDEVICE n°1 - \"tom\" added.\nWIRE n°0 - \"hdmi\"\nDEVICE n°1 - \"tom\"\n", "");
}

Test (test_organized_sort, sort_sanity_valid_1)
{
    char *args[] = {"ID", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_SUCCESS, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_valid_2)
{
    char *args[] = {"NAME", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_SUCCESS, "Sort function failed! (ExitCode: %d)", func_res);
}


Test (test_organized_sort, sort_sanity_valid_3)
{
    char *args[] = {"TYPE", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_SUCCESS, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_valid_4)
{
    char *args[] = {"ID", "-r", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_SUCCESS, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_valid_5)
{
    char *args[] = {"NAME", "-r", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_SUCCESS, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_valid_6)
{
    char *args[] = {"TYPE", "-r", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_SUCCESS, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_valid_7)
{
    char *args[] = {"ID", "-r", "NAME", "TYPE", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_SUCCESS, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_valid_8)
{
    char *args[] = {"NAME", "-r", "ID", "TYPE", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_SUCCESS, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_valid_9)
{
    char *args[] = {"TYPE", "-r", "NAME", "ID", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_SUCCESS, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_invalid_type_singular_under)
{
    char *args[] = {"TYPe", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_FAILED, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_invalid_type_singular_overflow)
{
    char *args[] = {"TYPEs", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_FAILED, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_invalid_2types_1x_under_1)
{
    char *args[] = {"TYPe", "-r", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_FAILED, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_invalid_2types_1x_overflow_1)
{
    char *args[] = {"TYPEs", "-r", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_FAILED, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_invalid_2types_1x_upper_2)
{
    char *args[] = {"TYPE", "-R", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_FAILED, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_invalid_2types_1x_overflow_2)
{
    char *args[] = {"TYPE", "-re", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_FAILED, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_invalid_2types_r_missing_bar)
{
    char *args[] = {"TYPE", "r", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_FAILED, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_invalid_gibberish_data_1)
{
    char *args[] = {"WiRE", "valid", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_FAILED, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_invalid_gibberish_data_2)
{
    char *args[] = {"WIRE", "WIRE", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_FAILED, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_invalid_gibberish_data_3)
{
    char *args[] = {"TYPE", "WiRE", "VALID", "valida", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_FAILED, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_invalid_gibberish_data_4)
{
    char *args[] = {"ID", "WIRE", "WIRE", "WIRE", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_FAILED, "Sort function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_sort, sort_sanity_invalid_gibberish_data_5)
{
    char *args[] = {"ID", "-r", "WIRE", "WIRE", NULL};
    int func_res = shell_sort_sanity(args);

    cr_assert_eq(func_res, FUNC_FAILED, "Sort function failed! (ExitCode: %d)", func_res);
}
