#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_nodeint_end - function that adds a new new at end of list
 * @head: double pointer to start of the list
 * @n: integer to be included in new node
 *
 * Return: address of added element, or NULL if failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL; /*next node NULL because tail of list */

	if (*head == NULL)
	{
		*head = new_node; /* if list empty, set new node as head */
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}

		last_node->next = new_node /*set next of last node to new node */
	}

	return (new_node);
}


