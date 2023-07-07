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
	n = (n >> (index));
	if (n & 1)
		return (1);
	else if (n == 0)
		return (-1);
	else
		return (0);
}
