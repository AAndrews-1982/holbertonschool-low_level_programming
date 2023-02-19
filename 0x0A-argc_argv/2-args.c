/*
 * File: 2-args.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of input args.
 * @argc: argument count.
 * @argv: argument vector for values.
 * @argc[0]: is the function name.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;/*arg c will not be used*/
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
