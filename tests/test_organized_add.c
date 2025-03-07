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

Test (test_organized_add, test_1_elt, .init = cr_redirect_stdout)
{
    char *add_arguments[] = {"WIRE", "alpha", NULL};
    char *disp_arguments[] = {NULL};
    workshop_t *wrks = wkrs_create_wrks();
    int add_return = FUNC_FAILED;
    int disp_return = FUNC_FAILED;
    int free_return = FUNC_FAILED;

    if (wrks == NULL)
        cr_assert_eq(add_return, FUNC_SUCCESS, "Workshop failed creation (ptr: %p)", wrks);
    add_return = add(wrks, add_arguments);
    disp_return = disp(wrks, disp_arguments);
    free_return = wkrs_free_wrks(wrks);
    cr_assert_eq(add_return, FUNC_SUCCESS, "Hardware failed to add (ExitCode: %d)", add_return);
    cr_assert_eq(disp_return, FUNC_SUCCESS, "Hardware failed to display (ExitCode: %d)", disp_return);
    cr_assert_eq(free_return, FUNC_SUCCESS, "Hardware failed to free itself (ExitCode: %d)", free_return);
    cr_assert_stdout_eq_str("WIRE n°0 - \"alpha\" added.\nWIRE n°0 - \"alpha\"\n", "");
}

Test (test_organized_add, test_2_elt, .init = cr_redirect_stdout)
{
    char *add_arguments[] = {"WIRE", "alpha", "ACTUATOR", "delta", NULL};
    char *disp_arguments[] = {NULL};
    workshop_t *wrks = wkrs_create_wrks();
    int add_return = FUNC_FAILED;
    int disp_return = FUNC_FAILED;
    int free_return = FUNC_FAILED;

    if (wrks == NULL)
        cr_assert_eq(add_return, FUNC_SUCCESS, "Workshop failed creation (ptr: %p)", wrks);
    add_return = add(wrks, add_arguments);
    disp_return = disp(wrks, disp_arguments);
    free_return = wkrs_free_wrks(wrks);
    cr_assert_eq(add_return, FUNC_SUCCESS, "Hardware failed to add (ExitCode: %d)", add_return);
    cr_assert_eq(disp_return, FUNC_SUCCESS, "Hardware failed to display (ExitCode: %d)", disp_return);
    cr_assert_eq(free_return, FUNC_SUCCESS, "Hardware failed to free itself (ExitCode: %d)", free_return);
    cr_assert_stdout_eq_str("WIRE n°0 - \"alpha\" added.\nACTUATOR n°1 - \"delta\" added.\nACTUATOR n°1 - \"delta\"\nWIRE n°0 - \"alpha\"\n", "");
}

Test (test_organized_add, test_3_elt, .init = cr_redirect_stdout)
{
    char *add_arguments[] = {"WIRE", "alpha", "ACTUATOR", "delta", "DEVICE", "charlie", NULL};
    char *disp_arguments[] = {NULL};
    workshop_t *wrks = wkrs_create_wrks();
    int add_return = FUNC_FAILED;
    int disp_return = FUNC_FAILED;
    int free_return = FUNC_FAILED;

    if (wrks == NULL)
        cr_assert_eq(add_return, FUNC_SUCCESS, "Workshop failed creation (ptr: %p)", wrks);
    add_return = add(wrks, add_arguments);
    disp_return = disp(wrks, disp_arguments);
    free_return = wkrs_free_wrks(wrks);
    cr_assert_eq(add_return, FUNC_SUCCESS, "Hardware failed to add (ExitCode: %d)", add_return);
    cr_assert_eq(disp_return, FUNC_SUCCESS, "Hardware failed to display (ExitCode: %d)", disp_return);
    cr_assert_eq(free_return, FUNC_SUCCESS, "Hardware failed to free itself (ExitCode: %d)", free_return);
    cr_assert_stdout_eq_str("WIRE n°0 - \"alpha\" added.\nACTUATOR n°1 - \"delta\" added.\nDEVICE n°2 - \"charlie\" added.\nDEVICE n°2 - \"charlie\"\nACTUATOR n°1 - \"delta\"\nWIRE n°0 - \"alpha\"\n", "");
}

Test (test_organized_add, test_1_invalid, .init = cr_redirect_stdout)
{
    char *add_arguments[] = {"WIRE", "alpha", "ACTUATORS", "delta", "DEVICE", "charlie", NULL};
    char *disp_arguments[] = {"DATA", NULL};
    workshop_t *wrks = wkrs_create_wrks();
    int add_return = FUNC_FAILED;
    int disp_return = FUNC_FAILED;
    int free_return = FUNC_FAILED;

    if (wrks == NULL)
        cr_assert_eq(add_return, FUNC_SUCCESS, "Workshop failed creation (ptr: %p)", wrks);
    add_return = add(wrks, add_arguments);
    disp_return = disp(wrks, disp_arguments);
    free_return = wkrs_free_wrks(wrks);
    cr_assert_eq(add_return, FUNC_FAILED, "Hardware failed to detect add error (ExitCode: %d)", add_return);
    cr_assert_eq(disp_return, FUNC_FAILED, "Hardware failed to detect display error (ExitCode: %d)", disp_return);
    cr_assert_eq(free_return, FUNC_SEMFAIL, "Hardware failed to detect there wasn't anything to free (ExitCode: %d)", free_return);
    cr_assert_stdout_eq_str("", "");
}

