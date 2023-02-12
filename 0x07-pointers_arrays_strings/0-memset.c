/*
 * File: 0-memset.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * *_memset - fill memory with constant byte.
 * @s: string
 * @b: char
 * @n: int
 * Return: character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
