/*
 * File 1-isdigit.c
 * Auth: Alton Andrews
 */

#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check is digit
 * @c: input char
 * DescriptionL Check if char os a digit
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
