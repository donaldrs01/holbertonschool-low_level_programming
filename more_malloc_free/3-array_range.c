#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers with a min and max value
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: pointer to newly created array, NULL under certain conditions
 */
int *array_range(int min, int max)
{
	int size;
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
