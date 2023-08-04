#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index
 *  of a dlistint_t linked list.
 * @head: Pointer to pointer to the head of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	while (current != NULL && current->prev != NULL)
		current = current->prev;

	while (current != NULL)
	{
		if (count == index)
		{
			if (current->prev)
				current->prev->next = current->next;
			else
				*head = current->next;

			if (current->next)
				current->next->prev = current->prev;

			free(current);
			return (1);
		}

		current = current->next;
		count++;
	}

	return (-1);
}
