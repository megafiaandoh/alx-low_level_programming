#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - funtion returns a point to two dimentional array
 * @height: height
 * @width:  width
 * Return: pointer to two dimen. array
 */

int **alloc_grid(int width, int height)
{
	int **fun;
	int hgt, wdt;

	fun = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || fun == NULL)
	{
		return (NULL);
	}

	for (hgt = 0; hgt < height; hgt++)
	{
		fun[hgt] = malloc(sizeof(int) * width);
		if (fun[hgt] == NULL)
		{
			for (; hgt >= 0; hgt--)
			{
				free(fun[hgt]);
			}

			free(fun);
			return (NULL);
		}
	}
	for (hgt = 0; hgt < height; hgt++)
	{
		for (wdt = 0; wdt < width; wdt++)
		{
			fun[hgt][wdt] = 0;
		}
	}
	return (fun);
}
