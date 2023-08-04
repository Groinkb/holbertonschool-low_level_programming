#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len_recursive - function that returns the number of elements in a
 * linked dlistint_t list using recursion.
 * @h: pointer to the head of the list
 *
 * Return: number of elements
 */

size_t dlistint_len_recursive(const dlistint_t *h)
{
	if (h == NULL)
		return 0;

	return 1 + dlistint_len_recursive(h->next);
}
