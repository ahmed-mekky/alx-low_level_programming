#include "main.h"
/**
 * _puts_recursion - print
 *
 * @s: pointer to string
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
