/*
 * File 5-strstr.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stddef.h>

/**
 * *_strstr - locate a substring
 * @s: substring
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
