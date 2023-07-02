#include "lists.h"

/**
 * print_list - print a list of nodes
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
