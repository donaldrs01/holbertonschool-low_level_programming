#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * list_len - function that returns # of elements in linked list_t list
 * @h: pointer to object of type list_t
 *
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++; /* increment count for each element in list */
		current = current->next; /* move to the next node */
	}

	return (count);
}
