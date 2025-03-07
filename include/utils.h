/*
** EPITECH PROJECT, 2024
** utils (Header)
** File description:
** my_ls
*/

#ifndef UTILS_H
    #define UTILS_H

    /*
    * Max Buffer for file reading
    * Format in kB
    *
    */
    #define MAX_BUFFER 32000

#endif

#ifndef UTILS_STDFD_H
    #define UTILS_STDFD_H

    /*
    * Standard Input
    *
    */
    #define STDIN 0

    /*
    * Standard Output
    *
    */
    #define STDOUT 1

    /*
    * Standard Error Output
    *
    */
    #define STDERR 2

#endif

#ifndef UTILS_EXITCODES_EXT_H
    #define UTILS_EXITCODES_EXT_H

    /*
    * Failing exit status
    * In accordance with Epitech specifications
    *
    */
    #define EXIT_FAILURE_84 84

#endif

#ifndef UTILS_FNC_EXITCODES_EXT_H
    #define UTILS_FNC_EXITCODES_EXT_H

    /*
    * Semi failing exit status
    * In accordance with Epitech specifications
    *
    */
    #define FUNC_SEMFAIL -2

    /*
    * Failing exit status
    * In accordance with Epitech specifications
    *
    */
    #define FUNC_FAILED -1

    /*
    * Failing exit status
    * In accordance with Epitech specifications
    *
    */
    #define FUNC_SUCCESS 0

#endif

#ifndef UTILS_BOOL_H
    #define UTILS_BOOL_H
    /*
    * True exit status or conditional value
    *
    */
    #define TRUE 1

    /*
    * True exit status or conditional value
    *
    */
    #define FALSE 0

#endif

#ifndef UTILS_STRUCT_H
    #define UTILS_STRUCT_H

typedef struct vector_2i_s {
    int x;
    int y;
} vector_2i_t;

typedef struct vector_2f_s {
    double x;
    double y;
} vector_2f_t;

typedef struct vector_3i_s {
    int x;
    int y;
    int z;
} vector_3i_t;

typedef struct vector_3f_s {
    double x;
    double y;
    double z;
} vector_3f_t;

#endif

#ifndef UTILS_MACROS_H
    #define UTILS_MACROS_H

    /*
    * Minimum
    * Return the minimum value between 'a' and 'b'
    *
    */
    #define MIN(a, b)   ((a < b) ? (a) : (b))

    /*
    * Maximum
    * Return the maximum value between 'a' and 'b'
    *
    */
    #define MAX(a, b)   ((a > b) ? (a) : (b))

    /*
    * Absolute value
    * Returns the absolute value of 'a'
    *
    */
    #define ABS(a)   ((a < 0) ? (-a) : (a))

    /*
    * Is in between
    * Returns true if 'n' is in between 'a' and 'b', false if it isn't
    *
    */
    #define IN_BETWEEN(a, n, b)   ((a <= n && n <= b) ? (1) : (0))

    /*
    * Is strictly in between
    * Returns true if 'n' is strictly in between 'a' and 'b', false if it isn't
    *
    */
    #define STRCT_IN_BETWEEN(a, n, b)   ((a < n && n < b) ? (1) : (0))

    /*
    * Is a maj alphabetic character
    * Returns true if 'a' is in the maj alphabetic range
    *
    */
    #define IS_MAJ_ALPHA(a)   ((a >= 'A' && a <= 'Z') ? (1) : (0))

    /*
    * Is a lowcase alphabetic character
    * Returns true if 'a' is in the lowcase alphabetic range
    *
    */
    #define IS_LC_ALPHA(a)   ((a >= 'a' && a <= 'z') ? (1) : (0))

    /*
    * Is an alphabetic character
    * Returns true if 'a' is in either maj or lowcase alphabetic range
    *
    */
    #define IS_ALPHA(a)   ((IS_MAJ_ALPHA(a) && IS_LC_ALPHA(a)) ? (1) : (0))

    /*
    * Maj alphabetic character to lower case
    * Returns 'a + 32' if 'a' is in the maj alphabetic range,
    * returns 'a' if 'a' isn't in the maj alphabetic range
    *
    */
    #define ALPHA_C_MAJ_T_LC(a)   ((IS_MAJ_ALPHA(a)) ? a + 32 : a)

    /*
    * Lowcase alphabetic character to lower case
    * Returns 'a - 32' if 'a' is in the lowcase alphabetic range,
    * returns 'a' if 'a' isn't in the lowcase alphabetic range
    *
    */
    #define ALPHA_C_LC_T_MAJ(a)   ((IS_LC_ALPHA(a)) ? a - 32 : a)
#endif
