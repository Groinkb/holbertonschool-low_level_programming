#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 *
 * @s: String to evaluate
 *
 * Return: Length of a string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return len;
}

/**
 * add_node_end - Adds a new node at the end of a list_t list
 *
 * @head: Pointer to the list's head
 * @str: String to put in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (str == NULL)
		return NULL;

	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new_node;
	}

	return (new_node);
}
