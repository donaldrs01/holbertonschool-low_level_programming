#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table that you want printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int is_first_pair = 1; /* flag to check if first pair for printing purposes */

	if (ht == NULL)
	{
		return;
	}

	printf("{"); /* print opening brace */

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (!is_first_pair)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current->key, current->value);
			is_first_pair = 0;
			current = current->next;
		}
	}

	printf("}");
}
