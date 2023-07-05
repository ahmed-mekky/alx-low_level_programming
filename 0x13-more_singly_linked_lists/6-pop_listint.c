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

	idk = (*head)->next;
	i = (*head)->n;
	*head = NULL;
	*head = idk;
	return (i);
}
