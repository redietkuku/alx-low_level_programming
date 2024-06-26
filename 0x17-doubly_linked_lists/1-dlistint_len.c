#include "lists.h"

/**
 * dlistint_len - counts the num of nodes in the linked list
 * @h: the pointer to the start of a linked list
 *
 * Return: the num of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
		h = h->next;
	return (x);
}
