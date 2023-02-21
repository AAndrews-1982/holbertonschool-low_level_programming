/*
 * File: 2-strlen.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * _strlen - Return the length of a string.
 * @s: char value
 *
 * Return: String length
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
