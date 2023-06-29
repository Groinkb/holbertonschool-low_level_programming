#include "main.h"

/**
 * puts_half - Affiche la moitié arrière d'une chaîne de caractères.
 * @str: La chaîne de caractères.
 */
void puts_half(char *str)
{
	int length = 0;
	char *temp = str;
	int start, i;

	while (*temp != '\0')
	{
		length++;
		temp++;
	}

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length + 1) / 2;

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
