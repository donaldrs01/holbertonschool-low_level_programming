#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_listint - function that prints all elements of a listint_t list
 * @h: points to the head node of this linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n); /*prints value of each node */
		h = h->next; /* updates h to point to next node */
		count++; /* increments count */
	}

	return (count);
}
