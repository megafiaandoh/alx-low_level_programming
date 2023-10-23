#include "main.h"

/**
 * _strspn - function name
 * @s: parameter to be used
 * @accept: parameter 2
 * Return: characters counted
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; s[i] != accept[n]; n++)
		{
			if (accept[n] == '\0')
				return (i);
		}
	}
		return (0);
}
