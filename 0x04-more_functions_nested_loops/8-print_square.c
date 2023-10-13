#include "main.h"

/**
 * print_square - function prints a square
 * @size: size of square
 * Description: can only use _putchar to print. use # to print square
 */

void print_square(int size)
{
	int m, n;

	m = 0;

	if (size < 1)
		_putchar('\n');

	while (n < size)
	{
		m = 0;
		while (m < size)
		{
			_putchar('#');
			m++;
		}
		_putchar('\n');
		n++;
	}
}
