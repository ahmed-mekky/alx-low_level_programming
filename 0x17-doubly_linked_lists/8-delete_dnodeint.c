#include "lists.h"

/**
 * delete_dnodeint_at_index - add a node in a doubly linked list
 *
 * @head: queue of nodes
 * @index: ....
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *old = *head;
	unsigned int i = 0;

	if (!old)
		return (-1);
	if (index == 0)
	{
		old->next->prev == NULL;
		return (1);
	}
	while (old->next && i < idx)
	{
		old = old->next;
		i++;
	}
	if (!old->next)
	{
		old->prev->next == NULL;
		return (1);
	}
	old->prev->next == old->next;
	old->next->prev == old->prev;
	return (1);

}
