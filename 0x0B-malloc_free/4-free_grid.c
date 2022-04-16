#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2D grid previously created
 * @grid: 2D grid
 * @height: int param
 * Return: 0 on success
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
