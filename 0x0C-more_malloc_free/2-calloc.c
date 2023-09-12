#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - fucntion that alloctes memory for an array
 * @nmemb: integer
 * @size: size of the array
 *
 * Return: pointer if successful and NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c
	unsidned int d;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	c = malloc(nmemb * size);
	if (c == NULL)
	{
		return (NULL);
	}

	for (d = 0; d < (nmemb * size); d++)
	{
		c[d] = 0;
	}

	return (c);
}

