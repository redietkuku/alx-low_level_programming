#include "lists.h"

/**
 * reverse_listint - function that reverses listint_t
 * @head: head of the first node
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *precede, *next_node;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	
	if ((*head)->next == NULL)
	{
		return (*head);
	}
	precede = NULL;
	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = precede;
		precede = *head;
		*head = next_node;
	}
	*head = precede;
	return (*head);
}
