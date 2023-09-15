#include "lists.h"

/**
 * dlistint_len - get len of a doubly linked list
 *
 * @h: queue of nodes
 *
 * Return: number of nodes printed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;
	return (new)
}
