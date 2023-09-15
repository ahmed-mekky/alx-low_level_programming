#include "lists.h"

/**
 * insert_dnodeint_at_index - add a node in a doubly linked list
 *
 * @h: queue of nodes
 * @n: value of the new head node
 * @idx: ....
 *
 * Return: pointer to the added node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *old = *h;
	unsigned int 1;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!*h)
	{
		if (idx != 0)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	while (old->next && i < idx)
	{
		old = old->next;
		i++
	}
	new->n = n;
	new->prev = old;
	(*h)->prev = new;
	new->next = *h;
	*h = new;

	return (new);
}
