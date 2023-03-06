/*
 * File: 1-array_iterator
 * Author: Alton Andrews
 */

#include "function_pointers.h"

/**
 * array_iterator - execute a func as param on els of arr
 * @array: array to iterate
 * @size: size of arrat
 * @action: func to ptr
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
