#include "main.h"

/**
 * _puts - Affiche une chaîne de caractères
 * suivie d'une nouvelle ligne sur stdout.
 * @str: Chaîne de caractères à afficher.
 */
void _puts(char *str)
{
	char *ptr = str; /* Pointeur temporaire pour parcourir la chaîne */

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}

	_putchar('\n');
}
