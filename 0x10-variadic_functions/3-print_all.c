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
	char *p;
	va_list args;

	va_start(args, format);
	while (format && format[j])
	{
		switch (format[j])
			{case 'i':
				switch (start)
					{case 1: printf(", "); }
				printf("%i", va_arg(args, int));
				start = 1;
				break;
			case 'c':
				switch (start)
					{case 1: printf(", "); }
				printf("%c", va_arg(args, int));
				start = 1;
				break;
			case 'f':
				switch (start)
					{case 1: printf(", "); }
				printf("%f", va_arg(args, double));
				start = 1;
				break;
			case 's':
				switch (start)
					{case 1: printf(", "); }
				start = 1;
				p = va_arg(args, char *);
				if (p)
					printf("%s", p);
				if (p == NULL)
					printf("(nil)");
				break; }
		va_end(args);
		j++;
	}
	putchar('\n');
}
