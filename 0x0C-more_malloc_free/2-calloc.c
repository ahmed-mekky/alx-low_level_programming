#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: the size of the memory to print
 *
 * Return: void or NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size + 1 * nmemb);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	memset(str, 0, size * nmemb);
	return (str);
}
