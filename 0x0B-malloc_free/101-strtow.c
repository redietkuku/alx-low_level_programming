#include "main.h"
#include <stdlib.h>

/**
 * strtow - a function that splits a string into two
 * @str: string
 *
 * Return: NULL
 */
char **strtow(char *str)
{
	int x, y, z, b, counted_word = 0, len = 0;
	char **words;
	char *word;

	if (!str || !*str)
	{
		return (NULL);
	}
	for (x = 0; str[x]; ++x)
	{
		if ((str[x] != ' ') && (x == 0 || str[x - 1] == ' '))
		{
			counted_word++;
		}
	}
	if (counted_word == 0)
	{
		return (NULL);
	}
	words = (char **)malloc((counted_word + 1) * sizeof(char *));
	if (!words)
	{
		return (NULL);
	}
	for (x = 0, z = 0; x < counted_word; ++z)
	{
		while ((str[len] == ' '))
			len++;
		y = len;
		while (str[y] && str[y] != ' ')
			len++;
		word = (char *)malloc((y - len + 1) * sizeof(char));
		if (!word)
		{
			while (x)
			free(words[--x]);
			free(words);
			return (NULL);
		}
		for (b = 0; len < y; ++len)
			word[b++] = str[len];
		word[b] = '\0';
		words[x++] = word;
	}
	words[counted_word] = NULL;
	return (words);
}
