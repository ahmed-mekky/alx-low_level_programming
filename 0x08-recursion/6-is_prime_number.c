#include "main.h"
/**
 * is_prime_number - prime
 * @n: int
 * Return: 1 or 0.
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - check prime
 * @a: int
 * @b: int
 * Return: 1 if prime, otherwise 0.
 */

int _prime(int a, int b)
{
	if (a <= 1)
	{
		return (0);
	}
	else if (b > a / 2)
	{
		return (1);
	}
	else if (a % b != 0)
	{
		return (_prime(a, b + 1));
	}
	else
	{
		return (0);
	}
}
