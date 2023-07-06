#include "main.h"

/**
<<<<<<< HEAD
 * _print_rev_recursion - imprime une chaîne de caractères en ordre inverse
 * @s: la chaîne de caractères à imprimer
=======
 * _puts_rev- prints a string, followed by a new line.
 * @s: a string
>>>>>>> 32df76c (chang1)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
