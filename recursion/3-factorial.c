#include "main.h"

/**
 * factorial - Calcule le factoriel d'un nombre donné
 * @n: Le nombre pour lequel calculer le factoriel
 *
 * Return: Le factoriel de n, ou -1 si n est négatif
 */
int factorial(int n)
{
	int result = 1;
	int i;

	if (n < 0)
		return (-1);

	for (i = 1; i <= n; i++)
		result *= i;

	return result;
}
