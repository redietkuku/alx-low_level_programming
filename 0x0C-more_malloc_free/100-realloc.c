#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer
 * @old_size: size before reallocation
 * @new_size: size after reallocation
 *
 * Return: pointer if successful and NULL if fail
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point;
	unsigned int x, n = new_size;
	char *oldpoint = ptr;

	if (ptr == NULL)
	{
		point = malloc(new_size);
		return (point);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	point = malloc(new_size);
	if (point == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (x = 0; x < n; x++)
		point[x] = oldpoint[x];
	free(ptr);
	return (point);
}
