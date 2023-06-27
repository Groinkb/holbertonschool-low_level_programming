#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: a pointer to the string
 *
 * Return: The length of the string
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
