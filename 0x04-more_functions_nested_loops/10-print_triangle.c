/*
 * File: 10-print_triangle.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * print_triangle - Prints a triangle.
 * @size: Size of triangle
 * Description: Triangle hashtags.
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			_putchar(' ');

		for (j = 0; j <= i; j++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
