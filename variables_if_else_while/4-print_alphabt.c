#include <stdio.h>
/**
 * main - Prints the alphabet except q and e in lowercase.
 *
 * Return: Always (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
