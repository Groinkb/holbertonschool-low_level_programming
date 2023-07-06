#include "main.h"

/**
 * sqrt_helper - Recursive helper function to calculate the square root
 * @n: The number to calculate the square root of
 * @i: The current number to check for square root
 *
 * Return: The natural square root of n, or -1 if it does not have onee
 */
int sqrt_helper(int n, int i)
{
    if (n < 0)
        return (-1);
    if (n == 0 || n == 1)
        return (n);

    if (i * i > n)
        return (-1);
    if (i * i == n)
        return (i);

    return (sqrt_helper(n, i + 1));
}