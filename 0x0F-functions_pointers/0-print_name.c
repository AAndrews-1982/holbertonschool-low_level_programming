/*
 * File: 0-print_name.c
 * Auth: Alton Andrews
 */

#include "function_pointers.h"

/**
 * print_name- prints a name
 * @name: name to print
 * @f: function to use to print name with one
 *
 * Return: void return
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f && *name)
		f(name);
}
