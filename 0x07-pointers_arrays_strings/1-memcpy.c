#include "main.h"

/**
 * _memcpy - function name
 * @dest: parameter one
 * @src: parameter two
 * @n: parameter three
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
