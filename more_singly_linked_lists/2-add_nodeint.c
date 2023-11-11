#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_nodeint - function that adds a new node to beginning of list
 * @head: double pointer to start of the list
 * @n: integer to be included in new node
 *
 * Return: address of new node, or NULL if failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* assigns data to new node */
	new_node->next = *head; /* assign the new_node to the head */
	*head = new_node; /* head points to new node */

	return (new_node);
}
