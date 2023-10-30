#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D array of integers.
 * @grid: The 2D array of integers to be freed.
 * @height: The height of grid.
 */
void free_grid(int **grid, int height)
{
	int idx;

	for (idx = 0; idx < height; idx++)
		free(grid[idx]);

	free(grid);
}
