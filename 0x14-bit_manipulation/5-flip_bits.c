#include "main.h"

/**
 * flip_bits - returns number of bits to flip
 * @n: bits
 * @m: destination number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, final_result;
	unsigned int a, b;

	a = 0;
	final_result = 1;
	diff = n ^ m;

	for (b = 0; b < (sizeof(unsigned long int) * 8); b++)
	{
		if (final_result == (diff & final_result))
		{
			a++;
		}

		final_result <<= 1;
	}

	return (a);
}
