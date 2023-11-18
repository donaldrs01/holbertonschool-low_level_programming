#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - function that adds a new node at head of list
 * @head: double pointer to head of list
 * @n: integer value of the new node
 *
 * Return: address of the new node, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL); /* return NULL if malloc fails */
	}

	new_node->n = n; /* sets value of new node */
	new_node->prev = NULL; /* NULL precedes head node */
	new_node->next = *head; /* current head comes after new node */

	if (*head != NULL)
	{
		(*head)->prev = new_node; /**
					    * prev pointer of old head points to new_node
					    */
	}
	*head = new_node; /* updates head pointer to point to new_node */

	return (new_node);
}

