/*
 * File: 4-strpbrk.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * *_strpbrk - search string for a set of bytes.
 * @s: string
 * @accept: string
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int counter = 0;

	while (s[i])
	{
		counter = 0;
		while (accept[counter])
		{
			if (s[i] == accept[counter])
			{
				return (&s[i]);
			}
			counter++;
		}
		i++;
	}
	return ('\0');
}
