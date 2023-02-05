/*
 * File: 9-strcpy.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * *_strcpy  - Copy strings to buffer.
 * @dest: Destination
 * @src: Source
 * Return: The pointer to destination.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
