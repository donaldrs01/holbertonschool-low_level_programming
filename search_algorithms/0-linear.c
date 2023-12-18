#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - searches for value in an array using linear
 * @array: pointer to first element of array
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where value first located or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1); /* return -1 if array NULL */
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		/* compare value to element */

		if (array[i] == value)
			return (i); /* return index if value found */
	}

	return (-1); /* return -1 if value not in array */
}
