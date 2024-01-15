#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be used
 * Return: length
 */

int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	return (longa);
}
