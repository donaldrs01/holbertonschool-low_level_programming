#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * pop_listint - deletes the head node of list and returns its data
 * @head: double pointer to head of list
 *
 * Return: the data (n) of the deleted head node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp_node;

	if (*head == NULL)
		return (0);

	temp_node = *head; /* temp node holds current head */
	n = temp_node->n; /*gets data from head node */
	*head = (*head)->next; /* move head to next node */
	free(temp_node);

	return (n); /* returns data from deleted head node */
}
