#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns sum of all its parameters
 * @n: number of parameters
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	int total_sum;
	unsigned int x;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	for (x = 0; x < n; x++)
	{
		total_sum += va_arg(ap, int);
	}

	va_end(ap);

	return (total_sum);
}
