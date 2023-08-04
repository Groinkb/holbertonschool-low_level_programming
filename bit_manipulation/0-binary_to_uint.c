#include "main.h"

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
		return 0;

	// Trouver la longueur de la chaîne binaire
	int length = 0;
	while (b[length])
		length++;

	// Parcourir la chaîne binaire de droite à gauche
	for (int i = length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			// Si le bit est à 1, ajouter 2^position à la valeur décimale
			dec_val += (1 << (length - 1 - i));
		}
		else if (b[i] != '0')
		{
			// Si un caractère différent de '0' ou '1' est trouvé, retourner 0 (erreur)
			return 0;
		}
	}

	return dec_val;
}
