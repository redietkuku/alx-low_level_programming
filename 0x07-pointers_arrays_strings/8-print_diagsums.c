#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix integer
 * @a: pointer
 * @size: width of the column
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int c, d, e, f = 0, g = 0;

	for (c = 0; c < size; c++)
	{
		e = (c * size) + c;
		f += *(a + e);
	}
	for (d = 0; d < size; d++)
	{
		e = (d * size) + (size - 1 - d);
		g += *(a + e);
	}

	printf("%i, %i\n", f, g);
}
