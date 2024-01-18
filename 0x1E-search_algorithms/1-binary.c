#include "search_algos.h"
#include <stdlib.h>
/**
 * binary_search - binary search function :)
 *
 * @array: pointer
 * @size: int
 * @value: int
 *
 * Return: the index of the value
*/
int binary_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i + 1 < size)
			putchar(',');
	}
	putchar('\n');

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search(array, mid, value));
	else
		return (binary_search(array + mid + 1, size - mid - 1, value));
}
