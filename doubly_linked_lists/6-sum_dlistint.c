#include "lists.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * sum_dlistint - function that returns the sum of all data in the linked list
 * @head: pointer to head of list
 *
 * Return: sum of all data (n), 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum =+ current->n; /* adds data (n) of current node to 'sum' variable */
		current = current->next; /* move current to next node */
	}

	return (sum);
}
