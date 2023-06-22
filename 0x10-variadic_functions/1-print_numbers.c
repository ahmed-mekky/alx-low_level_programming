#include "variadic_functions.h"

/**
 * print_numbers - print unknown number of integers
 * @n: number of integers
 * @separator: string to put between numbers
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (!separator)
		separator = "";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			separator = "";
		printf("%d%s", va_arg(args, int), separator);
	}
	va_end(args);
	putchar('\n');
}
