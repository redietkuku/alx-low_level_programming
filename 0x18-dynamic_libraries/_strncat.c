#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination of the string
 * @src: source of the string
 * @n: number of bytes
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		continue;
	}

	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x + y] = src[y];
	}

	dest[x + y] = '\0';
	return (dest);
}
