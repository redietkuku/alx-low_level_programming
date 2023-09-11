#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: integer that memory is getting allocated for.
 *
 * Return: pointer if succesful or 98 if malocc fails
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}

	return (x);
}
