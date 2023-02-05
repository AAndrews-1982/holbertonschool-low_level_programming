/*
 * File: 4-print_rev.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * print_rev - print string in reverse followed by a new line.
 * @s: String value
 * Return: 0
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
