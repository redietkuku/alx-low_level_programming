#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string pointer
 *
 * Return: converted number if success or 0 if b is null
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y;

	y = 0;

	if (y == false)
	{
		return (0);
	}
	for ( x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
	}
	for ( x = 0; b[x] != '\0'; x++)
	{
		y <<= 1;
		if (b[x] == '1')
		{
			y += 1;
		}
	return (y);
}
