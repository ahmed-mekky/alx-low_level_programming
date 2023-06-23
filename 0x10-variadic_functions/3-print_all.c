#include "variadic_functions.h"

/**
 * print_all - print unknown number of anything
 * @format: ...
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, n = 0;
	char *separator, *str;

	separator = ", ";
	while (format[n])
		n++;
	va_start(args, format);
	while (i < n)
	{
		if (format[i] != 'c' && format[i] != 'i' && format[i] != 'f' && format[i] != 's')
		{
			i++;
			continue;
		}
		if (i == n - 1)
			separator = "";
		switch (format[i])
		{
			case 'i':
				printf("%i%s", va_arg(args, int), separator);
				break;
			case 'c':
				printf("%c%s", va_arg(args, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), separator);
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s%s", str ? str : "(nil)", separator);
				break;
		}
		i++;
	}
	va_end(args);
	putchar('\n');
}
