#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: double pointer to head of list
 * @idx: index position of which new node is added
 * @n: data value of new node
 *
 * Return: address of new node, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n; /* assign new_node the inputted data value 'n' */

	if (idx == 0) /* if idx = 0, add new node at head of list and set pointers */
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
	}
	else
	{
		current = *h; /* if idx != 0, traverse to node at given index */
		for (i = 0; i < idx - 1; i++)
		{
			if (current == NULL)
			{
				free(new_node);
				return (NULL); /* return NULL if idx is out of bounds */
			}
			current = current->next;
		}
		/* insert new node after node at given index */
		new_node->next = current->next;
		if (current->next != NULL)
		{
			current->next->prev = new_node; /* sets prev pointer of 'next'to new_node */
		}
		new_node->prev = current;
		current->next = new_node;
	}

	return (new_node);
}
