#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * str_concat - concatenates two strings.
 *
 * @s1: First String.
 * @s2: Second String.
 *
 * Return: String or NULL.
 */

char *str_concat(char *s1, char *s2)
{
	int n1, n2, i;
	char *m;

	n1 = strlen(s1);
	n2 = strlen(s2);
	m = malloc(n1 + n2 + 1);
	if (m ==  NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n1; i++)
	{
		*(m + i) = s1[i];
	}
	for (i = 0; i < n2; i++)
	{
		*(m + i + n1) = s2[i];
	}
	return (m);
}
