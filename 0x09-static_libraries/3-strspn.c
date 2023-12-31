#include "main.h"

/**
 * _strspn - entry pint
 * @s: input
 * @accept: input to be used
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int n = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				n++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
