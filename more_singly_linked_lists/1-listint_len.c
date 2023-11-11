#include "lists.h"
#include <stlib.h>
#include <string.h>
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: points to the head node of the linked list
 *
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
