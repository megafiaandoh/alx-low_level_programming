#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of linked list
 * @head: pointer to first element of list
 * @index: index of node to delete
 * Return: 1 (Success) -1 (fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *current = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (a < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		a++;
	}

	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}
