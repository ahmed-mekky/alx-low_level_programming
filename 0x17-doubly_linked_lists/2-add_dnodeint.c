#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning a doubly linked list
 *
 * @head: queue of nodes
 * @n: value of the new head node
 *
 * Return: pointer to the added node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	if (!*head)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;

	return (new);
}
