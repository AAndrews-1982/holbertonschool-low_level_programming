/*
 * File: 3-puts.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: String Value
 * Return: Nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
