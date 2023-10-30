#include "main.h"
#include <stdlib.h>

/**
 * str_concat - funtion that concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: concats of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *green;
	int b, m;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	b = m = 0;
	while (s1[b] != '\0')
		b++;

	while (s2[m] != '\0')
		m++;

	green = malloc(sizeof(char) * (b + m + 1));

	if (green == NULL)
		return (NULL);

	b = m = 0;
	while (s1[b] != '\0')
	{
		green[b] = s1[b];
		b++;
	}

	while (s2[m] != '\0')
	{
		green[b] = s2[m];
		b++, m++;
	}

	green[b] = '\0';

	return (green);
}
