#include "main.h"

/**
 * binary_to_uint - convert binary to dec
 *
 *@b: string
 *
 * Return: result or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n = 0, result = 0;

	if (!b)
	{
		return (0);
	}
	while (b[n])
		n++;

	for (i = 0; i < n; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			result += power(2, n - i - 1) * (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
/**
 * power - power
 *
 *@x: ...
 *@y: ....
 *
 * Return: ......
 */
unsigned int power(unsigned int x, unsigned int y)
{
	unsigned int i, result = 1;

	if (y == 0 || x == 0)
		return (1);
	for (i = 0; i < y; i++)
	{
		result *= x;
	}
	return (result);
}
