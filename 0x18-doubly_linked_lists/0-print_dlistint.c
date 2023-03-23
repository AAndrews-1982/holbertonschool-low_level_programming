#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: A pointer to the head of the dlistint_t list
 *
 * Return: The number of nodes in the dlistint_t list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h; /* Create a pointer to the head of the list */
	size_t count = 0; /* Initialize a counter to keep track of the # of nodes */

	while (current != NULL) /* Traverse the list until we reach the end */
	{
	printf("%d\n", current->n); /* Print the value of the current node */
	count++; /* Increment the counter */
	current = current->next; /* Move the pointer to the next node */
	}

	return (count); /* Return the number of nodes in the list */
}
