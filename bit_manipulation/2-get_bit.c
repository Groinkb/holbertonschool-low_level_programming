#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit, or -1 if the index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	unsigned long int mask = 1UL << index; // Create a mask with a 1 at the specified index

	if (n & mask) // Check if the bit at the index is 1
		return (1);
	else
		return (0);
}
