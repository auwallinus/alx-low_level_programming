#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid.
 * @grid: multidimensional array of integers.
 * @height: height of the grid.
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
