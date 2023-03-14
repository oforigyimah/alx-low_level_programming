#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array of integers previously created by alloc_grid
 * @grid: pointer to the 2D array
 * @height: height of the 2D array
 */

void free_grid(int **grid, int height)
{
		int i;

		for (i = 0; i < height; i++)
			{
			free(grid[i]);
			}
		free(grid);
}
