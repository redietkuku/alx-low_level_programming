#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - function that reverses listint_t
 * @head: head of the first node
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node, *next_node;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	if ((*head)->next == NULL)
	{
		return (*head);
	}
	previous_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next_node;
	}
	*head = previous_node;
	return (*head);
}
