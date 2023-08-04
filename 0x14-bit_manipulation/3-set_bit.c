#include "main.h"

/**
 * set_bit - set a bit to 1
 *
 * @n: ...
 * @index: ....
 *
 * return: 1 if no errors, -1 if error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 32)
		return (-1);
	mask = 1 << index;

	*n = *n | mask;
	return (1);
}
