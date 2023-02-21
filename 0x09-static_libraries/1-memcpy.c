/*
 * File: 1-memcpy.c
 * Auth: Alton Andrews
 */

#include "main.h"

/**
 * *_memcpy - copy memory area
 * @dest: destination
 * @src: source
 * @n: length
 * Return: a pointer to copy location.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
