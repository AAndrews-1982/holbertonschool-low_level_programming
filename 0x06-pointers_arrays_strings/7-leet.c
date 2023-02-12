/*
 * File: 7-leet.c
 * Auth: Alton Andrews
 */

#include "holberton.h"

/**
 * *leet - convert 10 133t
 * @s: char array
 * Return: char
 */

char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char leet[] = "40307110";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
			str[i] = leet[j / 2];
			break;
			}
		}
	}
	return (str);
}
