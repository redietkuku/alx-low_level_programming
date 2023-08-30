#include "main.h"

/**
 * string_check - checks if two given strings are the same
 * @s1: first string
 * @s2: second string
 * @x: integer
 * @y: integer
 *
 * Return: 1 if it its palindrome and 0 if not.
 */
int string_check(char *s1, char *s2, int x, int y)
{
	if (s1[x] == '\0' && s2[y] == '\0')
	{
		return (1);
	}

	if (s1[x] == s2[y])
	{
		return (string_check(s1, s2, x + 1, y + 1));
	}

	if (s1[x] == '\0' && s2[y] == '*')
	{
		return (string_check(s1, s2, x, y + 1));
	}

	if (s2[y] == '*')
	{
		return (string_check(s1, s2, x + 1, y) || string_check(s1, s2, x, y + 1));
	}

	return (0);
}
/**
 * wildcmp - function that checks if two strings are identical anf returns 1
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if idential 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	return (string_check(s1, s2, 0, 0));
}
