#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the array to create
 *
 * Return: pointer to new hash table on success, NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	if (size < 1) /* return fail on negative size */
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{ /* allocoate memory for hash table */
		return (NULL);
	}

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{ /* allocate memory for array in hash table */
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL; /* initialize nodes to NULL to keep empty */
	}

	new_table->size = size;

	return (new_table);
}

