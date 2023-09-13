#include "function_pointers.h"

/**
 * int_index - function that seraches for an integer
 * @array: array pointer
 * @size: number of elements in the array
 * @cmp: function pointer for array
 *
 * Return: integer if succesful and -1 if fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]))
				{
					return (x);
				}

				x++;
			}
		}
	}
	return (-1);
}
