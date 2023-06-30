#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int tempVar, start, end;

	for (start = 0, end = n - 1; start < end; start++, end--)
	{
		tempVar = a[start];
		a[start] = a[end];
		a[end] = tempVar
	}
}
