#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t
 * @head: first node in the linked list
 * @index: index of node to return
 * Return: pointer to node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp = head;

	while (tmp && a < index)
	{
		tmp = tmp->next;
		a++;
	}

	return (tmp ? tmp : NULL);
}
