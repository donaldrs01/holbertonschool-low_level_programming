#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the 'nth' node of a linked list
 * @head: pointer to start of the list
 * @index: index of the node, starting at 0
 *
 * Return: 'nth' node if it exists, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0; /*initialize count of nodes */

	while (head != NULL)
	{
		if (count == index) /**
				     * when node pointed to by head = index, return pointer to this node
				      */
			return (head);

		count++; /* increment count and move to next node */
		head = head->next;
	}

	return (NULL); /* if node doesn't exist, NULL */
}
