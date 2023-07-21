#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include "variadic_functions.h"

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
		printf("(nil)");
	else
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

	va_start(valist, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				print_char(valist);
				break;
			case 'i':
				print_integer(valist);
				break;
			case 'f':
				print_float(valist);
				break;
			case 's':
				print_string(valist);
				break;
			default:
				separator = ", ";
				break;
		}

		if (format[i + 1] != '\0' && *separator != '\0')
			printf("%s", separator);

		i++;
	}

	printf("\n");
	va_end(valist);
}
