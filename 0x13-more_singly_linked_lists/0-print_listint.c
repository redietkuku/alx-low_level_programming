#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - function that prints all elements of listint_t
 * @h: the head of the linklist node
 *
 * Return: integer
 */
size_t print_listint(const listint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_node++;
	}
	return (count_node);
}
