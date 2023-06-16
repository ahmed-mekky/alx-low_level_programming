#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range -  creates an array of integers
 * @min: first int
 * @max: last int
 *
 * Return: array of int or NULL.
 */

int *array_range(int min, int max)
{
	int *str;
	int i;

	if (min >= max)
	{
		return (NULL);
	}
	str = malloc((max - min + 1) * sizeof(int));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		str[i] = i;
	}
	return (str);
}
