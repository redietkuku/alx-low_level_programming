#include "main.h"

/**
 * check_prime - checks if the number is prime
 * @x: integer
 * @y: integer
 *
 * Return: integer
 */
int check_prime(int x, int y)
{
	if (y < 2 || y % x == 0)
	{
		return (0);
	}
	else if ( x > y / 2)
	{
		return (1);
	}
	else
	{
		return (check_prime(x + 1, y));
	}

/**
 * is_prime_number - function that returns 1 if the number is prime
 * @n: integer
 *
 * Return: 1 if pass and 0 if fail
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}

	return (check_prime(2, n));
}
