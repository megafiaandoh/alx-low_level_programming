#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to be used
 * @s2: string to be used
 * @n: number of bytes
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		s1len++;
	for (a = 0; s2[a] != '\0'; a++)
		s2len++;

	output = malloc(sizeof(char) * (s1len + n) + 1);
	if (output == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (a = 0; s1[a] != '\0'; a++)
			output[a] = s1[a];
		for (a = 0; s2[a] != '\0'; a++)
			output[s1len + a] = s2[a];
		output[s1len + a] = '\0';
	}
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			output[a] = s1[a];
		for (a = 0; a < n; a++)
			output[s1len + a] = s2[a];
	}
	return (output);
}
