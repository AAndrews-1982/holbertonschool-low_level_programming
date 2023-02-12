/*
 * File: 6-cap_string.c
 * Auth: Alton Andrews
 */

#include "holberton.h"

/**
 * cap_string - function that caps all words of a string.
 * @s: An input to capitalize letters in a string.
 * Return: pointer to s
 */


char *cap_string(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - ('a' - 'A');
			return (str);
		}
	}
}
