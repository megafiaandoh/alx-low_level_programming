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
	int o, p;

	if (width <= 0 || height <= 0)
		return (NULL);

	fun = malloc(sizeof(int *) * height);

	if (fun == NULL)
		return (NULL);

	for (o = 0; o < height; o++)
	{
		fun[o] = malloc(sizeof(int) * width);
		{
			for (; o >= 0; o--)
				free(fun[o]);

			free(fun);

			return (NULL);
		}
	}

	for (o = 0; o < height; o++)
	{
		for (p = 0; p < width; p++)
			fun[o][p] = 0;
	}

	return (fun);
}
