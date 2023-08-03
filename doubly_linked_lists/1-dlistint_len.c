

/**
 * dlistint_len - function that returns the number of elements in a,
 * linked dlistint_t list. TEST
 * @h: pointer to the head of the listd
 *
 * Return: number of elements
 */

unsigned int dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return count;
}
