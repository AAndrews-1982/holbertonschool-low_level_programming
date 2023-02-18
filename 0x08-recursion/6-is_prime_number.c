/*
 * File: 6-is_prime_number.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if an integer is prime
 * @n: the integer to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
