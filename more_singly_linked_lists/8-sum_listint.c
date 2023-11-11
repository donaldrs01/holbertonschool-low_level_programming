#include "lists.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_listint - function that returns sum of all data in list
 * @head: pointer to the first element in list
 *
 * Return: sum of all data (n). If list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n; /* n added to sum variable */
		head = head->next; /* move to next node and repeat */
	}

	return (sum);
}
