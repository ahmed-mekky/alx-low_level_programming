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
	int i, idk;

	if (min > max)
	{
		return (NULL);
	}
	idk = max - min + 1;
	str = malloc(idk * sizeof(int));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < idk; i++)
		str[i] = min++;
	return (str);
}
