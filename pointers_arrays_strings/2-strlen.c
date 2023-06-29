#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		ptr++;
	}

	return ((int)(ptr - s));
}
