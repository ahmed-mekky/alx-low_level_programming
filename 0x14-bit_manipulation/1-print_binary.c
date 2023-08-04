#include "main.h"

/**
 * print_binary - print binary number
 *
 * @n: int contanins the binary
 *
 * return: Nothing.
 */

void print_binary(unsigned long int n)
{
	int i, sign = 0;
	unsigned long int code;

	for (i = 63; i >= 0; i--)
	{
		code = n >> i;
		if (code & 1)
		{
			_putchar('1');
			sign++;
		}
		else if (sign)
		{
			_putchar('0');
		}
	}
	if (!sign)
		_putchar('0');
}
