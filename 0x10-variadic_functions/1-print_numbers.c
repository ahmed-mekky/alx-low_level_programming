#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers whith sep
 * @separator: string printed after numbers
 * @n: numbers of numbers to print
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int x;

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		x = va_arg(args, int);
		printf("%i%s", x, separator);
	}
	i++;
	x = va_arg(args, int);
	printf("%i\n", x);
}
