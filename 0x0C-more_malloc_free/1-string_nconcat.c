/*
 * File: 1-string_nconcat.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate (up to n bytes)
 * @n: the number of bytes to concatenate from s2
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len, s2_len, result_len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	result_len = s1_len + n;

	result = malloc(result_len + 1);

	if (result == NULL)
		return (NULL);

	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n);
	result[result_len] = '\0';

	return (result);
}

