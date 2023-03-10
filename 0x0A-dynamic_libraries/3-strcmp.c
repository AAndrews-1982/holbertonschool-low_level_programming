/*
 * File: 3-strcmp.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: -1, 0, or 1 if s1 is less than, equal to, or greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++, s2++;
	}
	return (*s1 - *s2);
}
