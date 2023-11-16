#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - add new node at end of list_t
 * @head: begining of nodes
 * @str: string to store in the lise
 * Return: address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t a;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (a = 0; str[a]; a++)
		;

	new_node->len = a;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}

	return (*head);
}
