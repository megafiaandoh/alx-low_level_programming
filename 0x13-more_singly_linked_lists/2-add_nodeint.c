#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of listint_t
 * @head: beginning of node
 * @n: integer for new node to contain
 * Return: address to new element,NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
