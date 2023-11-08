#include "function_pointers.h"

/**
 * int_index - funtion that searches for an int
 * @cmp: pointer to the function of one in the main
 * @size: size of elements in array
 * @array: array
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}
