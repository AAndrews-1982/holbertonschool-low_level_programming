/*
 * File: 3-factorial.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>

/**
 * factorial - Return the factorial of a given number.
 * @n: The number to find the factorial of.
 * Return: The factorial of the given number, or -1 on error.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
