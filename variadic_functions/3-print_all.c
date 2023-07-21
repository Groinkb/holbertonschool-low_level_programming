#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include "variadic_functions.h"

/* Définition du type print_fn_t */
typedef struct print_fn
{
    char type;
    void (*fn)(va_list);
} print_fn_t;

/**
 * print_char - Print a char.
 *
 * @valist: va_list with the arguments.
 */
void print_char(va_list valist)
{
    printf("%c", va_arg(valist, int));
}

/**
 * print_integer - Print an integer.
 *
 * @valist: va_list with the arguments.
 */
void print_integer(va_list valist)
{
    printf("%i", va_arg(valist, int));
}

/**
 * print_float - Print a float.
 *
 * @valist: va_list with the arguments.
 */
void print_float(va_list valist)
{
    printf("%f", va_arg(valist, double));
}

/**
 * print_string - Print a string.
 *
 * @valist: va_list with the arguments.
 */
void print_string(va_list valist)
{
    char *string = va_arg(valist, char *);

    if (string == NULL)
        string = "(nil)";

    printf("%s", string);
}

/**
 * print_all - Function that prints anything.
 *
 * @format: This is the format to print a value.
 */
void print_all(const char * const format, ...)
{
    va_list valist;
    int i = 0;
    char *separator = "";

    print_fn_t print_fn[] = {
        {'c', print_char},
        {'i', print_integer},
        {'f', print_float},
        {'s', print_string},
        {0, NULL}
    };

    va_start(valist, format);

    while (format != NULL && format[i] != '\0')
    {
        int j = 0;
        while (print_fn[j].type != 0)
        {
            if (format[i] == print_fn[j].type)
            {
                printf("%s", separator);
                print_fn[j].fn(valist);
                separator = ", ";
                break;
            }
            j++;
        }
        i++;
    }

    printf("\n");
    va_end(valist);
}
