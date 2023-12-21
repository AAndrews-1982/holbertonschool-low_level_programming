#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - prints an array in a given range
 * @array: pointer to the array
 * @left: left index of the range
 * @right: right index of the range
 */
void print_array(const int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - performs binary search on an array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the 1st index where value is located, -1 if not or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;
	int middle;

	if (!array)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		middle = (left + right) / 2;

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}

	return (-1);
}
