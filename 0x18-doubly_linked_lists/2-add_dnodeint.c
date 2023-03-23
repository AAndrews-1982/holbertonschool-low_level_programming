#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to the head of the list.
 * @n: integer to be added to the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Create a new node and assign the value of n to it */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);
	new_node->n = n;

	/* Assign head to the next of new_node and assign new_node to the head */
	new_node->next = *head;
	new_node->prev = NULL;

	/* If the list is not empty, set the previous of the head node to new_node */
	if (*head != NULL)
	(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}
