#include "lists.h"

/**
 * print_listint - print list
 * @h: node in the list
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		if (h->next)
			h = h->next;
		else
			break;
	}
	return (counter);
}
