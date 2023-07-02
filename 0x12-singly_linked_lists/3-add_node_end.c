#include "lists.h"
/**
 * add_node_end - add new node at th end
 *
 * @head: exit node
 * @str: string to add in node
 *
 * Return: address of added node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *idk;

	if (!str || !newNode)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);

	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
	}
	else
	{
		idk = *head;
		while (idk->next)
		{
			idk = idk->next;
		}
		idk->next = newNode;
	}
	return (newNode);
}
