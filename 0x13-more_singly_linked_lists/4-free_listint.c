#include "lists.h"

/**
 * free_listint - funct. that frees a listint_t list
 * @head: pointer to head of listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
