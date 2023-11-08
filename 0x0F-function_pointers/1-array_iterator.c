#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execut funct. given as a parameter on each element of array
 * @array: an array
 * @size: number of elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array == NULL || action == NULL)
		return;
	for (b = 0; b < size; b++)
	{
		action(array[b]);
	}
}
