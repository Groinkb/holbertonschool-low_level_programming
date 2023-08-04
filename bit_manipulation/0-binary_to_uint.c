#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return 0;

	unsigned int res = 0;


	int length = 0;
	while (b[length])
		length++;


	for (int i = 0; i < length; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{

			res = (res << 1) | (b[i] - '0');
		}
		else
		{

			return 0;
		}
	}

	return res;
}
