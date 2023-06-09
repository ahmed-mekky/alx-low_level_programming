#include "main.h"

/**
 * _print_rev_recursion - print string reversed with recursion
 *
 * @s: pointer to the string
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
