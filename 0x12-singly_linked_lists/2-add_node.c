#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - returns length of a string
 * @s: character
 *
 * Return: integer
 */
int _strlen(const char *s)
{
	int x = 0;

	while (s[x] != '/0')
	{
		x++;
	}

	return (x);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of list_list
 * @str: string value to be inserted
 *
 * Return: integer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_new;

	add_new = malloc(sizeof(list_t));
	if (add_new == NULL)
	{
		return (NULL);
	}
	add_new->str = strdup(str);
	add_new->len = _strlen(str);
	add_new->next = *head;
	*head = add_new;

	return (add_new);
}
