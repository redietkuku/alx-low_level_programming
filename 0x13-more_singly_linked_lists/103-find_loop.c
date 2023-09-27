#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: pointer to the start of the list
 *
 * Return: address of the intital node if success and NULL if fail
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start, *finish;

	start = finish = head;
	while (start && finish && finish->next)
	{
		start = start->next;
		finish = finish->next->next;
		if (start == finish)
		{
			start = head;
			break;
		}
	}
	if (!start || !finish || !finish->next)
		return (NULL);
	while (start != finish)
	{
		start = start->next;
		finish = finish->next;
	}
	return (finish);
}
