#include "search_algos.h"

/**
 * binary_search - Recherche un élément dans un tableau trié en utilisant la recherche binaire.
 * @array: Pointeur vers le premier élément du tableau à rechercher.
 * @size: Nombre d'éléments dans le tableau.
 * @value: Valeur à rechercher.
 *
 * Return: Index de la première occurrence de la valeur, sinon -1.
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (size_t i = low; i <= high; i++)
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
