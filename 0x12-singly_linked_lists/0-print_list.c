#include "lists.h"

/**
 * print_list - print a list of nodes
 *
 * @h: queue of nodes
 *
 * Return: number of nodes printed.
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		h = h->next;
		num++;
	}
	return (num);
}
