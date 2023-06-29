#include "main.h"

/**
 * puts_half - Affiche la moitié arrière d'une chaîne de caractères.
 * @str: La chaîne de caractères.
 */
void puts_half(char *str)
{
	int length = 0;
	char *temp = str;

	while (*temp != '\0')
	{
		length++;
		temp++;
	}

	int start = length % 2 == 0 ? length / 2 : (length + 1) / 2;

	for (int i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
