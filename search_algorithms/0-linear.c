#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches a value in an array
 * @array: the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 *
 * Return: If the value is found return the value. Return -1 if not or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (array[index] == value)
		{
			printf("Value checked at index [%lu] = [%d]\n", index, array[index]);
			return (index);
		}
		printf("Value checked at index [%lu] = [%d]\n", index, array[index]);
	}

	return (-1);
}