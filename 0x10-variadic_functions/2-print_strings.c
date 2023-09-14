#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>


/**
 * print_strings - fucntion that prints strings
 * @separator: the string to be printed
 * @n: number of strings passed
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str_pointer;
	unsigned int x;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
	{
		separator = "";
	}

	for (x = 0; x < n; x++)
	{
		str_pointer = va_arg(ap, char*);
		if (str_pointer == NULL)
		{
			str_pointer = "(nil)";
		}

		printf("%s", str_pointer);

		if (x < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(ap);
}
