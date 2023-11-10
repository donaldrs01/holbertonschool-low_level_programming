#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * free_list - function that frees a list_t list
 * Creates temporary pointer, saves next node in head, then frees temp
 * @head: pointer to the head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp; /* temporary pointer to traverse list */

	while (head != NULL)
	{
		temp = head; /* set temporary node to current node */
		head = head->next; /* move head pointer to next node */
		free(temp->str); /*free the strdup string */
		free(temp); /* free the node */
	}
}
