#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _re - reallocates memory
 * @list: old list
 * @size_new: size fo the new list
 * @new_node: new node to be added
 *
 * Return: pointer
 */
const listint_t **_re(const listint_t **list, size_t size_new, const listint_t *new_node)
{
	const listint_t **newlist;
	size_t x;

	newlist = malloc(size_new * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (x = 0; x < size_new - 1; x++)
		newlist[x] = list[x];
	newlist[x] = new_node;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prints listint_t
 * @head: head of the node
 *
 * Return: if success number of nodes and exit status 98 if fail
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (x = 0; x < num; x++)
		{
			if (head == list[x])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _re(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
