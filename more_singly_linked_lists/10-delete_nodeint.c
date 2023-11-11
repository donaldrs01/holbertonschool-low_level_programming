#include "lists.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes node at given index in list
 * @head: double pointer to start of list
 * @index: index of node to be deleted
 *
 * Return: 1 if successful, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	unsigned int count = 0;

	if (head == NULL || *head == NULL) /* check if list is empty */
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (count < index - 1)
	{
		if (current == NULL || current->next == NULL)
			return (-1);
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next; /**
				* creates temp pointer once node before desired index is found
				*/
	current->next = temp->next; /**
				      *next skips node that should be deleted
				      */
	free(temp);

	return (1);
}

