#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to 2D array
 * @width: int param
 * @height: int param
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid, firstArray, secondArray;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	/*if memory is insufficient*/
	if (!grid)
		return (NULL);

	secondArray = 0;
	while (secondArray < height)
	{
		*(grid + secondArray) = malloc(width * sizeof(int));
		if (!(*(grid + secondArray)))
		{
			while (secondArray--)
				free(*(grid + secondArray));
			free(grid);
			return (NULL);
		}
		firstArray = 0;
		while (firstArray < width)
		{
			*(*(grid + secondArray) + firstArray) = 0;
			firstArray++;
		}
		secondArray++;
	}
	return (grid);
}
