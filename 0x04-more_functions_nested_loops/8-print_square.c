/*
 * File: 8-print_square.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * print_square - Prints square.
 * @Size: Size of square
 * Description: Print squares with hashtags.
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
