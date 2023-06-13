#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Return a pointer to a newly allocated space in memory.
 *
 * @str: String
 *
 * Return: String.
 */

char *_strdup(char *str)
{
	char *m;
	int n;

	if (str == NULL)
	{
		return (NULL);
	}
	n = strlen(str);
	m = malloc(n);
	for (int i = 0; i < n; i++)
	{
		*(m + i) = str[i];
	}
	return m;
}
