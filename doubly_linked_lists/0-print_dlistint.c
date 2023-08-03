#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t listt
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t co = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		co++;
	}

	return (co);
}
