#include "lists.h"

/**
 * get_nodeint_at_index - get int of a node
 * @head: list of nodes
 * @index: ...
 * Return: data of the head.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
