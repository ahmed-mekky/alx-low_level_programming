#include "lists.h"

/**
 * free_dlistint - free list
 *
 * @head: node to free its list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head);
{
	while (head)
	{
		list_t *tofree = head;

		head = head->next;
		free(tofree->str);
		free(tofree);
	}
}
