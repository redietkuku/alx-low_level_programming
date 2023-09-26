#include "lists.h"

/**
 * add_nodeint - a function that adds a node a the beggining of listint_t
 * @head: head of the node
 * @n: integer to be inserted
 *
 * Return: NULL if fail and address of inserted integer value if successful
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pointer;

	if (head == NULL)
	{
		return (NULL);
	}

	pointer = malloc(sizeof(listint_t));
	if (pointer == NULL)
	{
		return (NULL);
	}

	pointer->n = n;
	pointer->next = *head;
	*head = pointer;
	return (pointer);
}
