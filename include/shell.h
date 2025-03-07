/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Setting Up Shell
** File description:
** shell.h
*/

#ifndef SHELL_STRUCT_H
    #define SHELL_STRUCT_H

    #define HARD_UNKNOWN 0
    #define HARD_ACTUATOR 1
    #define HARD_DEVICE 2
    #define HARD_PROCS 3
    #define HARD_SENSORS 4
    #define HARD_WIRES 5

    #define HRD_UNKN "UNKNOWN"
    #define HRD_WRES "WIRE"
    #define HRD_ACTS "ACTUATOR"
    #define HRD_DEVS "DEVICE"
    #define HRD_PRCS "PROCESSOR"
    #define HRD_SENS "SENSOR"
    #define HRD_VAL_TYPES_N 5

    #define SORT_D_UNKNOWN 0
    #define SORT_D_ID 1
    #define SORT_D_NAME 2
    #define SORT_D_TYPE 3
    #define SORT_D_REV 4

    #define SORT_UNKN "UNKNOWN"
    #define SORT_ID "ID"
    #define SORT_NAME "NAME"
    #define SORT_TYPE "TYPE"
    #define SORT_REV "-r"
    #define SORT_VAL_TYPES_N 4

    #define SORT_F_REV(rev, func1, func2)   (rev == TRUE ? func1 : func2)

typedef struct hardware {
    unsigned int id;
    unsigned int type;
    char *type_s;
    char *tag;
    struct hardware *next;
    struct hardware *previous;
} hardware_t;

typedef struct workshop {
    unsigned int id_offset;
    struct hardware *start;
    struct hardware *end;
} workshop_t;

#endif

#ifndef SHELL_H
    #define SHELL_H

int add(void *data, char **args);
int del(void *data, char **args);
int sort(void *data, char **args);
int disp(void *data, char **args);

int workshop_shell(void *data);

#endif

#ifndef SHELL_WRAP_H
    #define SHELL_WRAP_H

int sh_shell_loop(void);

#endif

#ifndef SHELL_WRKS_H
    #define SHELL_WRKS_H

hardware_t *wkrs_create_chain(void);
workshop_t *wkrs_create_wrks(void);
hardware_t *wkrs_find_chain(workshop_t *wrks, unsigned int id);
int hw_chain_len(hardware_t *start);
int wkrs_free_chain(hardware_t *hardware);
int wkrs_free_wrks(workshop_t *wrks);
int wrks_chain_workshop(workshop_t *wrks, hardware_t *hardware);
int wrks_get_hw_type(char *arg);
int wrks_get_srt_type(char *arg);
int wrks_get_srt_rev(char *arg);
int hw_print_hardware(hardware_t *hardware, int endchar);
int sh_args_len(char **args);

#endif

#ifndef SHELL_WRKS_SANITY_H
    #define SHELL_WRKS_SANITY_H

int shell_add_sanity(char **args);
int shell_del_sanity(char **args);
int shell_sort_sanity(char **args);

#endif

#ifndef SHELL_WRKS_SORTS_H
    #define SHELL_WRKS_SORTS_H

int sh_insert_sort(workshop_t *wrks,
    int (*wrks_cmp)(hardware_t *hard, hardware_t *max_hard));

int sh_hw_sortby_id(hardware_t *hard, hardware_t *max_hard);
int sh_hw_sortby_name(hardware_t *hard, hardware_t *max_hard);
int sh_hw_sortby_type(hardware_t *hard, hardware_t *max_hard);

int sh_hw_sortby_rid(hardware_t *hard, hardware_t *max_hard);
int sh_hw_sortby_rname(hardware_t *hard, hardware_t *max_hard);
int sh_hw_sortby_rtype(hardware_t *hard, hardware_t *max_hard);

#endif
