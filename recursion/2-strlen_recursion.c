#include "main.h"

/**
 * _strlen_recursion - Retourne la longueur d'une chaîne de caractères
 * @s: Pointeur vers la chaîne de caractères
 *
 * Return: Longueur de la chaîne
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return length;
}
