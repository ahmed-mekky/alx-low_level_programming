#include "hash_tables.h"
/**
 * hash_table_get - gets an element from a hash table
 *
 * @ht: the hash table
 * @key: Key
 *
 * Return: Value or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];


	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
