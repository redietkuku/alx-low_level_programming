#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - is a function that prints anything
 * @format: list of all types
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int x;
	int print_sep_type;
	char *str_pointer;
	va_list a_list;

	va_start(a_list, format);
	x = 0;
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				print_sep_type = 0;
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				print_sep_type = 0;
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				print_sep_type = 0;
				break;
			case 's':
				str_pointer = va_arg(a_list, char*);
				if (str_pointer == NULL)
					str_pointer = "(nil)";
				printf("%s", str_pointer);
				print_sep_type = 0;
				break;
			default:
				print_sep_type = 1;
				break;
		}
		if (format[x + 1] != '\0' && print_sep_type == 0)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(a_list);
}
