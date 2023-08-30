#include "main.h"

/**
 * check_square - function that checks the square root
 * @x: integer
 * @y: integer
 *
 * Return: integer
 */
int check_square(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}

	if (x * x > y)
	{
		return (-1);
	}

	return (check_square( x + 1, y));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (check_square(1, n));
}
