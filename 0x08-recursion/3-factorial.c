#include "main.h"
/**
 * factorial - fact
 * @n: int
 * Return: Fact.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
