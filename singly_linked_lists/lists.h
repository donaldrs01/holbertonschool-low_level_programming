#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - sample data structure
 * @str: string pointer
 * @len: length of the string
 * @next: points to the next node.
 *
 * Description: singly linked list node structure
 */

typedef struct list_s /* singly linked list node structure */
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
