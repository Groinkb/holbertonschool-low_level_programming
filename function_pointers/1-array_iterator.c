#include <stdio.h>

/**
 * array_iterator - Executes a function given as a parameter
 *                  on each element of an array.
 *
 * @array: Array of integers.
 * @size: Size of the array.
 * @action: Pointer to the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;

	for (size_t i = 0; i < size; i++)
		action(array[i]);
}
