#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of dlistint_t linked list
 * @head: Pointer to the head node of the linked list
 *
 * Return: Sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;  /* Initialize the sum to zero */

	/* Traverse the linked list and add the data of each node to the sum */
	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}

	return (sum);  /* Return the sum enclosed in parentheses */
}
