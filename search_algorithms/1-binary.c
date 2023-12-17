#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: Index where the value is located, or -1 if not found or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    int left = 0;
    int right = size - 1;
    int mid;
    int i; // Declare 'i' here

    while (left <= right)
    {
        mid = (left + right) / 2;

        printf("Searching in array: ");
        for (i = left; i <= right; i++) // Use 'i' here
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
            else
                printf("\n");
        }

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1); // Value not found
}