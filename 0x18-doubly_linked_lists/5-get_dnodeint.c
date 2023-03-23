#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head node of the linked list
 * @index: Index of the node, starting from 0
 *
 * Return: Pointer to the nth node of the linked list, or NULL if the node
 * does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;  /* Initialize a counter variable */

	/* Traverse the linked list until desired node is found or we reach the end */
	for (i = 0; head != NULL && i < index; i++)
	head = head->next;

	/* If end of the linked list before finding the node it does'nt exist */
	if (head == NULL)
	return (NULL);

	/* Return a pointer to the nth node */
	return (head);
}
