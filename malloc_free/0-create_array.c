#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - will create an array of chars and initialize it with char c
 * @size: the size of the array
 * @c: the initialized char
 *
 * Return: NULL if size 0, otherwise a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *) malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}

	free(array);
	
	return (array);
}
