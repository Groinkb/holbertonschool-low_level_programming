#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 *
 * @dest: Destination buffer.
 * @src: Source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
		{
		dest[index] = src[index];
		index++;
	}

	dest[index] = '\0';

	return (dest);
}
