#include <stdio.h>

/**
 * array_iterator - Executes a function given as a parameter
 *                  on each element of an array.
 *
 * @array: Array of  the integers.
 * @size: Size of the array.
 * @action: Pointer to the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;

	size_t i;
	for (i = 0; i < size; i++)
		action(array[i]);
}
