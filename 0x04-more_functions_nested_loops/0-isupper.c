/*
 *  File 0-isupper.c
 *  Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>

/**
 * _isupper - check is upper
 * @c: input char
 * Description: check if char is upper case
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
