/*
 * File: 8-print_diagsums.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of 2 diagonals of a square matrix of integers
 * @a: array
 * @size: int
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int maxsize;
	int sum1 = 0;
	int sum2 = 0;

	maxsize = size * size;

	for (i = 0 ; i < maxsize ; i += size + 1)
	{
		sum1 += a[i];
	}

	for (i = size - 1 ; i < maxsize - 1 ; i += size - 1)
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
