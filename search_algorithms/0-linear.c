#include "search_algos.h"

/**
 * linear_search -  A function
 * @array: A pointer to the first
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: the matching array
 * index value
 * otherwise return -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size < 2)
	{
		return (-1);
	}
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
