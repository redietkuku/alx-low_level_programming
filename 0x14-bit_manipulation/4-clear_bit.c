#include "main.h"

/**
 * clear_bit - sets value of bit ot 0 at a given index
 * @n: bit
 * @index: index
 *
 * Return: 1 if success and  -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	x = ~(1 << index);
	*n = *n & x;

	return (1);
}
