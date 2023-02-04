/*
 * File 6-print_line.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * print_line - print a line
 * @n: Print line of length.
 * Description: Print using underscores.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
