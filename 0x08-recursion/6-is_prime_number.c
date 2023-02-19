/*
 * File: 6-is_prime_number.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>

/**
 * check_prime- checks if n is a prime number
 * @n: value to check if is a prime number
 * @i: value that will be used to check
 *
 * Return: 1 if prime number, 0 if not
*/

int check_prime(int n, int i)
{
	if (n <= 2)
	{
		if (n == 2)
			return (1);
		else
			return (0);
	}
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);

	return (check_prime(n, i + 1));
}

/**
 * is_prime_number- returns 1 if n is a prime number,
 * else 0
 * @n: number to check if prime
 *
 * Return: 1 if n is prime number, otherwise 0
*/
int is_prime_number(int n)
{
	int i;

	i = 2;
	return (check_prime(n, i));
}
