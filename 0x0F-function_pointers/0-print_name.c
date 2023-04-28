#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - ...
 * @name: ...
 * @f: ...
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
