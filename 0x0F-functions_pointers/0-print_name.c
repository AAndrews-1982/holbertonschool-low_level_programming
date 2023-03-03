/*
 * File: 0-print_name.c
 * Auth: Alton Andrews
 */

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 *
 * @name: the name to print
 * @f: a function pointer to apply to the name
: *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

