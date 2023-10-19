#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory and terminates when malloc failes
 * @b: the number of bytes to allocate using malloc
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
