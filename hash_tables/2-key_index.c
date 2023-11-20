#include "hash_tables.h"
#include <stdio.h>
/**
 * key_index - function that gives index of key
 * @key: key input
 * @size: size of the array of the hash table
 *
 * Return: index at which key/value pair is stored in array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* calculate the hash of the key */
	unsigned long int hash = hash_djb2(key);

	/* use modulus to ensure that index range is within array size */
	unsigned long int index = hash % size;
	/* returns remainder of div of hash by array size */

	return (index);
}
