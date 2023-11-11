#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_listint - function that frees a listint_t list
 * @head: points to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node; /* temporary node to hold current node */

	while (head != NULL)
	{
		temp_node = head; /* set temp node to current node */
		head = head->next; /* moves head to next node */
		free(temp_node); /* free temp_node */
	}
}
