#include "lists.h"

/**
 * print_dlistint_backward - Prints all elements of a dlistint_t list backwards
 * @h: Pointer to the head node of the linked list
 *
 * Return: Number of nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t count = 0; /* Initialize a counter variable */

	/* Traverse the linked list to the end */
	while (h && h->next)
	h = h->next;

	/* Traverse the linked list backwards and print each element */
	while (h)
	{
	printf("%d\n", h->n);
	h = h->prev;
	count++;
	}

	return (count); /* Return the number of nodes printed */
}
