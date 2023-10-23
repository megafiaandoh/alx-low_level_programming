#include "main.h"

/**
 * print_chessboard - main function
 * @a: function parameter
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int p;
	int m;

	for (p = 0; p < 8; p++)
	{
	for (m = 0; m < 8; m++)
	_putchar(a[p][m]);
	_putchar('\n');
	}
}
