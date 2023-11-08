#ifndef LISTS_H
#define LISTS_H

typedef struct list_s /* singly linked list node structure */
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
