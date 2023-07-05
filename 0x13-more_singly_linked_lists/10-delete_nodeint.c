#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: list of nodes
 * @index: ...
 * Return: data of the node.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *copy, *next;
	unsigned int i = 0;

	if (index != 0)
	{
		copy = *head;
		for (i = 0; i < index - 1; i++)
		{
			if (!copy)
				return (-1);
			copy = copy->next;
		}
	next = copy->next;
	copy->next = next->next;
	free(next);
	return (1);
	}
	else
	{
		copy = *head;
		*head = copy->next;
		free(copy);
		return (1);
	}
}
