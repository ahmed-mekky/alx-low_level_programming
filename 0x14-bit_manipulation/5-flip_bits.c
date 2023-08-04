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
	unsigned long int sign;
	int i, result = 0;

	for (i = 63; i >= 0; i--)
	{
		sign = (n ^ m) >> i;
		if (1 & sign)
			result++;
	}
	return (result);
}
