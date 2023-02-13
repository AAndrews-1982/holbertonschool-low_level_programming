
/*
 * File: 6-cap_string.c
 * Auth: Alton Andrews
 */

#include "holberton.h"

/**
 * contains_sep - helper function to check if character is a separator
 * @c: Character to check
 * @sep: list of separators
 * @n: length of separators
 * Return: 1 if character is a separator, 0 otherwise
 */

int contains_sep(char c, int *sep, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (c == sep[i])
			return (1);

	return (0);
}
