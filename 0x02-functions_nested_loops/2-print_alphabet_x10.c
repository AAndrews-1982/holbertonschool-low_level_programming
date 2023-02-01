/*
 * File 2-print_alphabet_x10.c
 * Auth: Alton Andrews
 */

#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - 10x alphabet
 * Description: Prints alphabet ten times then new line
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 1;

	while (i <= 10)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
