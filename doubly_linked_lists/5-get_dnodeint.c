#include "lists.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: the index of the specified node, starting at 0
 *
 * Return: the nth node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index) /* if count = index, return current (nth node) */
		{
			return (current);
		}

		count++; /* if no match, increment count and move current to next node */
		current = current->next;
	}

	return (NULL); /* return NULL if no match is found */
}
