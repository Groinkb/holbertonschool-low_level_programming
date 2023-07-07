#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program
 *
 * @argc: number of elements in argv
 * @argv: an array to pointers
 *
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}