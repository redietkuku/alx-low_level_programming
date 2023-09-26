#include "lists.h"

/**
 * listint_len - function that returns number of elements in listint_t
 * @h: head of the node
 *
 * Return: number of elements or integer
 */
size_t listint_len(const listint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		h = h->next;
		count_node++;
	}

	return (count_node);
}
