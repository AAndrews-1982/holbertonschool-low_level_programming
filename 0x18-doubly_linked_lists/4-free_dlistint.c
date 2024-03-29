#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 *
 * @head: Pointer to the head of the list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	/* Loop through the list and free each node */
	while (head != NULL)
	{
	tmp = head->next;
	free(head);
	head = tmp;
	}
}
