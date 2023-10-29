#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 *
 * @size: size of the array of the hash table
 *
 * Return: hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tbl = malloc(sizeof(hash_table_t));
	unsigned long int i;

	tbl = malloc(sizeof(hash_table_t));
	if (tbl == NULL)
		return (NULL);

	tbl->size = size;
	tbl->array = malloc(sizeof(hash_node_t *) * size);
	if (tbl->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tbl->array[i] = NULL;

	return (tbl);
}
