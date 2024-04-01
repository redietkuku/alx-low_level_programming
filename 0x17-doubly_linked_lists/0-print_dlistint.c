#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of the list
 * @h: the pointer to the start of the linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
