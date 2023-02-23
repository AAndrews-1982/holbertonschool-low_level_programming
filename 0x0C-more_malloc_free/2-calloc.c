/*
 * File: 2-malloc.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int *arr;
	unsigned int i;

	arr = _calloc(5, sizeof(int));
	if (arr == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	free(arr);

	return (0);
}
