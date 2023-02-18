/*
 * File: 5-sqrt-recursion.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number.
 * Return: The natural square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

		return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - Helper function to find the square root of a number.
 *
 * @n: The number to find the square root of.
 * @start: The start of the search range.
 * @end: The end of the search range.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */

int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (sqrt_helper(n, i + 1));
}

