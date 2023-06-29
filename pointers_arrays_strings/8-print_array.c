#include "main.h"
#include <stdio.h>

/**
 * print_array - Affiche n éléments d'un tableau d'entiers, suivi d'un saut de ligne.
 * @a: Le tableau à afficher.
 * @n: Le nombre d'éléments à afficher.
 */
void print_array(int *a, int n)
{
	if (n <= 0 || a == NULL)
		return;

	printf("%d", a[0]);

	for (int i = 1; i < n; i++)
		printf(", %d", a[i]);

	printf("\n");
}
