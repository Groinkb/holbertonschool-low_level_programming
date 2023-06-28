#include "main.h"

/**
 * _puts - une fonction qui affiche une chaîne de caractères,
 * suivie d'une nouvelle ligne, sur stdout.
 * @str: une chaîne de caractères avec une certaine longueur
 * Pointeur temporaire pour parcourir la chaîne
 * Parcours de la chaîne de caractères 
 */
void _puts(char *str)
{
	char *ptr = str; 

    
    while (*ptr != '\0')
    {
        _putchar(*ptr);
        ptr++;
    }

    _putchar('\n');
}
