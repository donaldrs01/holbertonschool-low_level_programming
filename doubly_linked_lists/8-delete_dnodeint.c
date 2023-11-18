#include "lists.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * delete_dnodeint_at_index - function that deletes the node at given index
 * @head: double pointer to head of list
 * @index: the given index value to determine what node is deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (current == NULL) /* checks to see if list is empty */
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next; /* moves head to next node */
		if (*head != NULL)
		{
			(*head)->prev = NULL; /* establish as head by prev point to NULL */
		}
		free(current); /* deletes head of list if index = 0 */
		return (1);
	} /* if index not 0, traverse to node at given index */
	while (current != NULL && count < index)
	{
		count++;
		current = current->next;
	}
	current->prev->next = current->next; /* updates next ptr of previous node */
	if (current->next != NULL)
	{
		current->next->prev = current->prev; /* update previous ptr of next node */
	}
	free(current); /* frees the current node */

	return (1);
}

