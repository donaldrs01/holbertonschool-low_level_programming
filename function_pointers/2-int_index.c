#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer
 * It will return the index of the first element for which cmp function
 * does not return 0
 * @array: integer array
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: -1 when no match or size <= 0, otherwise index value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
	{
		return;
	}

	if (cmp == NULL)
	{
		return;
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}

