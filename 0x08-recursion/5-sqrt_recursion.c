#include "main.h"

/**
 * check_sqr - checks for the square root number
 * @x: integer
 * @y: integer
 *
 * Return: integer
 */
int check_sqr(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}

	return (check_sqr(x + 1, y));
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
	return (check_sqr(1, n));
}
