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
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!*h || idx == 0)
	{
		if (idx != 0)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		if (idx == 0)
			new->next = *h;
		else
			new->next = NULL;
		*h = new;
		return (new);
	}
	while (old->next && i < idx)
	{
		old = old->next;
		i++;
	}
	if (!old->next && idx > i)
		return (NULL);
	new->n = n;
	new->next = old->next;
	old->next = new;
	new->prev = old;
	if (new->next)
		new->next->prev = new;

	return (new);
}
