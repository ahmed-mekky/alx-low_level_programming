#include "lists.h"

/**
 * listint_len - calc num of nodes
 * @h: node in the list
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		if (h->next)
			h = h->next;
		else
			break;
	}
	return (counter);
}
