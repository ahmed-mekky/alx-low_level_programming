#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2D array
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	} 
	free(grid);
}
