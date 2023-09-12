#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array of integers.
 * @min: first element of the array
 * @max: last element of the array
 *
 * Return: pointer if successful and NULL if fail
 */
int *array_range(int min, int max)
{
	int *pointer;
	int x, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	pointer = malloc(sizeof(int) * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (x = 0; min <= max; x++)
	{
		pointer[x] = min++;
	}

	return (pointer);
}
