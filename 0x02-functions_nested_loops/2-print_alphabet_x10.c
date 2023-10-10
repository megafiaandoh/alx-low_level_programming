#include "main.h"

/**
 * prints_alphabets_x10 - prints the alphabet in lowercase x10
 *
 * Return: nothing on success.
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
