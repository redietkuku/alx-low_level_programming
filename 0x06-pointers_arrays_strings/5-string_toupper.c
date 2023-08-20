#include "main.h"

/**
 * string_toupper - changes lowercase to stirng of uppercase
 * @string: string
 *
 * Return: character
 */
char *string_toupper(char *string)
{
	int x;

	x = 0;

	while (*(string + x))
	{
		if (*(string + x) >= 'a' && *(string + x) <= 'z')
			*(string + x) -= 'a' - 'A';
		x++;
	}
	return (string);
}
