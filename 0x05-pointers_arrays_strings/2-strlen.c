#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: character
 * description: it will return the length of a string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int x = 0;

	for (; *s != '\0'; s++)

		x++;

	return (x);
}
