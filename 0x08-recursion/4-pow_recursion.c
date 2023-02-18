/*
 * File: 4-pow_recursion.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>

/*
 * _pow_recursion - Computes the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The value of x raised to the power of y, or -1 if an error occurs.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
