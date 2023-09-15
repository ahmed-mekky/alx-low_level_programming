#include "lists.h"

/**
 * free_dlistint - free list
 *
 * @head: node to free its list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *tofree = head;

		head = head->next;
		free(tofree);
	}
}
