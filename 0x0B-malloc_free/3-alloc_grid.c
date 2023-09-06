#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of strings
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr, x, y;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		arr[x] = (int *)malloc(sizeof(int) * width);
		if (arr[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(arr[x]);
			free(arr);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			arr[x][y] = 0;

	return (arr);
}
