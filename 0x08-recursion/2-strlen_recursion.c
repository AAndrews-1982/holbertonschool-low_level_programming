/*
 * File: 2-strlen_recursion.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Return the length of a string
 * @s: String
 * Return: The length of string
 */

int_strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
