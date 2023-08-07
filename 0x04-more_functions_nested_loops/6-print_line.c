#include "main.h"
/**
 * print_line - prints number of lines given
 * @n: number of times '_' will be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
