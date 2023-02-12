/*
 * File: 0-strcat.c
 * Auth: Alton Andrews
 */

#include "holberton.h"

/**
 *  *strcat - concatenate two strings
 *  @dest: destination value
 *  @src: source value
 *  Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return (dest);
}
