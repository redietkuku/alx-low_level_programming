#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all arguments in the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: NULL
 */
char *argstostr(int ac, char **av)
{
	int x, y, len = 0;
	char *string, *pointer;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
		len += strlen(av[x]) + 1;
	}

	string = malloc(len + 1);

	if (string == NULL)
	{
		return (NULL);
	}

	pointer = string;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			*pointer++ = av[x][y];
		}
		*pointer++ = '\n';
	}

	*pointer = '\0';

	return (string);
}
