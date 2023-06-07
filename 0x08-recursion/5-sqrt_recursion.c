#include "main.h"

/**
 * _sqrt_recursion - sqrt with rec
 * @n: int
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - sqrt
 * @n: int
 * @i: int
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
