#include "lists.h"

/**
 * pop_listint - delete first node
 *@head: list of nodes
 * Return: data of the head.
 */

int pop_listint(listint_t **head)
{
	listint_t *idk;
	int i;

	if (!*head)
		return (0);
	idk = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = idk;
	return (i);
}
