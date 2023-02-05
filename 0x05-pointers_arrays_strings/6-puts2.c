/*
 * File: 6-puts2.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * puts2 - Print every other character of a string.
 * @str: String value
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
