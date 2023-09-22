#include "search_algos.h"

/**
 * linear_search - Recherche un élément dans un tableau avec la méthode linéaire.
 * @array: Pointeur vers le premier élément du tableau à rechercher.
 * @size: Nombre d'éléments dans le tableau.
 * @value: Valeur à rechercher.
 *
 * Return: Index de la première occurrence de la valeur, sinon -1.
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL || size < 1)
		return (-1);

	size_t i;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
