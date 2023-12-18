#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - search for value in sorted array using binary
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left;
	size_t right;
	size_t mid;
	size_t i;

	if (array == NULL)
	{
		return (-1); /* return -1 if array is NULL */
	}

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");
		mid = (left + right) / 2;
		if (array[mid] == value)
		{
			return (mid); /* return idex if value found */
		}
		else if (array[mid] < value)
		{
			left = mid + 1; /* search right half */
		}
		else
		{
			right = mid - 1; /* search left half */
		}
	}
	return (-1);
}
