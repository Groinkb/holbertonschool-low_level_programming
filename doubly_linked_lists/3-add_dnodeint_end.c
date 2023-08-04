#include "lists.h"

/**
 * add_dnodeint_end - Appends a new node to the end of a dlistint_t list.
 * @head: Pointer to pointer to the head of the list.
 * @n: Value of the element.
 *
 * Return: The address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = kmalloc(sizeof(*new_node), GFP_KERNEL);
	if (!new_node)
		return NULL;

	new_node->n = n;
	new_node->next = NULL;

	if (*head)
	{
		dlistint_t *last_node = *head;
		while (last_node->next)
			last_node = last_node->next;

		last_node->next = new_node;
		new_node->prev = last_node;
	}
	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}

	return new_node;
}
