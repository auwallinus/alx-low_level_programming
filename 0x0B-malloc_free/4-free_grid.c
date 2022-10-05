#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid created in alloc_grid.
 * @grid: multidimensional array of integers.
 * @height: height of the grid.
 *
 * Return: SUCCESS
 */

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(grid[j]);
			}
			free(grid);
		}
	}
}
