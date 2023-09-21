#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - is a function that prints all elements of a list_list list.
 * @h: list to be printed
 *
 * Return: integer
 */
size_t print_list(const list_t *h)
{
	int count_element = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		count_element++;
		h = h->next;
	}

	return (count_element);
}
