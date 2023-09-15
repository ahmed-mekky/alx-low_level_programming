#include "lists.h"

/**
 * add_dnodeint_end - add a node at the beginning a doubly linked list
 *
 * @head: queue of nodes
 * @n: value of the new head node
 *
 * Return: pointer to the added node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *old = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!*head)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	while (old->next)
		old = old->next;
	new->n = n;
	old->next = new;
	new->prev = old;
	new->next = NULL;

	return (new);
}
