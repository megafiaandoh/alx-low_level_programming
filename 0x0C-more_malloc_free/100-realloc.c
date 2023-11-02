#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates momory block using malloc and free
 * @ptr: pointer to memory previousely allocated
 * @old_size: size in bytes of the allocated space
 * @new_size: new size in bytes
 * Return: pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *t;
	size_t n, max = new_size;
	char *olpt = ptr;

	if (ptr == NULL)
	{
		t = malloc(new_size);
		return (t);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	t = malloc(new_size);
	if (t == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (n = 0; n < max; n++)
		t[n] = olpt[n];
	free(ptr);
	return (t);
}
