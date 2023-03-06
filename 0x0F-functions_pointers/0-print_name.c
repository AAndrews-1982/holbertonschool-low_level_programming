/*
 * File: 0-print_name.c
 * Auth: Alton Andrews
 */

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: string to be printed
 * @f: pointer to the function that prints the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
	f(name);
	}
}

