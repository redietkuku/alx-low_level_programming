#include "main.h"

/**
 * leet - encodes a string into 1337
 * @string: string
 *
 * Return: address of string
 */
char *leet(char *string)
{
	int x, y;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (x = 0; *(string + x); x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (a[y] == string[x])
				string[x] = b[y];
		}
	}

	return (string);
}
