#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list
 *
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + list_len(h->next));
}
