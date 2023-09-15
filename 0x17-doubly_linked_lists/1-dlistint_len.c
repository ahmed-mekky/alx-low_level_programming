#include "lists.h"

/**
 * dlistint_len - get len of a doubly linked list
 *
 * @h: queue of nodes
 *
 * Return: number of nodes printed.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
