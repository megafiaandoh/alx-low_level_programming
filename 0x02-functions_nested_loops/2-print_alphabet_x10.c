#include "main.h"

/**
 * prints 10x the alphabet - in lowercase followed by new line
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alpha;
	int b;

	b = 0;

	while (b < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar ('\n');
		b++;
	}
}
