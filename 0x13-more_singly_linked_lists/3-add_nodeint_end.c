#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t list
 * @head: pointer to address of head of listint_t
 * @n: integer for new element to contain
 * Return: NULL if the function fails,otherwise address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
