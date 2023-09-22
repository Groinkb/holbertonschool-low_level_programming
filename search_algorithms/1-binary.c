#include "search_algos.h"

/**
 * binary_search - Recherche un élément dans un tableau trié en utilisant
 *                 la recherche binaire.
 * @array: Pointeur vers le premier élément du tableau à rechercher.
 * @size: Nombre d'éléments dans le tableau.
 * @value: Valeur à rechercher.
 *
 * Return: Index de la première occurrence de la valeur, sinon -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
			else
				printf("\n");
		}

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
