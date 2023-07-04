#include "lists.h"

/**
 * add_nodeint - add node
 *@head: list of nodes
 *@n: ....
 * Return: address of the last node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
