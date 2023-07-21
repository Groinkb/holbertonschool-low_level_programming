#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Amount of the arguments.
 * va_arg  to grab the first argument
 * Return: Sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list valist;
	va_start(valist, n);

	int sum = va_arg(valist, int);

	va_end(valist);

	return (sum + sum_them_all(n - 1, ...));
}
