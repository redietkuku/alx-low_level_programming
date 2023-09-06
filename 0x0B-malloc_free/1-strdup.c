#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new space in memory that contains
 * a copy of the string
 * @str: string
 *
 * Return: a pointer if success, NULL if memory insufficent
 */
char *_strdup(char *str)
{
	char *dup;
	int x, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = (char *)malloc((sizeof(char) * len) + 1);
	if (dup == NULL)
		return (NULL);

	for (x = 0; x < len; x++)
		dup[x] = str[x];
	dup[len] = '\0';

	return (dup);
}
