#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Crée un tableau de caractères initialisé.
 * @size: Taille du tableau à créer.
 * @c: Caractère à initialiser dans le tableau.
 *
 * Return: Pointeur vers le tableau créé, ou NULL s'il échoue.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
