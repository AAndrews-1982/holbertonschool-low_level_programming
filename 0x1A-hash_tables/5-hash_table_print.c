#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1; /* Flag to print commas correctly */

	/* Check if hash table exists */
	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		/* Initialize node pointer to head of linked list at index */
		node = ht->array[i];

		while (node != NULL)
		{
			/* Print comma before each element except the first */
			if (first == 0)
				printf(", ");

			/* Print key/value pair in required format */
			printf("'%s': '%s'", node->key, node->value);

			first = 0; /* Set flag to print commas correctly */
			node = node->next;
		}
	}
	printf("}\n"); /* Print closing brace and newline character */
}
