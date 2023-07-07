#include "main.h"

/**
 * set_bit - ....
 *
 * @n: .......
 * @index: .....
 *
 * Return: ......
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int idk;

	if (index > 32)
		return (-1);

	idk = (1 << index);
	*n = *n | idk;
	return (1);
}
