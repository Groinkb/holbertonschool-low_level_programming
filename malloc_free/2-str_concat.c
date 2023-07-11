#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string to concatenate to the end of the first string
 *
 * Return: pointer to the newly allocated concatenated string, or NULL i
 * f allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0;
	char *ptr, *ret;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = s1;
	while (*ptr != '\0')
	{
		size1++;
		ptr++;
	}

	ptr = s2;
	while (*ptr != '\0')
	{
		size2++;
		ptr++;
	}

	ret = malloc(sizeof(char) * (size1 + size2 + 1));
	if (ret == NULL)
		return (NULL);

	ptr = ret;
	while (*s1 != '\0')
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}

	while (*s2 != '\0')
	{
		*ptr = *s2;
		ptr++;
		s2++;
	}

	*ptr = '\0';

	return (ret);
}
