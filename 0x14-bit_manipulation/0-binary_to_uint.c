#include "main.h"

/**
 * binary_to_uint - convert binary to dec
 *
 * @b: string contanins the binary
 *
 * return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, n = 0, i = 0;

	if (!b)
		return (0);

	while(b[n])
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
		n++;
	}

	while (b[i] != '\0')
	{
		result += power(2, n - i - 1) * (b[i] - '0');
		i++;
	}
	return (result);
}

/**
 * power - power an unsigned int
 *
 *@x: unsigned int to power
 *@y: times of power
 *
 * Return: unsigned int
 */
unsigned int power(unsigned int x, unsigned int y)
{
	unsigned int result = 1, i;
	if (x == 0 || y == 0)
		return (1);
	for (i = 0; i < y; i++)
		result *= x;
	return (result);
}
