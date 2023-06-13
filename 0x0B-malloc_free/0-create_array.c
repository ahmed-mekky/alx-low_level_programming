#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of char
 * @c: the char
 * @size: the size of the memory to print
 *
 * Return: Array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m;

	m = malloc(size);
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(m + i) = c;
	}
	return (m);
}
