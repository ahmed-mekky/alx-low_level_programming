#include "variadic_functions.h"

/**
 * print_strings - print unknown number of strings
 * @n: number of strings
 * @separator: string to put between strings
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	if (!separator)
		separator = "";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			separator = "";
		str = va_arg(args, char *);
		printf("%s%s", str ? str : "(nil)", separator);
	}
	va_end(args);
	putchar('\n');
}
