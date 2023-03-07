/*
 * File: 0-sum_them_all.c
 * Auth: Alton Andrews
 */

#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters to sum
 *
 * Return: the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);  /* end use of args */

	return (sum);
}
