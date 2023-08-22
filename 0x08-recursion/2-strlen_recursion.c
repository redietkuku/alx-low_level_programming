#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}

	return (x);
}
