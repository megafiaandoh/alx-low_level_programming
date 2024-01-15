#include "main.h"

/**
 * _strncat - conctenates two strings
 * @dest: value entered
 * @src: value entered
 * @n: value entered
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int i;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[a] = src[i];
		a++;
		i++;
	}
	dest[a] = '\0';
	return (dest);
}
