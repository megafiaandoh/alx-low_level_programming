#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory of a array using malloc
 * @nmemb: array to be allocated
 * @size: elements of bytes
 * Return: pointer to the allocated memeory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *input;

	if (nmemb == 0 || size == 0)
		return (NULL);
	input = calloc(nmemb, size);
	if (input == NULL)
		return (NULL);
	else
		return (input);
}
