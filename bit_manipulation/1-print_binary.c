#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int leading_zero = 1; // Flag to indicate leading zeros

	for (i = 63; i >= 0; i--)
	{
		unsigned long int current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			leading_zero = 0; // We have encountered the first '1'
		}
		else if (!leading_zero)
		{
			_putchar('0');
		}
	}

	// If the number is zero, print '0'
	if (leading_zero)
		_putchar('0');
}
