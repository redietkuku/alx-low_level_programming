#include "main.h"

/**
 * calc_power - calculates base and power of a number
 * @b: base 
 * @p: power
 *
 * Return: an integer 
 */
unsigned long int calc_power(unsigned int b, unsigned int p)
{
	unsigned long int number;
	unsigned int x;

	number = 1;
	for (x = 1; x <= p; x++)
	{
		number *= b;
	}
	return (number);
}


/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted to binary
 *
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	unsigned long int dividend, final_result;
	char check;

	check = 0;
	dividend = calc_power(2, sizeof(unsigned long int) * 8 - 1);

	while (dividend ! = 0)
	{
		final_result = n & dividend;
		if (final_result == dividend)
		{
			check = 1;
			_putchar('1');
		}
		else if (check == 1 || dividend == 1)
		{
			_putchar('0');
		}

		dividend >>= 1;
	}
}
