#include "main.h"

/**
 *swap_int - swaps the values of two integer
 * @a:value that will swap
 * @b:value that will swap
 */
void swap_int(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

