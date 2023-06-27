#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 *
 * @s: a function who's been count
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	char *ptr = s;
	while (*ptr)

		ptr++;
	return (int)(ptr - s);
}
