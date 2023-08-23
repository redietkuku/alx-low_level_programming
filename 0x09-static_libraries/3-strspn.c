#include "main.h"

/**
 * _strspn - Entry point
 * @s: input1
 * @accept: input2
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y;


	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				x++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}

