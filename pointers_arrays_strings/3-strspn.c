#include "main.h"

/**
 * _strspn - Calculates the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the accepted characters.
 *
 * Return: Length of the initionly of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
		}

		if (!accept[i])
			break;

		s++;
	}

	return (length);
}
