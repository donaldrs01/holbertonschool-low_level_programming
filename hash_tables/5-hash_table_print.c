#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table that you want printed
 */
void hash_table_print(const hash_table_t *ht)
{
	int i;
	hash_node_t *current;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("[%d]%s: %s\n", i, current->key, current->value);
			current = current->next;
		}
	}
}
