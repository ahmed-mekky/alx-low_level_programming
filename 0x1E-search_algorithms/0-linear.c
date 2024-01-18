#include "search_algos.h"

/**
 * linear_search - linear search function :)
 *
 * @array: pointer
 * @size: int
 * @value: int
 *
 * Return: the index of the value
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *array);
		if (*array == value)
			return (i);
		array++;
	}
	return (-1);
}
