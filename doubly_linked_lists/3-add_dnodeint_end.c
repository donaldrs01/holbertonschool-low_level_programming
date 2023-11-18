#include "lists.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at end of linked list
 * @head: double pointer to head of the list
 * @n: value to be stored in new node
 *
 * Return: address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL; /* next node NULL because end of list */

	if (*head == NULL) /* if list empty, new_node is head */
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else /* traverse to end of list */
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node; /* add newnode at end of list */
		new_node->prev = current; /* prev pointer to current */
	}

	return (new_node);
