#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds new nodes at beginning of list_t
 * @head: begining of nodes
 * @str: string to add to the nodes
 * Return: address of new line or NULL if it fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}


