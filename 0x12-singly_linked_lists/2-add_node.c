/*
 * File: 2-add_node.c
 * Auth: Alton Andrews
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to pointer to the first node of the list
 * @str: string to be added in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[length])
		length++;

	new->len = length;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
