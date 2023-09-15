#include "lists.h"

/**
 * dlistint_len - get len of a doubly linked list
 *
 * @head: queue of nodes
 * @n: value of the new head node
 *
 * Return: number of nodes printed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;

	return (new);
}
