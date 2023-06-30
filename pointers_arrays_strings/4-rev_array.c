#include "main.h"

/**
 * string_toupper - Convertit toutes les lettres minuscules en majuscules.
 * @str: Chaîne de caractères à convertir.
 *
 * Return: Pointeur vers la chaîne de caractères convertie.
 */
char *string_toupper(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] -= 32;
		}
		count++;
	}

	return (str);
}
