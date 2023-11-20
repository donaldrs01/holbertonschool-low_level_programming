#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get - function that retrieves value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key that you are looking for
 *
 * Return: value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL)
	{
		return (NULL);
	}

	if (key[0] == '\0') /* checks if key is empty string */
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);
	/* calculate index for the key */

	if (ht->array[index] == NULL) /* check to see that index is free */
	{
		return (NULL);
	}
	else
	{
		current = ht->array[index]; /* assigns 'current' to index */

			while (current != NULL)
			{
				if (strcmp(current->key, key) == 0)
					/* checks for match based on key input */
				{
					return (current->value); /* returns value if key is found */
				}
				current = current->next; /*moves current ptr to next node */
			}
	}

	return (NULL);
	/* returns NULL if no match after checking all nodes in linked list */
}
