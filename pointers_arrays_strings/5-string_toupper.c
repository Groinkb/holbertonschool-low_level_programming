#include "main.h"
#include <stddef.h>

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length, index;
	char *begin, *end, character;

	length = 0;
	while (s[length] != '\0')
		length++;

	begin = s;
	end = s + length - 1;

	for (index = 0; index < length / 2; index++)
	{
		character = *end;
		*end = *begin;
		*begin = character;

		begin++;
		end--;
	}
}
