#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid that was previously
 * created by another function
 * @grid: integer value
 * @height: integer value
 *
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
