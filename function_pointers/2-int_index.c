#include <stdio.h>

/**
 * int_index - searches for an integer in an array.
 *
 * @array: array of integers.
 * @size: size of array.
 * @cmp: pointer to function that compares integers.
 *
 * Return: index of the first element for which cmp function does not return 0.
 *         If no element matches, return -1.
 *         If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
