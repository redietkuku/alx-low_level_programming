#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: input_value1
 * @src: input_value2
 * @n: integer value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;


	x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}


	return (dest);
}

