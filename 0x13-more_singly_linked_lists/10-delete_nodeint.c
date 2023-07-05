#include "lists.h"

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
				return (NULL);
			copy = copy->next;
		}
	next = copy->next;
	copy->next = next->next;
	free(next);
	return (1);
	}
}
