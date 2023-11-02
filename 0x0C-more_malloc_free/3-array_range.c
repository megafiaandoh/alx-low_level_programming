#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - funtion that creates an array of integers
 * @min: value to be contained
 * @max: value to be contained
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int a, c;
	int *b;

	if (min > max)
		return (NULL);
	c = max - min + 1;
	b = malloc(sizeof(int) * c);
	if (b == NULL)
		return (NULL);
	for (a = 0; a < c; a++)
	{
		b[a] = min;
		min++;
	}
	return (b);
}

