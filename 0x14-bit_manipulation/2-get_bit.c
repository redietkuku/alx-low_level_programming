#include "main.h"

/**
 * get_bit - returns the value of bit at a given index
 * @n: bit
 * @index: given index
 *
 * Return: value of bit at index if success and -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dividend, final_result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	dividend = 1 << index;
	final_result = n & dividend;
	if (final_result == dividend)
	{
		return (1);
	}

	return (0);
}
