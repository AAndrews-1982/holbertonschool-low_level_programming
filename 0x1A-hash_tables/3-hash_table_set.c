#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_node - create a new hash node
 *
 * @key: the key to set for the new node
 * @value: the value to set for the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
static hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node_to_list - add a node to the beginning of a linked list
 *
 * @head: a pointer to the head of the linked list
 * @node: the node to add to the list
 */
static void add_node_to_list(hash_node_t **head, hash_node_t *node)
{
	node->next = *head;
	*head = node;
}

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table to add the key/value to
 * @key: the key to add, which cannot be an empty string
 * @value: the value to associate with the key, which must be duplicated & can
 *         be an empty string
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current, *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (current->value != NULL);
		}
		current = current->next;
	}

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	add_node_to_list(&ht->array[index], new_node);

	return (1);
}
