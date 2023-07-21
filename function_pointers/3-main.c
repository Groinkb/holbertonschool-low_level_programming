#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Performs simple operations.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	/* Check for correct number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Get numbers to operate on */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* Check for division or mod by 0 */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Get the appropriate function pointer */
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* Perform the operation */
	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
