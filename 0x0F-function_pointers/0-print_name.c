#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: function to print with
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	f(name);
}
