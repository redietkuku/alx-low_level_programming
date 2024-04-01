#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the start of the linked list
 * @head: the double pointer to the start of the list
 * @n: the value to be added to the new node
 *
 * Return: pointer to the new node if pass or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	if (new_node->next != NULL)
		(new_node->next)->prev = new_node;
	return (new_node);
}
