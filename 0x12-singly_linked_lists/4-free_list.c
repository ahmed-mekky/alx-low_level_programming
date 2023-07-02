#include "lists.h"

void free_list(list_t *head)
{
	while(head)
	{
		list_t *tofree = head;
		head = head->next;
		free(tofree->str);
		free(tofree);
	}
}
