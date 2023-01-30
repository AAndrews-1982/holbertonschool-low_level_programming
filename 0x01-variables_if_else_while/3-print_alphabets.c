#include <stdio.h>

/**
 * main - prints alphabet in upper and lower case.
 *
 * Return: 0
 */
int main(void)
{
	for (char c = 'a'; c<= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	for (char c = 'A'; c<= 'Z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	return 0;
}
