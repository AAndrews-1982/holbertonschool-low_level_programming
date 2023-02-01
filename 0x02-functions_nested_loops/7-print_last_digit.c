/*
 *  File 7-print_last_digit.c
 *  Auth: Alton Andrews
 */

#include <stdio.h>
#include "main.h"

/**
 *  print_last_digit - print last digit dig of sum
 *  @n: a variable number
 *  Description: last digit
 *  Return: Always 0
 */

int print_last_digit(int n)
{
	int x;

	if (n >= 0)
	{
		x = n % 10;
	}
	else
	}
		x = -1 * (n % 10);
	}
	_putchar((x % 10) + '0');
	return (x % 10);
}
