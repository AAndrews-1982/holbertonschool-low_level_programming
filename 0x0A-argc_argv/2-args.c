/*
 * File: 2-args.c
 * Auth: Alton Andrews
 */

#include "main.h"
#include <stdio.h>

/**
 * main - prints name
 * @argc: argument count.
 * @argv: argument vector for values.
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
