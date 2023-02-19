/*
 * File: 0-whatsmyname.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * argv[0] is function name. later positions have arguments made
 *@argv: program name followed by input arguments.
 *@argc: number of input arguments
 *
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
