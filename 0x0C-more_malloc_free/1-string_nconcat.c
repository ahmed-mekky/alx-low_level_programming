#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of chars to alloc from s2
 * Return: void or NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int n1, i, n2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n1 = strlen(s1);
	n2 = strlen(s2);
	if (n >= n2)
		n = n2;
	str = malloc(n + n1 + 1);
	if (str == NULL)
	{
		free(str);
	}
	for (i = 0; i < n1; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		str[i + n1] = s2[i];
	}
	str[n + n1] = '\0';
	return (str);
}
