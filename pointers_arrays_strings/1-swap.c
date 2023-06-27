#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: a int that become swap
 * @b: a int that become swap
 * Add the two values
 * Subtract the second value from the sum
 * Subtract the first value from the sum
*/
void swap_int(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
