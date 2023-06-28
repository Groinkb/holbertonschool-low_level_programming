#include "main.h"
#include <stddef.h>

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	char *begin = s;
	char *end = s;

	if (s == NULL)
		return;

	while (*end != '\0')
	{
		length++;
		end++;
	}

	end--;

	for (int index = 0; index < length / 2; index++)
	{
		char temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
