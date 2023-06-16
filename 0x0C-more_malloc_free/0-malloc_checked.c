#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - check the code
 * @b: unsigned int
 * Return: void.
 */

void *malloc_checked(unsigned int b)
{
    if (b == NULL)
    {
        exit(98);
    }
	return (malloc(b));
}
