/*
 * File: 5-string_toupper.c
 * Auth: Alton Andrews
 */

#include "holberton.h"

/**
 * *string_toupper - change lowercase letters to uppercase
 * @c: string
 * Return: 0
 */

char *string_toupper(char *c)
{
	int length = 0;
	int counter;

	while (c[length] != '\0')
	{
		length++;
	}

	for (counter = 0 ; counter < length ; counter++)
	{
		if ((c[counter]) > 96 && (c[counter]) < 123)
		{
			c[counter] = (c[counter]) - 32;
		}
	}

	return (c);
}
