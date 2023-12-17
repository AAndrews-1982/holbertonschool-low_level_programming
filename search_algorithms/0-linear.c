#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches a value in an array
 * @array: the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 *
 * Description: Performs a linear search on an array of integers.
 * Iterates through the array to find a specific value.
 * If the array is NULL, returns -1.
 *
 * Return: The first index where value is located, or -1 if not found or array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t index;

    if (array == NULL)
    {
        return (-1);
    }

    for (index = 0; index < size; index++)
    {
        printf("Value checked at index [%lu] = [%d]\n", index, array[index]);
        if (array[index] == value)
        {
            return (int)index;
        }
    }

    return (-1);
}

