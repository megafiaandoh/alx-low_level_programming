#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - funct. returns number of elements in linked list_t
 * @h: the list linked
 * Return: number of elements of a list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
