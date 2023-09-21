#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - finds length of a string
 * @str: string
 *
 * Return: integer
 */
unsigned int _strlen(char *str)
{
	unsigned int x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * add_node_end - adds a new node to the end of list_t list
 * @head: double pointer to list_t
 * @str: string to be added
 *
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp_node;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	tmp_node = *head;
	while (tmp_node->next)
		tmp_node = tmp_node->next;
	tmp_node->next = new_node;
	return (new_node);
}
