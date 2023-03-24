#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at a given index of a linked list
 * @head: Pointer to a pointer to the head node of the linked list
 * @index: Index of the node to delete, starting from 0
 *
 * Return: 1 if the deletion was successful, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i; /* Initialize a counter variable */
	dlistint_t *current; /* Pointer to the node to delete */

	/* If the linked list is empty, return -1 */
	if (*head == NULL)
	return (-1);

	/* If we want to delete the head node, update the head pointer */
	if (index == 0)
	{
	current = *head;
	*head = (*head)->next;
	if (*head)
	(*head)->prev = NULL;
	free(current);
	return (1);
	}

	/* Traverse the linked list to find the node to delete */
	current = *head;
	for (i = 0; current && i < index; i++)
	current = current->next;

	/* If the node to delete was not found, return -1 */
	if (current == NULL)
	return (-1);

	/* Update the pointers of the surrounding nodes and delete the node */
	current->prev->next = current->next;
	if (current->next)
	current->next->prev = current->prev;
	free(current);
	return (1);
}
