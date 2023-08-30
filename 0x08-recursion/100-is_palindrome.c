#include "main.h"

/**
 * print_length - function that prints length of a string
 * @s: string
 *
 * Return: integer
 */
int print_length(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + print_length(s + 1));
	}
	return (0);
}

/**
 * palin_check - function that checks if str is palindrome
 * @s: string
 * @x: integer
 * @y: integer
 *
 * Return: 1 if true and 0 if false
 */
int palin_check(char *s, int x, int y)
{
	if (s[x] == s[y])
	{
		if (x > y / 2)
		{
			return (1);
		}
		else
		{
			return (palin_check(s, x + 1, y - 1));
		}
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - function that checks if a string is palindrome
 * @s: string
 *
 * Return: 1 if succes and 0 if fail
 */
int is_palindrome(char *s)
{
	return (palin_check(s, 0, print_length(s) - 1));
}
