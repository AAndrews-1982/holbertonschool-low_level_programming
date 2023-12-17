#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Description: This function implements the binary search algorithm
 *              to find a specific value in a sorted integer array.
 *              It prints the current subarray being searched every iteration.
 *
 * Return: Index where value is located or -1 if not found or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
    int left = 0, right = (int)size - 1, mid, i;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
