#include "main.h"

/**
 * _atoi - Convertit une chaîne de caractères en entier.
 * @s: Chaîne de caractères à convertir.
 *
 * Description: Le nombre dans la chaîne peut être précédé d'un nombre
 * infini de caractères
 * Si aucun nombre n'est présent dans la chaîne, retourne 0.
 * Pas besoin de vérifier les dépassements (overflow).
 * Il est interdit de coder des valeurs spéciales en dur.
 *
 * Return: Premier entier trouvé dans la chaîne.
 */
int _atoi(char *s)
{
	int i;
	int h, p;

	h = 0;
	p = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			p *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (h < 0)
				h = (h * 10) - (s[i] - '0');
			else
				h = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (p < 0)
		h *= -1;

	return (h);
}
