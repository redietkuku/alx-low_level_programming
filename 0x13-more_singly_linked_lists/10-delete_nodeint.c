#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at the end of listint_t
 * @head: head of the node
 * @index: index of the to be deleted
 *
 * Return: 1 if success and -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *temp_node, *next_node;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}
	temp_node = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (temp_node->next == NULL)
		{
			return (-1);
		}
		temp_node = temp_node->next;
	}
	next_node = temp_node->next;
	temp_node->next = next_node->next;
	free(next_node);
	return (1);
}
