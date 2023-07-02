#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Calcule la somme des deux diagonales
 * @a: Matrice 2D d'entiers.
 * @size: Taille de la matrice.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - i - 1);
	}

	printf("%i, %i\n", sum1, sum2);
}
