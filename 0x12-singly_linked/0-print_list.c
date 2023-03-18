/*
 * File: 0-print_list.c
 * Auth: Alton Andrews
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print all the elements of a list_t list
 * @h: pointer to head of list_t list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);

		}
		h = h->next;
		i++;
	}
	return (i);
}
