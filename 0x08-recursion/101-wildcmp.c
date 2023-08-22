#include "main.h"

/**
 * string_check - checks to see if two strings are the samw
 * @s1: string
 * @s2: string
 * @x: left side index
 * @y: unique index
 *
 * Return: 1 if true and 0 if false
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
	if (s2[x] == '*')
	{
		return (string_check(s1, s2, x + 1, y) || string_check(s1, s2, x, y + 1));
	}
	return (0);
}

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if true and 0 if false
 */
int wildcmp(char *s1, char *s2)
{
	return (string_check(s1, s2, 0, 0));
}
