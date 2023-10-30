#include "hash_tables.h"

/**
 * hash_table_set - add an element to a hash table
 *
 * @ht: the hash table
 * @key: the Key
 * @value: the node's value
 *
 * Return: 1 if success, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL) {
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL) {
		free(new_node->key);
		free(new_node);
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array == NULL)
		return (0);
	new_node->next = NULL;
	ht->array[index] = new_node;
	return (1);
}
