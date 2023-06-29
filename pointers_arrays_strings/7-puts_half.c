#include "main.h"

/**
 * puts_half - Affiche la moitié arrière d'une chaîne de caractères.
 * @str: La chaîne de caractères.
 */
void puts_half(char *str)
{
        int length = strlen(str);
        int start;

        if (length % 2 == 0)
                start = length / 2;
        else
                start = (length + 1) / 2;

        for (int i = start; i < length; i++)
        {
                putchar(str[i]);
        }
        putchar('\n');
}
