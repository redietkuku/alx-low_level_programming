#include "main.h"

/**
 * _atoi - converts string to integer.
 *
 * @s: string
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int sign = 1, x = 0;
	unsigned int result = 0;

	while (!(s[x] <= '9' && s[x] >= '0') && s[x] != '\0')
	{
		if (s[x] == '-')
			sign *= -1;
		x++;
	}
	while (s[x] <= '9' && (s[x] >= '0' && s[x] != '\0'))
	{
		result = (result * 10) + (s[x] - '0');
		x++;
	}
	result *= sign;
	return (result);
}
