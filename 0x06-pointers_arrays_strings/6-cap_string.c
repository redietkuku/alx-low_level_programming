#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @string: string
 *
 * Return: address of string
 */
char *cap_string(char *string)
{
	int x = 0, y;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(string + x))
	{
		if (*(string + x) <= 'a' && *(string + x) <= 'z')
		{
			if (x == 0)
				*(string + x) -= 'a' - 'A';
			else
			{
				for (y = 0; y <= 12; y++)
				{
					if (a[y] == *(string + x - 1))
						*(string + x) -= 'a' - 'A';
				}
			}
		}

		x++;
	}

	return (string);
}
