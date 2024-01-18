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
	size_t low = 0, high = size - 1;
	size_t i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		int mid = low + (high - low) / 2;

	printf("Searching in array:");
	for (i = low; i <= high; i++)
	{
		printf(" %d", array[i]);
		if (i + 1 < size && low != high)
			putchar(',');
	}
	putchar('\n');

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
