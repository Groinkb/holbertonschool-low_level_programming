#include <stdio.h>
/**
 * main - Entry point
 * 
 * Description: 'the program's description'
 * @parameter: describe the parameter
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
char c, b;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (b = 'A'; b <= 'Z'; b++)
putchar(b);
putchar('\n');
return (0);
}
