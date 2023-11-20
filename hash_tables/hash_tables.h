#ifndef HASH_TABLES_H
#define HASH_TABLES_H

/* data structure declaration */

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: the key (string)
 * The key is unique in the HashTable
 * @value: the value corresponding to a key
 * @next: a pointer to the next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: the size of the array
 * @array: an array of size @size
 * Each cell of this array is a pointer to the first node of linked list,
 * because we want our HashTable to use a chaining handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* function declarations */

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
#endif
