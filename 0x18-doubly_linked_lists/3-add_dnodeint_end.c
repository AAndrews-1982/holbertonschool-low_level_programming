#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Data to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* Declare a new node to add to the list */
	dlistint_t *new_node;
	/* Declare a current node to traverse the list */
	dlistint_t *current;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node with the data passed as argument */
	new_node->n = n;
	/* The new node will be the last one in the list, so it won't have a next */
	new_node->next = NULL;

	/* Check if the list is empty */
	if (*head == NULL)
	{
		/* The new node becomes the head of the list */
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/* Traverse the list until the last node */
		current = *head;
		while (current->next != NULL)
			current = current->next;
		/* Add the new node at the end of the list */
		current->next = new_node;
		new_node->prev = current;
	}

	/* Return the address of the new node */
	return (new_node);
}
