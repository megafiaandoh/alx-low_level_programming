#include "variadic_functions.h"

/**
 * print_strings - function that prints strings follwed by new line
 * @separator: string to be printed within strings
 * @n: number of parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