Test (test_organized_add, test_2_invalid, .init = cr_redirect_stdout)
{
    char *add_arguments[] = {NULL};
    char *disp_arguments[] = {NULL};
    workshop_t *wrks = wkrs_create_wrks();
    int add_return = FUNC_FAILED;
    int disp_return = FUNC_FAILED;
    int free_return = FUNC_FAILED;

    if (wrks == NULL)
        cr_assert_eq(add_return, FUNC_SUCCESS, "Workshop failed creation (ptr: %p)", wrks);
    add_return = add(wrks, add_arguments);
    disp_return = disp(wrks, disp_arguments);
    free_return = wkrs_free_wrks(wrks);
    cr_assert_eq(add_return, FUNC_FAILED, "Hardware failed to detect add error (ExitCode: %d)", add_return);
    cr_assert_eq(disp_return, FUNC_FAILED, "Hardware failed to detect display error (ExitCode: %d)", disp_return);
    cr_assert_eq(free_return, FUNC_SEMFAIL, "Hardware failed to detect there wasn't anything to free (ExitCode: %d)", free_return);
    cr_assert_stdout_eq_str("", "");
}

Test (test_organized_add, test_3_invalid, .init = cr_redirect_stdout)
{
    char *add_arguments[] = {"WIRE", "alpha", "ACTUATOR", "delta", "DEVICE", "charlie"};
    char *disp_arguments[] = {"F", NULL};
    workshop_t *wrks = wkrs_create_wrks();
    int add_return = FUNC_FAILED;
    int disp_return = FUNC_FAILED;
    int free_return = FUNC_FAILED;

    if (wrks == NULL)
        cr_assert_eq(add_return, FUNC_SUCCESS, "Workshop failed creation (ptr: %p)", wrks);
    add_return = add(wrks, add_arguments);
    disp_return = disp(wrks, disp_arguments);
    free_return = wkrs_free_wrks(wrks);
    cr_assert_eq(add_return, FUNC_SUCCESS, "Hardware failed to add (ExitCode: %d)", add_return);
    cr_assert_eq(disp_return, FUNC_FAILED, "Hardware failed to detect display error (ExitCode: %d)", disp_return);
    cr_assert_eq(free_return, FUNC_SUCCESS, "Hardware failed to free itself (ExitCode: %d)", free_return);
    cr_assert_stdout_eq_str("WIRE n°0 - \"alpha\" added.\nACTUATOR n°1 - \"delta\" added.\nDEVICE n°2 - \"charlie\" added.\n", "");
}

Test (test_organized_add, add_sanity_valid_1)
{
    char *args[] = {"WIRE", "valid", NULL};
    int func_res = shell_add_sanity(args);

    cr_assert_eq(func_res, FUNC_SUCCESS, "Add function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_add, add_sanity_valid_2)
{
    char *args[] = {"ACTUATOR", "valid", NULL};
    int func_res = shell_add_sanity(args);

    cr_assert_eq(func_res, FUNC_SUCCESS, "Add function failed! (ExitCode: %d)", func_res);
}


Test (test_organized_add, add_sanity_valid_3)
{
    char *args[] = {"DEVICE", "valid", NULL};
    int func_res = shell_add_sanity(args);

    cr_assert_eq(func_res, FUNC_SUCCESS, "Add function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_add, add_sanity_valid_4)
{
    char *args[] = {"PROCESSOR", "valid", NULL};
    int func_res = shell_add_sanity(args);

    cr_assert_eq(func_res, FUNC_SUCCESS, "Add function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_add, add_sanity_valid_5)
{
    char *args[] = {"SENSOR", "valid", NULL};
    int func_res = shell_add_sanity(args);

    cr_assert_eq(func_res, FUNC_SUCCESS, "Add function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_add, add_sanity_invalid_type)
{
    char *args[] = {"ROPE", "valid", NULL};
    int func_res = shell_add_sanity(args);

    cr_assert_eq(func_res, FUNC_FAILED, "Add function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_add, add_sanity_invalid_type_lettering)
{
    char *args[] = {"WiRE", "valid", NULL};
    int func_res = shell_add_sanity(args);

    cr_assert_eq(func_res, FUNC_FAILED, "Add function failed! (ExitCode: %d)", func_res);
}

Test (test_organized_add, add_sanity_invalid_addon_lettering)
{
    char *args[] = {"WIRE", "valid57", NULL};
    int func_res = shell_add_sanity(args);

    cr_skip();
    cr_assert_eq(func_res, FUNC_FAILED, "Add function failed! (ExitCode: %d)", func_res);
}
