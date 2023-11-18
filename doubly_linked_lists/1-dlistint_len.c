#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * dlistint_len - function that returns # of elements in linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h; /* points to current node */
	size_t size = 0; /* counts number of nodes */

	while (current != NULL)
	{
		current = current->next; /* move to next node */
		size++; /* increment counter */
	}

	return (size);
}
