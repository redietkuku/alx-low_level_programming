#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - funcion that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer when succesful and NULL when fail
 */
char *str_concat(char *s1, char *s2)
{
	int x, y, len1, len2, len;
	char *res;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		x = 0;
		while (s1[x++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		x = 0;
		while (s2[x++] != '\0')
			len2++;
	}

	len = len1 + len2;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);

	for (x = 0; x < len1; x++)
		res[x] = s1[x];
	for (y = 0; y < len2; y++, x++)
		res[x] = s2[y];
	res[len] = '\0';

	return (res);
}
