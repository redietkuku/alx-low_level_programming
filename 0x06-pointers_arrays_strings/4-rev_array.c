#include "main.h"

/**
 * reverse_array - reverses array
 * @a: array to be reversed
 * @n: number of elements in array
 *
 * Retrun : Always 0.
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; (x < (n - 1) / 2); x++)
	{
		y = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = y;
	}
}
