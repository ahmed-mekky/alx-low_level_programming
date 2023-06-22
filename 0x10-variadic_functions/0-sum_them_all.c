#include "variadic_functions.h"

/**
 * sum_them_all - sum unknown number of integers
 * @n: number of integers
 * Return: the sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, num, result = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		result += num;
	}
	return (result);
}
