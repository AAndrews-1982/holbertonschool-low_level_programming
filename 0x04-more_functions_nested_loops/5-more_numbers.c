/*
 * File: 5-more_numbers.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * more_numbers - print 0 - 14 10 times
 * Description: Print 0 - 14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0 ; j <= 9 ; j++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
