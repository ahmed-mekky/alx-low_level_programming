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
		head = head->next;
		sum += head->n;
	}
	return (sum);
}
