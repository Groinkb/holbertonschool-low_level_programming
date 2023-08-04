#include "main.h"

/**
 * binary_to_uint_recursive - converts a binary number
 * to unsigned int (helper function)
 * @b: string containing the binary number
 * @idx: current index in the string
 * @result: the partial result
 *
 * Return: 1 if successful, 0 otherwises
 */
int binary_to_uint_recursive(const char *b, int idx, unsigned int *result)
{
	if (b[idx] == '\0')
		return (1);

	if (b[idx] == '0' || b[idx] == '1')
	{
		*result = (*result << 1) | (b[idx] - '0');
		return binary_to_uint_recursive(b, idx + 1, result);
	}

	return (0);
}

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	if (binary_to_uint_recursive(b, 0, &dec_val))
		return (dec_val);

	return (0);
}
