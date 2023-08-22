#include "main.h"

/**
 * _strlen_recursion - prints length of a given string
 * @s: string
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * palin_checker - checks if sr is palindrome
 * @s: string
 * @x: left side index
 * @y: right side index
 *
 * Return: 1 if true and 0 if false
 */
int palin_checker(char *s, int x, int y)
{
	if (s[x] == s[y])
	{
		if (x > y / 2)
		{
			return (1);
		}
		else
		{
			return (palin_checker(s, x + 1, y - 1));
		}
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - checks for palindrome
 * @s: string
 *
 * Return: 1 if true and 0 if false
 */
int is_palindrome(char *s)
{
	return (palin_checker(s, 0, _strlen_recursion(s) - 1));
}

