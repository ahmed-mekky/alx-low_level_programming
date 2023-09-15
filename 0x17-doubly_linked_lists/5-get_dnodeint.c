#include "lists.h"

/**
 * get_dnodeint_at_index - find a node
 *
 * @head: ........
 * @index: ....
 *
 * Return: pointer to the node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	int i = 0;

	while (node->next && i < index)
	{
		node = node->next;
		i++;
	}

	if (!node)
		return (NULL;
	return (node);
}
