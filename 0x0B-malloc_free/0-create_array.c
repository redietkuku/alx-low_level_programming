#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and intializes it
 * with a specific char
 * @size: size of the array
 * @c: intial integer value
 *
 * Return: a pointer if success and NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		arr[x] = c;
	}

	return (arr);
}
