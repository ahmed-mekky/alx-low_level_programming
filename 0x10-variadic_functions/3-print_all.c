#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print function
 * @format: ...
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int j = 0, start = 0;

	va_list args;

	va_start(args, format);
	while (format && format[j])
	{
		switch (format[j])
			{case 'i':
				switch (start)
					case 1:
						printf(", ");
				printf("%i", va_arg(args, int));
				start = 1;
				break;
			case 'c':
				switch (start)
					case 1:
						printf(", ");
				printf("%c", va_arg(args, int));
				start = 1;
				break;
			case 'f':
				switch (start)
					case 1:
						printf(", ");
				printf("%f", va_arg(args, double));
				start = 1;
				break;
			case 's':
				switch (start)
					case 1:
						printf(", ");
				printf("%s", va_arg(args, char *) ? va_arg(args, char *) : "(nil)");
				start = 1;
				break; }
		va_end(args);
		j++;
	}
	putchar('\n');
}
