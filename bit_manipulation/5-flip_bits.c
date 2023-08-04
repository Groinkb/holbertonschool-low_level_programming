#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m;
	unsigned int count = 0;

	while (exclusive > 0)
	{
		count += exclusive & 1; /* Check the rightmost bit of exclusive */
		exclusive >>= 1;				/* Right-shift exclusive by 1 bit */
	}

	return (count);
}
