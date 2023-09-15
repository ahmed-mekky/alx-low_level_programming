#include "lists.h"

/**
 * sum_dlistint - sum a list
 *
 * @head: queue of nodes
 *
 * Return: the sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
