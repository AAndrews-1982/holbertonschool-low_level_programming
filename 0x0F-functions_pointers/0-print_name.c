/*
 * File: 0-print_name.c
 * Auth: Alton Andrews
 */

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: pointer to name string
 * @f: function pointer to apply to name
 *
 * Description: This function takes a pointer to a name string and a function
 * pointer that takes a string as an argument and returns nothing. It applies
 * the function to the name and prints the resulting string.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
