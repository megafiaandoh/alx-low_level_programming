#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: value to be used
 * @src: value to be used
 * @n: input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
