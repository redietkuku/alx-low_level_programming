#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the listint_t list
 * @head: head of the node
 * @index: index of the node
 *
 * Return: value of nth if successful and NULL if fail
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}
