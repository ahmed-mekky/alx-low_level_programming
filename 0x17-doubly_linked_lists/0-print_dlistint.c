#include "lists.h"

/**
 * print_dlistint - print a list of nodes
 *
 * @h: queue of nodes
 *
 * Return: number of nodes printed.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	if (!h)
		return (1);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
