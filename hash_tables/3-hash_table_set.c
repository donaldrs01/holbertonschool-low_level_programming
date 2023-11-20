#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - function that adds an element to the hash table 'ht'
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key (cannot be empty string)
 * @value: value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *current;

	if (key[0] == '\0') /* checks to see if key is empty string */
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size); /* calculates index for the key */
	new_node = malloc(sizeof(hash_node_t)); /* create a new node */

	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key); /* assign values to new elements */
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL) /* check to see that index is free */
	{
		ht->array[index] = new_node; /* if free, add new node */
	}
	else
	{
		current = ht->array[index]; /* assign 'current' to index */

		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value); /* updates value if key already exists */
				current->value = strdup(value);
				free(new_node->key);
				free(new_node->value);
				free(new_node);
                                return (1);
                        }
                        if (current->next == NULL) /* checks if current node is last on list */
                        {
                                new_node->next = current->next;
                                current->next = new_node; /*adds new node to beg. of list */
                                return (1);
			}

			current = current->next; /* moves current ptr to next node */
		}
	}

	return (1);
}

