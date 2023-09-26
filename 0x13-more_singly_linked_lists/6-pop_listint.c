#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes head of the node and returns data
 * @head: head of the node
 *
 * Return: value of the head of the node
 */
int pop_listint(listint_t **head)
{
	listint_t *start_count;
	int num;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	start_count = *head;
	*head = start_count->next;
	num = start_count->n;
	free(start_count);
	return (num);
}
