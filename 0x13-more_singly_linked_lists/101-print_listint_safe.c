#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _r - reallocates memory
 * @list: old list
 * @Size: size fo the new list
 * @New: new node to be added
 *
 * Return: pointer
 */
const listint_t **_r(const listint_t **list, size_t Size, const listint_t *New)
{
	const listint_t **newlist;
	size_t x;

	newlist = malloc(Size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (x = 0; x < Size - 1; x++)
		newlist[x] = list[x];
	newlist[x] = New;
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
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
