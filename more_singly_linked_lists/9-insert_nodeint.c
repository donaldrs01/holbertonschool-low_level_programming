#include "lists.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts new node at given position in list
 * @head: double pointer to start of list
 * @idx: index value of list where new node is added
 * @n: value for new node
 *
 * Return: address of new node on success, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int count = 0;
	listint_t *current;

	if (head == NULL && idx == 0) /* checks if list is empty */
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		*head = new_node; /* update head to point to new node */
		return (new_node); /* return address of new node */
	}

	if (*head == NULL || idx == 0) /* not possible to add new node */
		return (NULL);

	*current = *head; /* move through list to node before idx */
	while (count < idx - 1)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		count++;
	}

	if (current == NULL) /* check if current node is NULL */
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n; /* set value of new node */
	new_node->next = current->next; /* update next pointer of new node */
	current->next = new_node; /* update next pointer of current node */

	return (new_node); /* return address of new node */
}
