#include "main.h"

/**
 *_isupper - checks for a uppercase character
 *@c: letter being tested
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
