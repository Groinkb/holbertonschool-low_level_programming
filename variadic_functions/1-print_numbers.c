#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Prints numbers.
 * while for the boucle
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 *
 * Return: No return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	int number;

	va_start(valist, n);

	while (i < n)
	{
		number = va_arg(valist, int);
		printf("%d", number);

		if (separator && i < n - 1)
			printf("%s", separator);

		i++;
	}

	printf("\n");
	va_end(valist);
}
