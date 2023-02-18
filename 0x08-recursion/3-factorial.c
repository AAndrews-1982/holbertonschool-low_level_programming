/*
 * File: 3-factorial.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>

/**
 * factorial - Return factorial of a number
 * @n: Number
 * Return: Fact of a number
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
