/*
 * File: 2-strchr.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: string
 * @c: character
 * Return: a pointer to first occurcance of character.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return ('\0');
}
