#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: int
 * Return: multipe
 */

void print_diagonal(int n)
{
	int a = 0;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			b = a;
			while (b > 0)
			{
				_putchar(' ');
				b--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else  
	{
		_putchar('\n');
	}
}
