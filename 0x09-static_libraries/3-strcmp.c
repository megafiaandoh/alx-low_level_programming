#include "main.h"

/**
 * _strcmp -compares string values
 * @s1: entered value
 * @s2: input value
 *
 * Return: s1[i] - s[i]
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
