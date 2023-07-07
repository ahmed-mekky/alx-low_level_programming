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
	int i, idk;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	for (i = 31; i >= 0; i--)
	{
		idk = (1 << i);
		if (n & idk)
		{
			putchar('1');
			i--;
			while (i >= 0)
			{
				idk = (1 << i);
				if (n & idk)
					putchar('1');
				else
					putchar('0');
				i--;
			}
		return;
		}
	}
}
