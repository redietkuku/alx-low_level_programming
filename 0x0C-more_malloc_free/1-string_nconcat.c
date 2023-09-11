#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first charater for concatenation
 * @s2: second characer for concatenation
 * @n: the unsigned integer to be allocated
 *
 * Return: a pointer if sucessful and NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k, l, m;
	char *string;

	if (s1 == NULL)
	{
		k = 0;
	}
	else
	{
		for (k = 0; s1[k]; ++k)
			;
	}
	if (s2 == NULL)
	{
		l = 0;
	}
	else
	{
		for (l = 0; s2[l]; ++l)
		{
			;
		}
	}
	if (l > n)
	{
		l = n;
	}
	string = malloc(sizeof(char) * (k + l + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < k; m++)
		string[m] = s1[m];
	for (m = 0; m < l; m++)
		string[m + k] = s2[m];

	string[k + l] = '\0';
	return (string);
}
