#include "lists.h"

/**
 * add_nodeint_end - add node
 *@head: list of nodes
 *@n: ....
 * Return: address of the last node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t)), *idk;

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
		*head = newNode;
	else
	{
		idk = *head;
		while (idk->next)
			idk = idk->next;
		idk->next = newNode;
	}
	return (newNode);
}
