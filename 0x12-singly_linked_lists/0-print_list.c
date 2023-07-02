#include "lists.h"

size_t print_list(const list_t *h)
{

	printf("[%d] %s\n", h->str ? h->len : 0,h->str ? h->str : "(nil)");
	return (2);

}
