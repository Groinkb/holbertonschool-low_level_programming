#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the substring to locate.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h && (*h == *n))
		{
			h++;
			n++;
		}

		if (!(*n))
			return (haystack);

		haystack++;
	}

	return (NULL);
}
