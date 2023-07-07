#include "main.h"

/**
 * get_bit - ....
 *
 * @n: .......
 * @index: .....
 *
 * Return: bit or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0)
		return (0);
	n = (n >> (index));
	if (index > 32)
		return (-1);
	if (n & 1)
		return (1);
	else if (n == 0)
		return (-1);
	else
		return (0);
}
