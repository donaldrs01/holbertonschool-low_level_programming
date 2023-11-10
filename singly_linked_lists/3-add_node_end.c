#include "lists.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * add_node_end - function that adds a new node to the end of a list_t list
 * @head: double pointer to the head of the linked list
 * @str: pointer to the string that will be duplicated and stored in end node
 *
 * Return: the address of the new element, or NULL if not successful
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;

	new_node = (list_t *) malloc(sizeof(lilst_t)); /* allocate memory */

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	new_node->next = NULL; /*beacuse new node is last one is list, next = NULL */

	if (*head == NULL) /* if list is empty, make new_node the head */
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL) /* moves last down list until next node is NULL */
		last = last->next;

	last->next = new_node; /* once last points to last node, adds new_node */

	return (new_node);
}

