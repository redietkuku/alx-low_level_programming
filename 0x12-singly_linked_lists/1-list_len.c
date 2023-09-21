#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in the list_t list
 * @h: the list
 *
 * Return: integer
 */
size_t list_len(const list_t *h)
{
	int count_element = 0;

	while (h)
	{
		count_element++;
		h = h->next;
	}

	return (count_element);
}
