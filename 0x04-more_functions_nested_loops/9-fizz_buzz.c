/*
 * File: 9-fizz_buzz.c
 * Auth: Alton Andrews
 */

#include <stdio.h>

/**
 * main - Fizz Buzz
 * Description: Fizz -3 _ Buzz - 5 _ Fizz Buzz 5 & 3.
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
