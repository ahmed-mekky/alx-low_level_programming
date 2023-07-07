#include "main.h"

/**
 * flip_bits - ....
 *
 * @n: .......
 * @m: .....
 *
 * Return: ......
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int idk, idk2;
	int i, idk3 = 0;

	idk = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		idk2 = idk >> i;
		if (1 & idk2)
			idk3++;
	}
	return (idk3);
}
