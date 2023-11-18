#ifndef LISTS_H
#define LISTS_H

/* data struct declaration */
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to previous node in list 
 * @next: points to next node in list
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* function declarations */
size_t print_dlistint(const dlistint_t *h);


#endif
