#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory with malloc
 * @b: unsigned int type
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
    {
        exit(98);
    }
    return (ptr);
}

int main(void)
{
    unsigned int size = 10;
    int *array = malloc_checked(size * sizeof(int));

    /* Utilisez le tableau alloué ici... */

    free(array); /* N'oubliez pas de libérer la mémoire allouée */

    return (0);
}
