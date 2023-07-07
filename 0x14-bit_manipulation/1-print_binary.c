#include "main.h"

/**
 * print_binary - print binary of decimal
 *
 *@n: int
 *
 * Return: Nothing.
 *
 */

void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned long int idk;

	for (i = 63; i >= 0; i--)
	{
		idk = (n >> i);
		if (1 & idk)
		{
			putchar('1');
			counter++;
		}
		else if (counter)
			putchar('0');
	}
	if (!counter)
	{
		putchar('0');
	}
}
