#include <stdio.h>

/**
 * main - displays zero through nine.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	printchar('\n');
	return (0);
}
