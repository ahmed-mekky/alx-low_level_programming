#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t)), *copy;
	unsigned int i;

	if (!newNode)
		return (NULL);
	if (idx != 0 && !*head)
		return (NULL);
	if (idx != 0)
	{
		copy = *head;
		for (i = 0; i < idx - 1; i++)
		{
			if (!*head)
				return (NULL);
			copy = copy->next;
		}

		newNode->n = n;
		newNode->next = copy->next;
		copy->next = newNode;
		return (newNode);
	}
	else
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
}
