#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings.
 *
 * @separator: String to be printed between the strings.
 * @n: Number of strings passed to the function.
 *
 * Return: No return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	char *str;

	va_start(valist, n);

	while (i < n)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);

		i++;
	}

	printf("\n");
	va_end(valist);
}
