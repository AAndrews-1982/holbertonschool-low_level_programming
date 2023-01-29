#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign random number to variable n each time it is executed, prints whether it is positive or negative.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
       return (0);
}
