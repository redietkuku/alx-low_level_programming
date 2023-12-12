#include "main.h"

/**
 * _puts - prints a stirng followed by an new line
 * @str: string to be printed
 *
 * Return: string length
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
