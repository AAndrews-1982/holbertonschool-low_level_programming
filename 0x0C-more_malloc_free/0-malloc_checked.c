/*
 * File: 0-malloc_checked.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the memory to allocate
 *
 * Return: a pointer to the allocated memory
 *         exits with status value of 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	exit(98);

	return (ptr);
}

