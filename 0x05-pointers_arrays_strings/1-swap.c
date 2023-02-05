/*
 * File: 1-swap.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * swap_int - swap the values of 2 integers.
 * @a: value 1
 * @b: value 2
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
