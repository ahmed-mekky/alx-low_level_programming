#include "main.h"
/**
 * binary_to_uint - convert binary to dec
 *
 *@b: string
 *
 * Return: result or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, n, result = 0;

	if (!b)
	{
		return (0);
	}
	n = strlen(b);
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1')
		{
			result += pow(2, n - i);
		}
		else if (b[i] == '0')
		{
			result += 0;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
