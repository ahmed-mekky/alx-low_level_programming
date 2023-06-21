#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - check numbers
 * @array: the array of integers to check
 * @size: size of the array
 * @cmp: the fun to use
 * Return: -1 if error, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, num;

	if (cmp)
	{
		if (array)
		{
			if (size <= 0)
				return (-1);
			for (i = 0; i < size; i++)
			{
				num = cmp(array[i]);
				if (num != 0)
					return (i);
			}
			if (num == 0)
				return (-1);
		}
	}
	return (0);
}
