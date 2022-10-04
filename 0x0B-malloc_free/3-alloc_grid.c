#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees a 2 dimensional grid.
 *@grid: multidimensional array of integers.
 *@height: height of the grid.
 *
 *Return: no return
 */

void free_grid(int **grid, int height)
{
	int **twoD;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		twoD[hgt_index] = malloc(sizeof(int) * width);
		
		if (twoD[hgt_index] == NULL)
		{
		for (; height >= 0; height--)
			free(grid[height]);
		
		free(grid);
		return (NULL);
	}
}

for (hgt_index = 0; hgt_index < height; hgt_index++)
{
	for (wid_index = 0; wid_index < width; wid_index++)
		twoD[hgt_index][wid_index] = 0;
}

return (twoD);
}
