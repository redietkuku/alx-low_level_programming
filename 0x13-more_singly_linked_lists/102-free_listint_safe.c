#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _ra - reallocates memory for an array of pointers
 * @listO: the old list to append
 * @sizeN: size of the new list (always one more than the old list)
 * @newN: new node to add to the list
 *
 * Return: pointer
 */
listint_t **_ra(listint_t **listO, size_t sizeN, listint_t *newN)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(sizeN * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(listO);
		exit(98);
	}
	for (i = 0; i < sizeN - 1; i++)
		newlist[i] = listO[i];
	newlist[i] = newN;
	free(listO);
	return (newlist);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: double pointer
 *
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **head)
{
	size_t x, num = 0;
	listint_t **listN = NULL;
	listint_t *nextN;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (x = 0; x < num; x++)
		{
			if (*head == listN[x])
			{
				*head = NULL;
				free(listN);
				return (num);
			}
		}
		num++;
		listN = _ra(listN, num, *head);
		nextN = (*head)->next;
		free(*head);
		*head = nextN;
	}
	free(listN);
	return (num);
}
