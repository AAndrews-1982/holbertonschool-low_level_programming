#include "hash_tables.h"

/**
 * key_index - returns the index of a key in a hash table
 * @key: the key to look up
 * @size: the size of the hash table's array
 *
 * Return: the index of the key in the hash table's array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Get the hash value for the key */
	hash_value = hash_djb2(key);

	/* Compute the index in the hash table's array */
	return (hash_value % size);
}
