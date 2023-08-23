#include "main.h"
/**
 * _memset - fills a block of memory with specific values
 * @s: intital address
 * @b: wanted value
 * @n: number of bytes
 *
 * Return: modified arrat
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}

