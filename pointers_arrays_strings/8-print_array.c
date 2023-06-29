#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0 || a == NULL)
		return;

	printf("%d", a[0]);

	for (i = 1; i < n; i++)
		printf(", %d", a[i]);

	printf("\n");
}
