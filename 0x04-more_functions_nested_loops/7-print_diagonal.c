/*
 * File: 7-print_diagonal.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * print_diagonal - prints slashes diagonally
 * @n: Print line of length diagonally
 * Description: print slashes
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < i ; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
