/*
 * File: 3-add_node_end.c
 * Auth: Alton Andrews
 */


#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 *
 * @head: A pointer to a pointer to the first node of the list.
 * @str: The string to be added to the new node.
 *
 * Return: If memory allocation fails or head is NULL - NULL,
 * otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;
	size_t len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp_node = *head;

	while (temp_node->next != NULL)
		temp_node = temp_node->next;

	temp_node->next = new_node;

	return (new_node);
}
