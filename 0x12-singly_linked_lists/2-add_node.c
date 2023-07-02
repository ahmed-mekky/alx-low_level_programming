#include "lists.h"
/**
 * add_node - add new node
 *
 * @head: exit node
 * @str: string to add in node
 *
 * Return: address of added node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

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

	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
