/*
 * File: 8-print_square.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * print_square - Print squares.
 * @Size: Size of square
 * Description: Print squares with hashtags.
 * Return: 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
