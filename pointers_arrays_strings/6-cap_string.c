#include "main.h"

/**
 * cap_string - Capitalize all words in a string.
 * @str: String to capitalize.
 *
 * Return: Pointer to the capitalized string.
 */
char *cap_string(char *str)
{
	int count = 0;

	if (str[count] >= 'a' && str[count] <= 'z')
		str[count] -= 32;

	while (str[count] != '\0')
	{
		switch (str[count])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (str[count + 1] >= 'a' && str[count + 1] <= 'z')
					str[count + 1] -= 32;
				break;
		}
		count++;
	}

	return (str);
}
