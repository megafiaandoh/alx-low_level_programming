#include "main.h"

/**
 * char *_strcpy - copies the string pointed by src
 * @dest: copied to
 * @src: copied from
 * Return: string value
 */

char *_strcpy(char *dest, char *src)

{
	int c = 0;
	int b = 0;

	while (*(src + c) != '\0')
	{
		c++;
	}
	for ( ; b < c ; b++)
	{
		dest[b] = src[b];
	}

	dest[c] = '\0';

	return (dest);
}
