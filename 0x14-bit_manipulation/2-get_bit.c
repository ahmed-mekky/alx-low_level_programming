
/**
 * get_bit - get a bit
 *
 * @n: ...
 * @index: ....
 *
 * Return: 1 if no errors, -1 if error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return (n >> index) & 1;
}
