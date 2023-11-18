#include "lists.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_dlistint - function that prints all elements of d-linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h; /* points to current node */
	size_t size = 0; /* counter for number of nodes */

	while (current != NULL)
	{
		printf("%d\n", current->n); /* prints value of current */
		current = current->next; /* move to next node */
		size++; /* increment counter */
	}

	return (size);
}
