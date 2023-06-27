#include "main.h"
/**
 * main - check the code
 * a function that returns the length of a string.
 * Return: Always 0.
 *  _strlen - a function that returns the length of a string
 * @s: a function who's been count
 */
int _strlen(char *s)
{
   char *ptr = s;

    while (*ptr)
    {
        ptr++;
    }

    return (int)(ptr - s);
}
