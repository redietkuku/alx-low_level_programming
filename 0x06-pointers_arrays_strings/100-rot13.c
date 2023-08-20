#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @string: string
 *
 * Return: address of string
 */
char *rot13(char *string)
{
	int x, y;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; *(string + x); x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (a[y] == *(string + x))
			{
				*(string + x) = b[y];
				break;
			}
		}
	}
	return (string);
}
