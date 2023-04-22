#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print numbers whith sep
 * @separator: string printed after numbers
 * @n: numbers of numbers to print
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		if (separator == NULL || i == n - 1)
		{
			printf("%s", x ? x : "(nil)");
		}
		else
			printf("%s%s", x ? x : "(nil)", separator);
	}
	putchar('\n');
}
