#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocate a grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to string or NULL.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **str;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	str = malloc(sizeof(int *) * height);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		str[i] = malloc(sizeof(int) * width);
		if (str[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(str[i]);
			}
			free(str);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			str[i][j] = 0;
		}
	}
	return (str);
}
