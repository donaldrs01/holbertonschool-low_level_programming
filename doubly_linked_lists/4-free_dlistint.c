#include "lists.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head; /* curernt initialized to head of list */
	dlistint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next; /* address of next node saved in next_node */
		free(current);
		current = next_node;
	}
}
