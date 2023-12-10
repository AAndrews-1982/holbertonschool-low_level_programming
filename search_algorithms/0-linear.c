#include <stdio.h>

/**
 * linear_search - Searches for a value in an array using linear search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	/* Check if the array is NULL */
	if (array == NULL)
		return -1; /* Array is NULL, return -1 indicating value not found */

	/* Iterate through the array elements */
	for (size_t i = 0; i < size; i++)
	{
		/* Check if the current element is equal to the search value */
		if (array[i] == value)
			return i; /* Value found, return the index */

		/* Print the values being compared (optional and can be removed) */
		printf("Comparing %d with %d\n", array[i], value);
	}

	return -1; /* Value not found in the array */
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Define an array of integers */
	int arr[] = {5, 10, 15, 20, 25, 30};

	/* Calculate the number of elements in the array */
	size_t size = sizeof(arr) / sizeof(arr[0]);

	/* Specify the value to search for */
	int value_to_search = 20;

	/* Call the linear_search function to find the index of the value */
	int result = linear_search(arr, size, value_to_search);

	/* Check the result and print a corresponding message */
	if (result != -1)
	{
		/* Value found, print the final result including the index */
		printf("Value %d found at index %d\n", value_to_search, result);
	}
	else
	{
		/* Value not found, print a message */
		printf("Value %d not found in the array\n", value_to_search);
	}

	return 0;
}
