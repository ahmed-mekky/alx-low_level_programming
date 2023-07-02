#include "lists.h"

/**
 * list_len - print a number of nodes
 *
 * @h: queue of nodes
 *
 * Return: number of nodes printed.
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
