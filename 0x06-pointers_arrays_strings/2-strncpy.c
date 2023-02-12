/*
 * File: 2-strncpy.c
 * Auth: Alton Andrews
 */

#include "holberton.h"

/**
 * *_strncpy - work like a strncpy
 * @dest: destination value
 * @src: source value
 * @n: int var
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
