#include "lists.h"

/**
 * sum_listint - sum data of nodes
 * @head: node in the list
 * Return: the sum.
 */

int sum_listint(listint_t *head)
{
	size_t counter = 0;

	while (head)
	{
		counter += head->n;
		if (head->next)
			head = head->next;
		else
			break;
	}
	return (counter);
}
