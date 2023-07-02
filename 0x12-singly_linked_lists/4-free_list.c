#include "lists.h"

/**
 * free_list - add new node at th end
 *
 * @head: node to free its list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	while (head)
	{
		list_t *tofree = head;

		head = head->next;
		free(tofree->str);
		free(tofree);
	}
}
