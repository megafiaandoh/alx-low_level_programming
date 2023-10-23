#include "main.h"

/**
 * _strpbrk - function name
 * @s: parameter 1
 * @accept: parameter 2
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *m = accept;

		while (*m != '\0')
		{
			if (*s == *m)
			return (s);
			m++;
		}
		s++;
	}
	return (NULL);
}
