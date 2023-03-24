#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	/* Check if hash table exists */
	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		/* Initialize node pointer to head of linked list at index */
		node = ht->array[i];

		while (node != NULL)
		{
			/* Store current node address in temp pointer */
			temp = node;
			/* Move to next node */
			node = node->next;
			/* Free memory for key, value, and node */
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	/* Free memory for array and hash table */
	free(ht->array);
	free(ht);
}
