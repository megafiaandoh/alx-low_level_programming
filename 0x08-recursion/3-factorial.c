#include "main.h"

/**
 * factorial - returns the actorial of a given number
 * @n: parameter to be used
 * Return: a given factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
