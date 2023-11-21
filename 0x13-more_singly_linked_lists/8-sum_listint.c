#include "lists.h"

/**
 * sum_listint - returns sum of all data in linked list
 * @head: fist node in linkd list
 * Return: result of sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
