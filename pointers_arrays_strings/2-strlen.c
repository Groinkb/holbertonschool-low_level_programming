#include "main.h"

/**
 * _strlen - Retourne la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Return: La longueur de la chaîne de caractères.
 */
int _strlen(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		ptr++;
	}

	return (int)(ptr - s);
}
