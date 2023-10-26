#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator -executes function given as argument on each element of array
 * @array: a pointer to the array of integers
 * @size: the size of the array
 * @action: function pointer that points to a function taking an int argument
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
	{
		return;
	}

	if (action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
