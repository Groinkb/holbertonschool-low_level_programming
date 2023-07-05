#include "main.h"
 
/**
 * sqrt_helper - Recursive helper function to calculate the square root
 * @n: The number to calculate the square root of
 * @i: The current number to check for square root
 *
 * Return: The natural square root of n, or -1 if it does not have one
 */

int sqrt_helper(int n, int i)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return n;

    int low = i;
    int high = n;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid == n / mid) {
            return mid;
        } else if (mid < n / mid) {
            low = mid + 1;
            result = mid;
        } else {
            high = mid - 1;
        }
    }

    return result;
}
