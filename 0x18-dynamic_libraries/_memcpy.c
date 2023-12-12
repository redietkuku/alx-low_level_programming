#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destinatin memory area
 * @src: intial memory area
 * @n: number of bytes
 *
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}

	return (dest);
}
