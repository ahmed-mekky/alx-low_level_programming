#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - calculate the sum of two numbers
 * @n: counter to numbers to sum
 *
 * Return: 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	va_end(args);
	return (sum);
}
