#include "lists.h"

/**
 * sum_listint - fucntion that returns sum of all data in listint_t list
 * @head: head of the node
 *
 * Return: sum of all elements of the list
 */
int sum_listint(listint_t *head)
{
	int sum_of_elements = 0;

	while (head != NULL)
	{
		sum_of_elements += head->n;
		head = head->next;
	}
	return (sum_of_elements);
}
