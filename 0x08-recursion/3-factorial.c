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
	int fact = 1;

	if (n < 0)
		return (-1);
	{
		for (int i = 1; i <= n; i++)
			fact *= i;

		return (fact);
	}
}
