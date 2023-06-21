#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints an integer with another fun
 * @array: array of integers to print
 * @size: size of the array
 * @action: function to use
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
