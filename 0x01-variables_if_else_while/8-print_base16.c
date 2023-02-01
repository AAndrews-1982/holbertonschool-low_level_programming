/*
 * File 8-print_base16.c
 * Auth: Alton Andrews
 */

#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	for (ch  = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
