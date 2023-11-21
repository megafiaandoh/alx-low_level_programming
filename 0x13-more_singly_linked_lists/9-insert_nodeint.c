#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at beginning of position
 * @head: pointer to first node
 * @idx: index where new node is added
 * @n: data to insert in new node
 * Return: pointer to new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (a = 0; tmp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
