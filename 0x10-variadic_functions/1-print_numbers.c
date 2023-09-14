#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers- function that prints numbers
 * @separator: string to be printed in between numbers
 * @n: integer
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ap, int));
		if (x < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(ap);
}
