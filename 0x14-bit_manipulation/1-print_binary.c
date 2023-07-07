#include "main.h"



void print_binary(unsigned long int n)
{
	int i, idk;

	for (i = 31; i >= 0; i--)
	{
		idk = (1 << i);
		if (n == 0)
		{
			_putchar('0');
			return;
		}
		if (n & idk)
		{
			_putchar('1');
			i--;
			while (i >= 0)
			{
				idk = (1 << i);
				if (n & idk)
					_putchar('1');
				else
					_putchar('0');
				i--;
			}
		return;
		}
	}
}
