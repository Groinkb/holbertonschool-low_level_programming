#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array ofnaintegrer
 * @a: Array to be printed.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0 || a == NULL)
		return;

	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}

	printf("\n");
}
