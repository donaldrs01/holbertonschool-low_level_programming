#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that will print all elements of a list_t list
 * @*h: pointer to an object of type list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}

	return (nodes);
}
