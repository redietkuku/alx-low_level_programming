#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: head of the node
 *
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
}
