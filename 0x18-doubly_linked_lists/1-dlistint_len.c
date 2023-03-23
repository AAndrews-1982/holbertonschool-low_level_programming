#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head of the doubly linked list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0; /* keep track of the number of nodes */

	/* traverse the list and count the nodes */
	while (h != NULL)
	{
	count++; /* increment the count */
	h = h->next; /* move to the next node */
	}

	return (count);
}
