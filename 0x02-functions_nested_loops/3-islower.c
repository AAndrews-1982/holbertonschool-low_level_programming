#include <stdio.h>

/**
 * main - Function that checks for lowercase character.
 *
 * Return 0:
 */
int main (void)
{
	char c;

	c='t';
	printf("Return value when %c is passed to islower(): %d", c, islower(c));

	c='D';
	printf("Return value when %c is passed to islower(): %d", c, islower(c));

	return (0);
}
