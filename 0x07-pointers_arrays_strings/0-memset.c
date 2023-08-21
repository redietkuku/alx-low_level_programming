#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: has constant byte
 * @b: constant byte
 * @n: number of bytes of memory
 *
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}

	return (s);
}
