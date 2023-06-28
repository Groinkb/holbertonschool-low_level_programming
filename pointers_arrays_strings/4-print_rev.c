#include "main.h"
#include <stddef.h>

/**
* print_rev - Affiche une chaîne de caractères en ordre inverse, 
 *suivie d'une nouvelle ligne.
 * @s: Pointeur vers la chaîne de caractères.
 */
void print_rev(char *s)
{
	char *ptr = s;
	int length = 0;

	/* Calcul de la longueur de la chaîne */
	while (*ptr != '\0')
	{
		length++;
		ptr++;
	}

	/* Parcours et affichage en ordre inverse */
	while (length > 0)
	{
		_putchar(*(s + length - 1));
		length--;
	}

	_putchar('\n');
}
