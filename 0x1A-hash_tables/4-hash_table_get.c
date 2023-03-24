#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table to look into
 * @key: the key to look for
 *
 * Return: the value associated with the element, or NULL if key couldn't be
 * found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/* Declare variables */
	unsigned long int index;
	hash_node_t *node;

	/* Check if the inputs are valid */
	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	/* Get the index of the key in the hash table */
	index = key_index((const unsigned char *)key, ht->size);

	/* Initialize node pointer to the head of the linked list at the index */
	node = ht->array[index];

	/* Iterate through the linked list and compare keys */
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}

	/* Key not found */
	return (NULL);
}
