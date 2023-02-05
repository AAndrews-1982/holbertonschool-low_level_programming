/*
 * File: 8-print_array.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * print_array - Print elements of an array of integers.
 * @n: input int
 * @a: int pointer
 * Return: 0
 */

void print_array(int *a, int n)
{
	int length = 0;
	int i;

	while (a[length] != '\0')
	{
		length++;
	}

	if (n < length)
	{
		for (i = 0 ; i < n ; i++)
		{
			printf("%d", a[i]);
			if (i < (n - 1))
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
