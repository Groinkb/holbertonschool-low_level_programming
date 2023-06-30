#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: Negative value if s1 < s2, 0 if s1 == s2, positive value if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	result = (*(unsigned char *)s1) - (*(unsigned char *)s2);
	return (result);
}
