/*
 * File: 0-print_listint.c
 * Auth: Alton Andrews
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listing - Prints all the elements of a listint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listing(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
