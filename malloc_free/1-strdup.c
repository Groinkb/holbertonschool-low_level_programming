#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string into newly allocated array
 * @str: string to duplicate the string
 * Return: pointer to new string, or NULL if str is NULL
 * or if memory allocation fails
 */
char *_strdup(char *str)
{
	int size = 0;
	char *ptr, *ret;

	if (str == NULL)
		return (NULL);

	ptr = str;
	while (*ptr != '\0')
	{
		size++;
		ptr++;
	}

	ret = malloc(sizeof(char) * (size + 1));
	if (ret == NULL)
		return (NULL);

	ptr = ret;
	while (*str != '\0')
	{
		*ptr = *str;
		ptr++;
		str++;
	}

	*ptr = '\0';
	return (ret);
}
