#include "main.h"

/**
 * clear_bit - ....
 *
 * @n: .......
 * @index: .....
 *
 * Return: ......
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int idk;

	if (index > 32)
		return (-1);

	idk = (1 << index);
	idk = ~idk;
	*n = *n & idk;
	return (1);
}
