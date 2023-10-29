#include "hash_tables.h"

/**
 * key_index - find index of a key
 *
 * @key: key passed
 * @size: size of the hash tables
 *
 * Return: the key's index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
