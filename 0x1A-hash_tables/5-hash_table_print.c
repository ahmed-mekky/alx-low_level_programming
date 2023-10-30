#include "hash_tables.h"

/**
 * hash_table_print - prints key and value of a hash table in order
 *
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *node;
	char *del = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (idx < ht->size)
	{
		node = (ht->array[idx]);
		while (node)
		{
			printf("%s'%s': '%s'", del, node->key, node->value);
			del = ", ";
			node = node->next;
		}
		idx++;
	}
	printf('}\n');

}
