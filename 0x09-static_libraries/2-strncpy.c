#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination of string
 * @src: source of string
 * @n: number of bytes
 *
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && *(src + x); x++)
	{
		*(dest + x) = *(src + x);
	}

	for (x = x; x < n; x++)
	{
		*(dest + x) = '\0';
	}
	return (dest);
}
