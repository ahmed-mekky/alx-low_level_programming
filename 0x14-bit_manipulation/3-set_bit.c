#include "main.h"

/**
 * get_bit - ....
 *
 * @n: .......
 * @index: .....
 *
 * Return: bit or -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int idk;

	idk = (1 << index);
	*n = *n | idk;
	return (1);
}
