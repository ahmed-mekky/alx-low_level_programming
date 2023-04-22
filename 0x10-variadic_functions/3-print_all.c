#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print function
 * @separator: string printed after numbers
 * @n: numbers of numbers to print
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int k = 0;

	va_list args;

	va_start(args, format);
	while (format && format[k])
	{
		char sep = ',';
		if (format[k] == 'i')
		{
			printf("%i%c", va_arg(args, int), sep);
		}
		else if (format[k] == 'c')
		{
			printf("%c%c", va_arg(args, int), sep);
		}
		else if (format[k] == 'f')
		{
			printf("%f%c", va_arg(args, double), sep);
		}
		else if (format[k] == 's')
		{
			printf("%s%c", va_arg(args, char *), sep);
		}
		va_end(args);
		k++;
	}
	putchar('\n');
}
