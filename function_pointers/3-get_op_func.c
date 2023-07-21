#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform the operation.
 *
 * @s: Operator passed as an argument to the program.
 *
 * Return: Pointer to the function that corresponds to the operator given as a
 * parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	int (*func)(int, int);

	if (s == NULL)
		return (NULL);

	switch (*s)
	{
	case '+':
		func = op_add;
		break;
	case '-':
		func = op_sub;
		break;
	case '*':
		func = op_mul;
		break;
	case '/':
		func = op_div;
		break;
	case '%':
		func = op_mod;
		break;
	default:
		printf("Error\n");
		exit(99);
	}

	return (func);
}
