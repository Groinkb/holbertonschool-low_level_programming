#include "main.h"

/**
 * cap_string - Met en majuscule tous les mots dans une chaîne de caractères.
 * @str: Chaîne de caractères à mettre en majuscule.
 *
 * Return: Pointeur vers la chaîne de caractères en majuscule.
 */
char *cap_string(char *str)
{
	int count = 0;

	if (str[count] >= 'a' && str[count] <= 'z')
		str[count] -= 32;

	while (str[count] != '\0')
	{
		if (str[count] == ' ' || str[count] == '\t' || str[count] == '\n' ||
		    str[count] == ',' || str[count] == ';' || str[count] == '.' ||
		    str[count] == '!' || str[count] == '?' || str[count] == '"' ||
		    str[count] == '(' || str[count] == ')' || str[count] == '{' ||
		    str[count] == '}')
		{
			if (str[count + 1] >= 'a' && str[count + 1] <= 'z')
				str[count + 1] -= 32;
		}
		count++;
	}

	return (str);
}
