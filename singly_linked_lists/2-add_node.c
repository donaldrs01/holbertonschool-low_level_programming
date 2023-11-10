#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - adds a new node to the beginning of a list_t list
 * @head: a pointer to a pointer to the head of the linked list
 * @str: a pointer to a constant character string being added in new node
 *
 * Return: the address of the new element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /* duplicates the string */
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str); /* calculates length of string */
	new_node->next = *head;	/* new node points to current head */

	*head = new_node; /* update head pointer to point to new node */

	return (new_node); /* return address of new node */
}
