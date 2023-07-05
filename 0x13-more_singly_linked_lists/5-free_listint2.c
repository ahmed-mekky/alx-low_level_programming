#include "lists.h"

/**
 * free_listint2 - add node
 *@head: list of nodes
 * Return: address of the last node.
 */

void free_listint2(listint_t **head)
{
	listint_t *idk;

	while (*head)
	{
		idk = *head;
		*head = (*head)->next;
		free(idk);
	}
	head = NULL;
}
