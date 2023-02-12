/*
 * File: 4-rev_array.c
 * Auth: Alton Andrews
 */

#include "holberton.h"

/**
 * reverse_array - reverse array of integers
 * @a: int array
 * @n: number of ints in an array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int temp;
	int counter;

	for (counter = 0 ; counter < n ; counter++)
	{
		temp = a[n - 1];
		a[n - 1] = a[counter];
		a[counter] = temp;
		n--;
	}
}
