#include "main.h"

/**
 * clear_bit - set a bit to 0
 *
 * @n: ...
 * @index: ....
 *
 * Return: 1 if no errors, -1 if error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 32)
		return (-1);
	mask = 1 << index;

	*n = *n & ~mask;
	return (1);
}
