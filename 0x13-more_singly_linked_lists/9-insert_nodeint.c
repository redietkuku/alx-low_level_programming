#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at any given position
 * @head: head of the node
 * @idx: index of the node
 * @n: new value of the node
 *
 * Return: address of the new node if success and NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *temp_node, *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		temp_node = *head;
		for (x = 0; x < idx - 1 && temp_node != NULL; x++)
		{
			temp_node = temp_node->next;
		}
		if (temp_node == NULL)
		{
			return (NULL);
		}
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = temp_node->next;
	temp_node->next = new_node;
	return (new_node);
}
