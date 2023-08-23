#include "main.h"

/**
 * _strcmp - compares values of strings
 * @s1: input_value1
 * @s2: input_value2
 *
 * Return: comparision of the strings
 */
int _strcmp(char *s1, char *s2)
{
	int x;


	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	x++;
	}
	return (0);
}

