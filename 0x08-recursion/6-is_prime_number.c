#include "main.h"

/**
 * check_pr - checks if the given number is prime
 * @x: integer
 * @y: integer
 *
 * Return: integer
 */
int check_pr(int x, int y)
{
	if (y < 2 || y % x == 0)
	{
		return (0);
	}
	else if (x > y / 2)
	{
		return (1);
	}
	else
	{
		return (check_pr(x + 1, y));
	}
}

/**
 * is_prime_number - returns 1 if the number is prime
 * @n: integer
 *
 * Return: 1 if sucessful
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}

	return (check_pr(2, n));
}
