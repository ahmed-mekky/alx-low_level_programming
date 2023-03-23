#include "main.h"

/**
 * print_numbers - prints from 0 to 9 characters
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
