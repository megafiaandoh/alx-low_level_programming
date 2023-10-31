#include "main.h"
#include <stdlib.h>

/**
 * argstostr - func that concantenates all the arguments
 * @av: array of pointers to arguments
 * @ac: number of arguments passed
 * Return: if ac == 0, av == NULL or function fails Null
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, brg, crg, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (arg = 0; arg < ac; arg++)
	{
		for (brg = 0; av[arg][brg]; brg++)
		{
			size++;
		}
	}
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	crg = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (brg = 0; av[arg][brg]; brg++)
		{
			str[crg++] = av[arg][brg];
		}
		str[crg++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
