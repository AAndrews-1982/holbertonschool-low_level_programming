/*
 * File: 1-strdup.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - returns pointer to newly allocated memory
 *	contains copy of the given string parameter
 * @str: string provided. an array of chars
 * Return: NULL
 */

char *_strdup(char *str)
{
	unsigned int magicalIndex = 0;
	char *preallocated;

	if (str == NULL)
		return (str);

	while (str[magicalIndex] != '\0')
		magicalIndex++;
	preallocated = malloc((magicalIndex + 1) * sizeof(char));

	if (preallocated == NULL)
		return (NULL);

	magicalIndex = 0;
	while (str[magicalIndex])
	{
		preallocated[magicalIndex] = str[magicalIndex];

		magicalIndex++;
	}
	return (preallocated);
}
