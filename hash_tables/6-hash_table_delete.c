#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	hash_node_t *next;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++) /* iterate over each element in ht */
	{
		current = ht->array[i]; /* get first node at index i */

		while (current != NULL)
		{
			next = current->next; /* save next node before freeing current */
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}

	free(ht->array); /* free memory for array of nodes */
	free(ht); /* free memory for hash table */
}
